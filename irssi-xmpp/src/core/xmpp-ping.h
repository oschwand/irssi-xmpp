/* $Id: xmpp-ping.h,v 1.2 2008/01/07 07:29:13 cdidier Exp $ */

#ifndef __XMPP_PING_H
#define __XMPP_PING_H

__BEGIN_DECLS
void xmpp_ping_send(XMPP_SERVER_REC *, const char *);

void xmpp_ping_init(void);
void xmpp_ping_deinit(void);
__END_DECLS

#endif
