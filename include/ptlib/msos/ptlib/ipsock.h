/*
 * ipsock.h
 *
 * Internet Protocol socket I/O channel class.
 *
 * Portable Windows Library
 *
 * Copyright (c) 1993-1998 Equivalence Pty. Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Portable Windows Library.
 *
 * The Initial Developer of the Original Code is Equivalence Pty. Ltd.
 *
 * Portions are Copyright (C) 1993 Free Software Foundation, Inc.
 * All Rights Reserved.
 *
 * Contributor(s): ______________________________________.
 *
 * $Revision: 26863 $
 * $Author: ededu $
 * $Date: 2012-01-17 09:04:17 -0600 (Tue, 17 Jan 2012) $
 */

#ifndef EINPROGRESS
#define EINPROGRESS             (WSAEINPROGRESS|PWIN32ErrorFlag)
#define ENOTSOCK                (WSAENOTSOCK|PWIN32ErrorFlag)
#define EMSGSIZE                (WSAEMSGSIZE|PWIN32ErrorFlag)
#define EOPNOTSUPP              (WSAEOPNOTSUPP|PWIN32ErrorFlag)
#define EAFNOSUPPORT            (WSAEAFNOSUPPORT|PWIN32ErrorFlag)
#define EADDRINUSE              (WSAEADDRINUSE|PWIN32ErrorFlag)
#define EADDRNOTAVAIL           (WSAEADDRNOTAVAIL|PWIN32ErrorFlag)
#define ENETDOWN                (WSAENETDOWN|PWIN32ErrorFlag)
#define ENETUNREACH             (WSAENETUNREACH|PWIN32ErrorFlag)
#define ENETRESET               (WSAENETRESET|PWIN32ErrorFlag)
#define ECONNABORTED            (WSAECONNABORTED|PWIN32ErrorFlag)
#define ECONNRESET              (WSAECONNRESET|PWIN32ErrorFlag)
#define ENOBUFS                 (WSAENOBUFS|PWIN32ErrorFlag)
#define EISCONN                 (WSAEISCONN|PWIN32ErrorFlag)
#define ENOTCONN                (WSAENOTCONN|PWIN32ErrorFlag)
#define ETIMEDOUT               (WSAETIMEDOUT|PWIN32ErrorFlag)
#define ECONNREFUSED            (WSAECONNREFUSED|PWIN32ErrorFlag)
#define EHOSTUNREACH            (WSAEHOSTUNREACH|PWIN32ErrorFlag)
#define EWOULDBLOCK             (WSAEWOULDBLOCK|PWIN32ErrorFlag)
#endif


#define NETDB_SUCCESS 0


///////////////////////////////////////////////////////////////////////////////
// PIPSocket

// nothing to do


// End Of File ///////////////////////////////////////////////////////////////
