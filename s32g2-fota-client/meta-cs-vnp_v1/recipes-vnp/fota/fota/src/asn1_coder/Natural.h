/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_Natural_H_
#define	_Natural_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Natural */
typedef long	 Natural_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Natural;
asn_struct_free_f Natural_free;
asn_struct_print_f Natural_print;
asn_constr_check_f Natural_constraint;
ber_type_decoder_f Natural_decode_ber;
der_type_encoder_f Natural_encode_der;
xer_type_decoder_f Natural_decode_xer;
xer_type_encoder_f Natural_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Natural_H_ */
#include <asn_internal.h>
