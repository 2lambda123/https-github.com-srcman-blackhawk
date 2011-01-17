/*
 * Copyright (C) 2009-2010, Oy L M Ericsson Ab, NomadicLab.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * Alternatively, this software may be distributed under the terms of
 * the BSD license.
 *
 * See LICENSE and COPYING for more details.
 */

#define PS_ETHER_TYPE 0xACDC	/* XXX */

#define PROTO_PUBSUB 1		/* XXX */

int ps_socket_init(void);
int ps_socket_cleanup(void);
