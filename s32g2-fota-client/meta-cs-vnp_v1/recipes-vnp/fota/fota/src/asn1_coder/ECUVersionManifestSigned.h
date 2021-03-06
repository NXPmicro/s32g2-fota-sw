/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_ECUVersionManifestSigned_H_
#define	_ECUVersionManifestSigned_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Identifier.h"
#include "UTCDateTime.h"
#include <VisibleString.h>
#include "Target.h"
#include "SwClusterStateType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ECUVersionManifestSigned */
typedef struct ECUVersionManifestSigned {
	Identifier_t	 ecuIdentifier;
	UTCDateTime_t	 previousTime;
	UTCDateTime_t	 currentTime;
	VisibleString_t	*securityAttack	/* OPTIONAL */;
	Target_t	 installedImage;
	SwClusterStateType_t	 state;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ECUVersionManifestSigned_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ECUVersionManifestSigned;

#ifdef __cplusplus
}
#endif

#endif	/* _ECUVersionManifestSigned_H_ */
#include <asn_internal.h>
