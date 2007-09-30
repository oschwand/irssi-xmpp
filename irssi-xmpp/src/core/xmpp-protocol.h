/* $Id: xmpp-protocol.h,v 1.11 2007/09/30 12:12:36 cdidier Exp $ */

#ifndef __XMPP_PROTOCOL_H
#define __XMPP_PROTOCOL_H

#define XMPP_PROTOCOL_LEVEL 1

__BEGIN_DECLS
void	xmpp_send_message(XMPP_SERVER_REC *, const char *, const char *);

void	xmpp_protocol_init(void);
void	xmpp_protocol_deinit(void);
__END_DECLS

#endif
