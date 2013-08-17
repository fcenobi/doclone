/*
 *  libdoclone - library for cloning GNU/Linux systems
 *  Copyright (C) 2013 Joan Lledó <joanlluislledo@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef NOBLOCKDEVICEEXCEPTION_H_
#define NOBLOCKDEVICEEXCEPTION_H_

#include <doclone/exception/ErrorException.h>

namespace Doclone {

/**
 * \addtogroup Exceptions
 * @{
 *
 * \class NoBlockDeviceException
 * \brief Not a valid block device.
 *
 * The introduced device is not a valid block device, or is not a device at all.
 * \date August, 2011
 */
class NoBlockDeviceException : public ErrorException {
public:
	NoBlockDeviceException() throw() {
		this->_msg=D_("Not a block device");
	}

};
/**@}*/

}

#endif /* NOBLOCKDEVICEEXCEPTION_H_ */
