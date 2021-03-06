# Created by: Danilo Egea Gondolfo <danilo@FreeBSD.org>
# $FreeBSD$

PORTNAME=	helm
PORTVERSION=	3.5.2
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Kubernetes Package Manager

LICENSE=	APACHE20

RUN_DEPENDS=	kubectl:sysutils/kubectl

USES=		go:modules tar:xz

USE_GITHUB=	yes

GH_TUPLE=	\
		Azure:go-ansiterm:d6e3b3328b78:azure_go_ansiterm/vendor/github.com/Azure/go-ansiterm \
		Azure:go-autorest:v14.2.0:azure_go_autorest/vendor/github.com/Azure/go-autorest \
		BurntSushi:toml:v0.3.1:burntsushi_toml/vendor/github.com/BurntSushi/toml \
		DATA-DOG:go-sqlmock:v1.5.0:data_dog_go_sqlmock/vendor/github.com/DATA-DOG/go-sqlmock \
		MakeNowJust:heredoc:bb23615498cd:makenowjust_heredoc/vendor/github.com/MakeNowJust/heredoc \
		Masterminds:goutils:v1.1.1:masterminds_goutils/vendor/github.com/Masterminds/goutils \
		Masterminds:semver:v3.1.1:masterminds_semver_v3/vendor/github.com/Masterminds/semver/v3 \
		Masterminds:sprig:v3.2.2:masterminds_sprig_v3/vendor/github.com/Masterminds/sprig/v3 \
		Masterminds:squirrel:v1.5.0:masterminds_squirrel/vendor/github.com/Masterminds/squirrel \
		Masterminds:vcs:v1.13.1:masterminds_vcs/vendor/github.com/Masterminds/vcs \
		Microsoft:go-winio:v0.4.16:microsoft_go_winio/vendor/github.com/Microsoft/go-winio \
		Microsoft:hcsshim:v0.8.14:microsoft_hcsshim/vendor/github.com/Microsoft/hcsshim \
		Nvveen:Gotty:cd527374f1e5:nvveen_gotty/vendor/github.com/Nvveen/Gotty \
		PuerkitoBio:purell:v1.1.1:puerkitobio_purell/vendor/github.com/PuerkitoBio/purell \
		PuerkitoBio:urlesc:de5bf2ad4578:puerkitobio_urlesc/vendor/github.com/PuerkitoBio/urlesc \
		Shopify:logrus-bugsnag:577dee27f20d:shopify_logrus_bugsnag/vendor/github.com/Shopify/logrus-bugsnag \
		asaskevich:govalidator:21a406dcc535:asaskevich_govalidator/vendor/github.com/asaskevich/govalidator \
		beorn7:perks:v1.0.1:beorn7_perks/vendor/github.com/beorn7/perks \
		bshuster-repo:logrus-logstash-hook:v0.4.1:bshuster_repo_logrus_logstash_hook/vendor/github.com/bshuster-repo/logrus-logstash-hook \
		bugsnag:bugsnag-go:b1d153021fcd:bugsnag_bugsnag_go/vendor/github.com/bugsnag/bugsnag-go \
		bugsnag:osext:0dd3f918b21b:bugsnag_osext/vendor/github.com/bugsnag/osext \
		bugsnag:panicwrap:e2c28503fcd0:bugsnag_panicwrap/vendor/github.com/bugsnag/panicwrap \
		census-instrumentation:opencensus-go:v0.22.3:census_instrumentation_opencensus_go/vendor/go.opencensus.io \
		cespare:xxhash:v2.1.1:cespare_xxhash_v2/vendor/github.com/cespare/xxhash/v2 \
		containerd:cgroups:0dbf7f05ba59:containerd_cgroups/vendor/github.com/containerd/cgroups \
		containerd:containerd:v1.4.3:containerd_containerd/vendor/github.com/containerd/containerd \
		containerd:continuity:180525291bb7:containerd_continuity/vendor/github.com/containerd/continuity \
		cpuguy83:go-md2man:v2.0.0:cpuguy83_go_md2man_v2/vendor/github.com/cpuguy83/go-md2man/v2 \
		cyphar:filepath-securejoin:v0.2.2:cyphar_filepath_securejoin/vendor/github.com/cyphar/filepath-securejoin \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		deislabs:oras:v0.10.0:deislabs_oras/vendor/github.com/deislabs/oras \
		docker:cli:v20.10.3:docker_cli/vendor/github.com/docker/cli \
		docker:distribution:a8371794149d:docker_distribution/vendor/github.com/docker/distribution \
		docker:go-connections:v0.4.0:docker_go_connections/vendor/github.com/docker/go-connections \
		docker:go-metrics:399ea8c73916:docker_go_metrics/vendor/github.com/docker/go-metrics \
		docker:go-units:v0.4.0:docker_go_units/vendor/github.com/docker/go-units \
		docker:libtrust:fa567046d9b1:docker_libtrust/vendor/github.com/docker/libtrust \
		docker:spdystream:449fdfce4d96:docker_spdystream/vendor/github.com/docker/spdystream \
		emicklei:go-restful:v2.9.5:emicklei_go_restful/vendor/github.com/emicklei/go-restful \
		evanphx:json-patch:v4.9.0:evanphx_json_patch/vendor/github.com/evanphx/json-patch \
		exponent-io:jsonpath:d6023ce2651d:exponent_io_jsonpath/vendor/github.com/exponent-io/jsonpath \
		fatih:color:v1.7.0:fatih_color/vendor/github.com/fatih/color \
		dgrijalva:jwt-go:v3.2.0:dgrijalva_jwt_go/vendor/github.com/dgrijalva/jwt-go \
		garyburd:redigo:535138d7bcd7:garyburd_redigo/vendor/github.com/garyburd/redigo \
		ghodss:yaml:v1.0.0:ghodss_yaml/vendor/github.com/ghodss/yaml \
		go-gorp:gorp:v1.7.2:go_gorp_gorp/vendor/gopkg.in/gorp.v1 \
		go-inf:inf:v0.9.1:go_inf_inf/vendor/gopkg.in/inf.v0 \
		go-logr:logr:v0.2.0:go_logr_logr/vendor/github.com/go-logr/logr \
		go-openapi:jsonpointer:v0.19.3:go_openapi_jsonpointer/vendor/github.com/go-openapi/jsonpointer \
		go-openapi:jsonreference:v0.19.3:go_openapi_jsonreference/vendor/github.com/go-openapi/jsonreference \
		go-openapi:spec:v0.19.3:go_openapi_spec/vendor/github.com/go-openapi/spec \
		go-openapi:swag:v0.19.5:go_openapi_swag/vendor/github.com/go-openapi/swag \
		go-yaml:yaml:9f266ea9e77c:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
		go-yaml:yaml:v2.3.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		gobwas:glob:v0.2.3:gobwas_glob/vendor/github.com/gobwas/glob \
		gofrs:flock:v0.8.0:gofrs_flock/vendor/github.com/gofrs/flock \
		gogo:protobuf:v1.3.1:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:appengine:v1.6.5:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:eec23a3978ad:golang_crypto/vendor/golang.org/x/crypto \
		golang:groupcache:8c9f03a8e57e:golang_groupcache/vendor/github.com/golang/groupcache \
		golang:net:69a78807bb2b:golang_net/vendor/golang.org/x/net \
		golang:oauth2:bf48bf16ab8d:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.4.3:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sync:09787c993a3a:golang_sync/vendor/golang.org/x/sync \
		golang:sys:22da62e12c0c:golang_sys/vendor/golang.org/x/sys \
		golang:term:f5c789dd3221:golang_term/vendor/golang.org/x/term \
		golang:text:v0.3.4:golang_text/vendor/golang.org/x/text \
		golang:time:3af7569d3a1e:golang_time/vendor/golang.org/x/time \
		google:btree:v1.0.0:google_btree/vendor/github.com/google/btree \
		google:go-cmp:v0.5.2:google_go_cmp/vendor/github.com/google/go-cmp \
		google:go-genproto:8816d57aaa9a:google_go_genproto/vendor/google.golang.org/genproto \
		google:gofuzz:v1.1.0:google_gofuzz/vendor/github.com/google/gofuzz \
		google:uuid:v1.1.2:google_uuid/vendor/github.com/google/uuid \
		googleapis:gnostic:v0.4.1:googleapis_gnostic/vendor/github.com/googleapis/gnostic \
		googleapis:google-cloud-go:v0.54.0:googleapis_google_cloud_go/vendor/cloud.google.com/go \
		gorilla:handlers:60c7bfde3e33:gorilla_handlers/vendor/github.com/gorilla/handlers \
		gorilla:mux:v1.7.3:gorilla_mux/vendor/github.com/gorilla/mux \
		gosuri:uitable:v0.0.4:gosuri_uitable/vendor/github.com/gosuri/uitable \
		gregjones:httpcache:9cad4c3443a7:gregjones_httpcache/vendor/github.com/gregjones/httpcache \
		grpc:grpc-go:v1.27.1:grpc_grpc_go/vendor/google.golang.org/grpc \
		hashicorp:golang-lru:v0.5.1:hashicorp_golang_lru/vendor/github.com/hashicorp/golang-lru \
		huandu:xstrings:v1.3.1:huandu_xstrings/vendor/github.com/huandu/xstrings \
		imdario:mergo:v0.3.11:imdario_mergo/vendor/github.com/imdario/mergo \
		inconshreveable:mousetrap:v1.0.0:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
		jmoiron:sqlx:v1.2.0:jmoiron_sqlx/vendor/github.com/jmoiron/sqlx \
		json-iterator:go:v1.1.10:json_iterator_go/vendor/github.com/json-iterator/go \
		kubernetes-sigs:kustomize:v2.0.3:kubernetes_sigs_kustomize/vendor/sigs.k8s.io/kustomize \
		kubernetes-sigs:structured-merge-diff:v4.0.2:kubernetes_sigs_structured_merge_diff/vendor/sigs.k8s.io/structured-merge-diff/v4 \
		kubernetes-sigs:yaml:v1.2.0:kubernetes_sigs_yaml/vendor/sigs.k8s.io/yaml \
		kubernetes:api:v0.20.2:kubernetes_api/vendor/k8s.io/api \
		kubernetes:apiextensions-apiserver:v0.20.2:kubernetes_apiextensions_apiserver/vendor/k8s.io/apiextensions-apiserver \
		kubernetes:apimachinery:v0.20.2:kubernetes_apimachinery/vendor/k8s.io/apimachinery \
		kubernetes:apiserver:v0.20.2:kubernetes_apiserver/vendor/k8s.io/apiserver \
		kubernetes:cli-runtime:v0.20.2:kubernetes_cli_runtime/vendor/k8s.io/cli-runtime \
		kubernetes:client-go:v0.20.2:kubernetes_client_go/vendor/k8s.io/client-go \
		kubernetes:component-base:v0.20.2:kubernetes_component_base/vendor/k8s.io/component-base \
		kubernetes:klog:v2.4.0:kubernetes_klog/vendor/k8s.io/klog/v2 \
		kubernetes:kube-openapi:d219536bb9fd:kubernetes_kube_openapi/vendor/k8s.io/kube-openapi \
		kubernetes:kubectl:v0.20.1:kubernetes_kubectl/vendor/k8s.io/kubectl \
		kubernetes:utils:67b214c5f920:kubernetes_utils/vendor/k8s.io/utils \
		lann:builder:47ae307949d0:lann_builder/vendor/github.com/lann/builder \
		lann:ps:62de8c46ede0:lann_ps/vendor/github.com/lann/ps \
		lib:pq:v1.9.0:lib_pq/vendor/github.com/lib/pq \
		liggitt:tabwriter:89fcab3d43de:liggitt_tabwriter/vendor/github.com/liggitt/tabwriter \
		mailru:easyjson:v0.7.0:mailru_easyjson/vendor/github.com/mailru/easyjson \
		mattn:go-colorable:v0.0.9:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.4:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		mattn:go-runewidth:v0.0.4:mattn_go_runewidth/vendor/github.com/mattn/go-runewidth \
		mattn:go-shellwords:v1.0.10:mattn_go_shellwords/vendor/github.com/mattn/go-shellwords \
		matttproud:golang_protobuf_extensions:c182affec369:matttproud_golang_protobuf_extensions/vendor/github.com/matttproud/golang_protobuf_extensions \
		mitchellh:copystructure:v1.0.0:mitchellh_copystructure/vendor/github.com/mitchellh/copystructure \
		mitchellh:go-wordwrap:v1.0.0:mitchellh_go_wordwrap/vendor/github.com/mitchellh/go-wordwrap \
		mitchellh:reflectwalk:v1.0.0:mitchellh_reflectwalk/vendor/github.com/mitchellh/reflectwalk \
		docker:docker-credential-helpers:v0.6.3:docker_docker_credential_helpers/vendor/github.com/docker/docker-credential-helpers \
		moby:moby:v17.12.0-ce:moby_moby_1/vendor/github.com/docker/docker \
		moby:term:672ec06f55cd:moby_term/vendor/github.com/moby/term \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.1:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		morikuni:aec:v1.0.0:morikuni_aec/vendor/github.com/morikuni/aec \
		opencontainers:go-digest:v1.0.0:opencontainers_go_digest/vendor/github.com/opencontainers/go-digest \
		opencontainers:image-spec:v1.0.1:opencontainers_image_spec/vendor/github.com/opencontainers/image-spec \
		opencontainers:runc:v0.1.1:opencontainers_runc/vendor/github.com/opencontainers/runc \
		peterbourgon:diskv:v2.0.1:peterbourgon_diskv/vendor/github.com/peterbourgon/diskv \
		phayes:freeport:95f893ade6f2:phayes_freeport/vendor/github.com/phayes/freeport \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		prometheus:client_golang:v1.7.1:prometheus_client_golang/vendor/github.com/prometheus/client_golang \
		prometheus:client_model:v0.2.0:prometheus_client_model/vendor/github.com/prometheus/client_model \
		prometheus:common:v0.10.0:prometheus_common/vendor/github.com/prometheus/common \
		prometheus:procfs:v0.2.0:prometheus_procfs/vendor/github.com/prometheus/procfs \
		protocolbuffers:protobuf-go:v1.25.0:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		rubenv:sql-migrate:8d140a17f351:rubenv_sql_migrate/vendor/github.com/rubenv/sql-migrate \
		russross:blackfriday:v1.5.2:russross_blackfriday/vendor/github.com/russross/blackfriday \
		russross:blackfriday:v2.0.1:russross_blackfriday_v2/vendor/github.com/russross/blackfriday/v2 \
		shopspring:decimal:v1.2.0:shopspring_decimal/vendor/github.com/shopspring/decimal \
		shurcooL:sanitized_anchor_name:v1.0.0:shurcool_sanitized_anchor_name/vendor/github.com/shurcooL/sanitized_anchor_name \
		sirupsen:logrus:v1.7.0:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		spf13:cast:v1.3.1:spf13_cast/vendor/github.com/spf13/cast \
		spf13:cobra:v1.1.1:spf13_cobra/vendor/github.com/spf13/cobra \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		stretchr:testify:v1.7.0:stretchr_testify/vendor/github.com/stretchr/testify \
		xeipuuv:gojsonpointer:4e3ac2762d5f:xeipuuv_gojsonpointer/vendor/github.com/xeipuuv/gojsonpointer \
		xeipuuv:gojsonreference:bd5ef7bd5415:xeipuuv_gojsonreference/vendor/github.com/xeipuuv/gojsonreference \
		xeipuuv:gojsonschema:v1.2.0:xeipuuv_gojsonschema/vendor/github.com/xeipuuv/gojsonschema \
		yvasiyarov:go-metrics:57bccd1ccd43:yvasiyarov_go_metrics/vendor/github.com/yvasiyarov/go-metrics \
		yvasiyarov:gorelic:a9bba5b9ab50:yvasiyarov_gorelic/vendor/github.com/yvasiyarov/gorelic \
		yvasiyarov:newrelic_platform_go:b21fdbd4370f:yvasiyarov_newrelic_platform_go/vendor/github.com/yvasiyarov/newrelic_platform_go

