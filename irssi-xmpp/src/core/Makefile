# $Id: Makefile,v 1.15 2008/08/15 00:25:21 cdidier Exp $

LIB= xmpp_core
SRCS=	xmpp-commands.c \
	xmpp-core.c \
	xmpp-queries.c \
	xmpp-servers.c \
	xmpp-servers-reconnect.c \
	xmpp-session.c \
	xmpp-settings.c \
	loudmouth-tools.c \
	protocol.c \
	rosters.c \
	rosters-tools.c \
	stanzas.c \
	tools.c \
	xep/features.c \
	xep/xep.c

LIB_LIBS = `pkg-config --libs loudmouth-1.0`

include ../rules.mk
