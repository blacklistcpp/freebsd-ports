# Created by: Simon Dick <simond@irrelevant.org>
# $FreeBSD$

PORTNAME=	uae
PORTVERSION=	0.8.29
PORTREVISION=	3
CATEGORIES=	emulators
MASTER_SITES=	LOCAL/grembo

MAINTAINER=	simond@irrelevant.org
COMMENT=	Commodore Amiga emulator

LICENSE=	GPLv2

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: socketbases
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: socketbases

CONFLICTS=	e-uae-[0-9]*
MAKE_JOBS_UNSAFE=yes

USES=		gmake gnome pkgconfig tar:bzip2
GNU_CONFIGURE=	yes
USE_GNOME=	gtk20

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|build68kc|build68k|' \
		${WRKSRC}/src/Makefile.in
	@${LN} -sf ../md-ppc/support.c ${WRKSRC}/src/md-ppc-gcc/support.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/uae ${WRKSRC}/readdisk \
		${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}/amiga/devs/AHI
	@${MKDIR} ${STAGEDIR}${DATADIR}/amiga/devs/AudioModes
	${INSTALL_DATA} ${WRKSRC}/amiga/mousehack ${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/timehack ${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/transdisk ${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/transrom ${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/uae-control ${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/uae-control.info \
		${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/uae_rcli ${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/uaectrl ${STAGEDIR}${DATADIR}/amiga
	${INSTALL_DATA} ${WRKSRC}/amiga/devs/AHI/uae.audio \
		${STAGEDIR}${DATADIR}/amiga/devs/AHI
	${INSTALL_DATA} ${WRKSRC}/amiga/devs/AudioModes/UAE \
		${STAGEDIR}${DATADIR}/amiga/devs/AudioModes

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/COMPATIBILITY ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/CREDITS ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/FAQ ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/NEWS ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/README ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/README.PROGRAMMERS ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/unix/README \
		${STAGEDIR}${DOCSDIR}/README.unix

.include <bsd.port.mk>