GO_PKGNAME=	k8s.io/helm
GO_BUILDFLAGS=	-ldflags="-X helm.sh/helm/v3/internal/version.version=v${PORTVERSION} \
		-X helm.sh/helm/v3/internal/version.gitCommit=167aac70832d3a384f65f9745335e9fb40169dc2"
GO_TARGET=	./cmd/${PORTNAME}

PLIST_FILES=	${GO_TARGET:C/.\/cmd/bin/}

OPTIONS_DEFINE=		BASH FISH ZSH
OPTIONS_DEFAULT=	BASH FISH ZSH

BASH_PLIST_FILES=	share/bash-completion/completions/helm
FISH_PLIST_FILES=	share/fish/vendor_functions.d/helm.fish
ZSH_PLIST_FILES=	share/zsh/site-functions/_helm

post-install-BASH-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/bash-completion/completions
	${STAGEDIR}${PREFIX}/bin/helm completion bash > ${STAGEDIR}${PREFIX}/share/bash-completion/completions/helm

post-install-FISH-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/fish/vendor_functions.d
	${STAGEDIR}${PREFIX}/bin/helm completion fish > ${STAGEDIR}${PREFIX}/share/fish/vendor_functions.d/helm.fish

post-install-ZSH-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${STAGEDIR}${PREFIX}/bin/helm completion zsh > ${STAGEDIR}${PREFIX}/share/zsh/site-functions/_helm

.include <bsd.port.mk>
