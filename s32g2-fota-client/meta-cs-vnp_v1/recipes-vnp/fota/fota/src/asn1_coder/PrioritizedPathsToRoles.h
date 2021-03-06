/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_PrioritizedPathsToRoles_H_
#define	_PrioritizedPathsToRoles_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PathsToRoles;

/* PrioritizedPathsToRoles */
typedef struct PrioritizedPathsToRoles {
	A_SEQUENCE_OF(struct PathsToRoles) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrioritizedPathsToRoles_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrioritizedPathsToRoles;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PathsToRoles.h"

#endif	/* _PrioritizedPathsToRoles_H_ */
#include <asn_internal.h>
