#!/bin/bash

files_to_exclude=(
    './include/fastrtps/types/dds-builtin_types.idl'
    './include/fastrtps/types/dds-language_binding.idl'
    './include/fastrtps/types/dds-xtypes_discovery.idl'
    './include/fastrtps/types/dds-xtypes_typeobject.idl'
    './include/fastrtps/types/BuiltinAnnotations.idl'
    )

files_needing_typeobject=(
    './examples/cpp/dds/ContentFilteredTopicExample/HelloWorld.idl'
    './test/unittest/dynamic_types/idl/Basic.idl'
    './test/unittest/dynamic_types/idl/new_features_4_2.idl'
    './test/unittest/dynamic_types/idl/Test.idl'
    './test/unittest/xtypes/idl/Types.idl'
    './test/unittest/xtypes/idl/WideEnum.idl'
    './test/xtypes/idl/Types.idl'
    )

files_needing_case_sensitive=(
    './test/unittest/dynamic_types/idl/new_features_4_2.idl'
    )

files_needing_output_dir=(
    './include/fastdds/statistics/types.idl|../../../src/cpp/statistics/types'
    )


yellow='\E[1;33m'
textreset='\E[1;0m'

if [[ $(ls update_generated_code_from_idl.sh 2>/dev/null | wc -l) != 1 ]]; then
    echo "Please, execute this script from its directory"
    exit -1
fi

if [[ -z "$(which fastddsgen)" ]]; then
    echo "Cannot find fastddsgen. Please, include it in PATH environment variable"
    exit -1
fi

cd ../..

readarray -d '' idl_files < <(find . -iname \*.idl -print0)

for del in ${files_to_exclude[@]}
do
    idl_files=("${idl_files[@]/$del}")
done

idl_files=(${idl_files[@]/$files_to_exclude})

ret_value=0

for idl_file in "${idl_files[@]}"; do
    idl_dir=$(dirname "$idl_file")
    file_from_gen=$(basename "$idl_file")

    echo -e "Processing ${yellow}$idl_file${textreset}"

    cd "${idl_dir}"

    # Detect if needs type_object.
    [[ ${files_needing_typeobject[*]} =~ $idl_file ]] && to_arg='-typeobject' || to_arg=''

    # Detect if needs case sensitive.
    [[ ${files_needing_case_sensitive[*]} =~ $idl_file ]] && cs_arg='-cs' || cs_arg=''

    # Detect if needs output directory.
    od_arg=""
    for od_entry in ${files_needing_output_dir[@]}; do
        if [[ $od_entry = $idl_file\|* ]]; then
            od_entry_split=(${od_entry//\|/ })
            od_arg="-d ${od_entry_split[1]}"
            break
        fi
    done

    fastddsgen -replace $to_arg $cs_arg $od_arg "$file_from_gen"

    if [[ $? != 0 ]]; then
        ret_value=-1
    fi

    cd -
done

# Move source files to src/cpp
echo "*************************************************************"
echo "Moving files to src/cpp. Please remember to update the include header path"
mv ./include/fastrtps/types/TypeObjectHashId.cxx ./src/cpp/dynamic-types/TypeObjectHashId.cxx
mv ./include/fastrtps/types/TypeIdentifierTypes.cxx ./src/cpp/dynamic-types/TypeIdentifierTypes.cxx
mv ./include/fastrtps/types/TypeIdentifier.cxx ./src/cpp/dynamic-types/TypeIdentifier.cxx
mv ./include/fastrtps/types/AnnotationParameterValue.cxx ./src/cpp/dynamic-types/AnnotationParameterValue.cxx
mv ./include/fastrtps/types/TypeObject.cxx ./src/cpp/dynamic-types/TypeObject.cxx

# Remove unused files
rm ./include/fastrtps/types/XTypesBase.cxx
rm ./include/fastrtps/types/TypeIdentifierTypesPubSubTypes.cxx
rm ./include/fastrtps/types/TypeIdentifierTypesPubSubTypes.h
rm ./include/fastrtps/types/AnnotationParameterValuePubSubTypes.cxx
rm ./include/fastrtps/types/AnnotationParameterValuePubSubTypes.h
rm ./include/fastrtps/types/TypeObjectPubSubTypes.cxx
rm ./include/fastrtps/types/TypeObjectPubSubTypes.h

echo "Please, remember also to keep changes related to non-supported @external annotation in TypeIdentifierTypes files and dependent source files"

cd utils/scripts

exit $ret_value
