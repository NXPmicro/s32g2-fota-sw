/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_Signatures_H_
#define	_Signatures_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Signature;

/* Signatures */
typedef struct Signatures {
	A_SEQUENCE_OF(struct Signature) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Signatures_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Signatures;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Signature.h"

#endif	/* _Signatures_H_ */
#include <asn_internal.h>
