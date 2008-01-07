/* $Id: xmpp-xep.h,v 1.1 2008/01/07 07:29:47 cdidier Exp $ */

#ifndef __XMPP_XEP_H
#define __XMPP_XEP_H

__BEGIN_DECLS
void xep_composing_start(XMPP_SERVER_REC *, const char *);
void xep_composing_stop(XMPP_SERVER_REC *, const char *);
void xep_disco_server(XMPP_SERVER_REC *, LmMessageNode *);
void xep_version_send(XMPP_SERVER_REC *, const char *, const char *);
void xep_version_handle(XMPP_SERVER_REC *, const char *, LmMessageNode *);
void xep_vcard_handle(XMPP_SERVER_REC *, const char *, LmMessageNode *);
__END_DECLS

#endif
