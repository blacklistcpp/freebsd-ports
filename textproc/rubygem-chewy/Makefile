# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	chewy
PORTVERSION=	6.0.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ODM and wrapper for Elasticsearch client

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activesupport60>=4.0:devel/rubygem-activesupport60 \
		rubygem-elasticsearch>=6.3.0:textproc/rubygem-elasticsearch \
		rubygem-elasticsearch-dsl>=0:textproc/rubygem-elasticsearch-dsl

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
