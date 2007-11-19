/* $Id: loudmouth-tools.h,v 1.4 2007/11/19 13:14:26 cdidier Exp $ */

#ifndef __LOUDMOUTH_TOOLS_H
#define __LOUDMOUTH_TOOLS_H

#include "xmpp-servers.h"

__BEGIN_DECLS
LmMessageNode	*lm_tools_message_node_find(LmMessageNode *, const char *,
		     const char *, const char *);
gboolean	 lm_send(XMPP_SERVER_REC *, LmMessage *, GError **);
__END_DECLS

#endif
