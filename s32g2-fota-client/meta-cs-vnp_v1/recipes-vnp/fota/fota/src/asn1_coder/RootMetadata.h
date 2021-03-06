/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_RootMetadata_H_
#define	_RootMetadata_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Length.h"
#include "PublicKeys.h"
#include "TopLevelRoles.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RootMetadata */
typedef struct RootMetadata {
	Length_t	 numberOfKeys;
	PublicKeys_t	 keys;
	Length_t	 numberOfRoles;
	TopLevelRoles_t	 roles;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RootMetadata_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RootMetadata;

#ifdef __cplusplus
}
#endif

#endif	/* _RootMetadata_H_ */
#include <asn_internal.h>
