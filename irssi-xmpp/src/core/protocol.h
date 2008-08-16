/* $Id: protocol.h,v 1.2 2008/08/16 14:31:03 cdidier Exp $ */

#ifndef __PROTOCOL_H
#define __PROTOCOL_H

#include "xmpp-servers.h"

__BEGIN_DECLS
void	xmpp_send_message(XMPP_SERVER_REC *, const char *, const char *);

void	protocol_init(void);
void	protocol_deinit(void);
__END_DECLS

#endif
