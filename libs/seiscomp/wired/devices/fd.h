/***************************************************************************
 * Copyright (C) gempa GmbH                                                *
 * All rights reserved.                                                    *
 * Contact: gempa GmbH (seiscomp-dev@gempa.de)                             *
 *                                                                         *
 * GNU Affero General Public License Usage                                 *
 * This file may be used under the terms of the GNU Affero                 *
 * Public License version 3.0 as published by the Free Software Foundation *
 * and appearing in the file LICENSE included in the packaging of this     *
 * file. Please review the following information to ensure the GNU Affero  *
 * Public License version 3.0 requirements will be met:                    *
 * https://www.gnu.org/licenses/agpl-3.0.html.                             *
 *                                                                         *
 * Other Usage                                                             *
 * Alternatively, this file may be used in accordance with the terms and   *
 * conditions contained in a signed written agreement between you and      *
 * gempa GmbH.                                                             *
 ***************************************************************************/


#ifndef SEISCOMP_WIRED_FD_H
#define SEISCOMP_WIRED_FD_H


#include <seiscomp/wired/device.h>


namespace Seiscomp {
namespace Wired {


DEFINE_SMARTPOINTER(FileDescriptor);

class FileDescriptor : public Device {
	public:
		FileDescriptor();
		FileDescriptor(int fd);

		~FileDescriptor();

	public:
		void close() override;
		ssize_t write(const char *data, size_t len) override;
		ssize_t read(char *data, size_t len) override;
};


}
}


#endif