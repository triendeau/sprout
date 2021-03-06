/**
 * @file xdmconnection.cpp HSSConnection class methods.
 *
 * Project Clearwater - IMS in the Cloud
 * Copyright (C) 2013  Metaswitch Networks Ltd
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version, along with the "Special Exception" for use of
 * the program along with SSL, set forth below. This program is distributed
 * in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details. You should have received a copy of the GNU General Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * The author can be reached by email at clearwater@metaswitch.com or by
 * post at Metaswitch Networks Ltd, 100 Church St, Enfield EN2 6BQ, UK
 *
 * Special Exception
 * Metaswitch Networks Ltd  grants you permission to copy, modify,
 * propagate, and distribute a work formed by combining OpenSSL with The
 * Software, or a work derivative of such a combination, even if such
 * copying, modification, propagation, or distribution would otherwise
 * violate the terms of the GPL. You must comply with the GPL in all
 * respects for all of the code used other than OpenSSL.
 * "OpenSSL" means OpenSSL toolkit software distributed by the OpenSSL
 * Project and licensed under the OpenSSL Licenses, or a work based on such
 * software and licensed under the OpenSSL Licenses.
 * "OpenSSL Licenses" means the OpenSSL License and Original SSLeay License
 * under which the OpenSSL Project distributes the OpenSSL toolkit software,
 * as those licenses appear in the file LICENSE-OPENSSL.
 */

///

#include <curl/curl.h>
#include <iostream>
#include <fstream>

#include "utils.h"
#include "log.h"
#include "sas.h"
#include "sasevent.h"
#include "httpconnection.h"
#include "xdmconnection.h"

/// Main constructor.
XDMConnection::XDMConnection(const std::string& server) :
  _http(new HttpConnection(server,
                           true,
                           SASEvent::TX_XDM_GET_BASE,
                           "connected_homers"))
{
}

/// Constructor supplying own connection. For UT use. Ownership passes
/// to this object.
XDMConnection::XDMConnection(HttpConnection* http) :
  _http(http)
{
}

XDMConnection::~XDMConnection()
{
  delete _http;
  _http = NULL;
}

bool XDMConnection::get_simservs(const std::string& user,
                                 std::string& xml_data,
                                 const std::string& password,
                                 SAS::TrailId trail)
{
  return _http->get("/org.etsi.ngn.simservs/users/" + Utils::url_escape(user) + "/simservs.xml", xml_data, user, trail);
}

