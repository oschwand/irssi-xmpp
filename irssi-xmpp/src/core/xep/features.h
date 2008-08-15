/* $Id: features.h,v 1.1 2008/08/15 00:25:21 cdidier Exp $ */

#ifndef __FEATURES_H
#define __FEATURES_H

__BEGIN_DECLS
void	xmpp_add_feature(XMPP_SERVER_REC *, const char *);

void	features_init(void);
void	features_deinit(void);
__END_DECLS

#endif
