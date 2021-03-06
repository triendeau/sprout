/**
 * @file constants.h
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

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

const pj_str_t STR_SUPPORTED = pj_str("Supported");
const pj_str_t STR_REQUIRE = pj_str("Require");
const pj_str_t STR_PATH = pj_str("Path");
const pj_str_t STR_OUTBOUND = pj_str("outbound");
const pj_str_t STR_PARAM_OB = pj_str("ob");
const pj_str_t STR_SIP_INSTANCE = pj_str("+sip.instance");
const pj_str_t STR_REG_ID = pj_str("reg-id");
const pj_str_t STR_OB = pj_str("ob");
const pj_str_t STR_INTEGRITY_PROTECTED = pj_str("integrity-protected");
const pj_str_t STR_P_A_N_I = pj_str("P-Access-Network-Info");
const pj_str_t STR_P_SERVED_USER = pj_str("P-Served-User");
const pj_str_t STR_P_ASSERTED_IDENTITY = pj_str("P-Asserted-Identity");
const pj_str_t STR_REQUEST_DISPOSITION = pj_str("Request-Disposition");
const pj_str_t STR_ORIG = pj_str("orig");
const pj_str_t STR_NO_FORK = pj_str("no-fork");

/// Prefix of ODI tokens we generate.
const pj_str_t STR_ODI_PREFIX = pj_str("odi_");

const int SIP_STATUS_FLOW_FAILED = 430;
const pj_str_t SIP_REASON_FLOW_FAILED = pj_str("Flow failed");
const pj_str_t SIP_REASON_ENUM_FAILED = pj_str("ENUM translation failed");
const pj_str_t SIP_REASON_OFFNET_DISALLOWED = pj_str("Off-net calling not allowed");

#endif /* CONSTANTS_H_ */
