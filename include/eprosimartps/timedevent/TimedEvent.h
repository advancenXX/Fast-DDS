/*************************************************************************
 * Copyright (c) 2014 eProsima. All rights reserved.
 *
 * This copy of eProsima RTPS is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

/**
 * @file PeriodicEvent.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Gonzalo Rodriguez Canosa
 *      email:  gonzalorodriguez@eprosima.com
 *              grcanosa@gmail.com  	
 */



#ifndef PERIODICEVENT_H_
#define PERIODICEVENT_H_

#include <boost/asio/io_service.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

namespace eprosima {
namespace rtps{


class TimedEvent {
public:
	TimedEvent();
	virtual ~TimedEvent();
	TimedEvent(boost::asio::io_service serv,boost::posix_time::milliseconds interval):
		timer(new boost::asio::deadline_timer(serv,interval)){}
	boost::asio::deadline_timer* timer;
	virtual void operator();
};




}
} /* namespace eprosima */

#endif /* PERIODICEVENT_H_ */
