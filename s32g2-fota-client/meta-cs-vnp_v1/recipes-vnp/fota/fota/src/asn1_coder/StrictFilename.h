/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_StrictFilename_H_
#define	_StrictFilename_H_


#include <asn_application.h>

/* Including external dependencies */
#include <VisibleString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* StrictFilename */
typedef VisibleString_t	 StrictFilename_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StrictFilename;
asn_struct_free_f StrictFilename_free;
asn_struct_print_f StrictFilename_print;
asn_constr_check_f StrictFilename_constraint;
ber_type_decoder_f StrictFilename_decode_ber;
der_type_encoder_f StrictFilename_encode_der;
xer_type_decoder_f StrictFilename_decode_xer;
xer_type_encoder_f StrictFilename_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _StrictFilename_H_ */
#include <asn_internal.h>
