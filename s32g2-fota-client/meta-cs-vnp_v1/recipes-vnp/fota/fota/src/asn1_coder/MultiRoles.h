/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_MultiRoles_H_
#define	_MultiRoles_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiRole;

/* MultiRoles */
typedef struct MultiRoles {
	A_SEQUENCE_OF(struct MultiRole) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiRoles_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiRoles;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiRole.h"

#endif	/* _MultiRoles_H_ */
#include <asn_internal.h>
