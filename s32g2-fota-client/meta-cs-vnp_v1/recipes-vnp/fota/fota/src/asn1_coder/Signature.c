/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#include "Signature.h"

static asn_TYPE_member_t asn_MBR_Signature_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, keyid),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Keyid,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"keyid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, method),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignatureMethod,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"method"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OctetString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_Signature_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Signature_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* keyid */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* method */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
static asn_SEQUENCE_specifics_t asn_SPC_Signature_specs_1 = {
	sizeof(struct Signature),
	offsetof(struct Signature, _asn_ctx),
	asn_MAP_Signature_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Signature = {
	"Signature",
	"Signature",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Signature_tags_1,
	sizeof(asn_DEF_Signature_tags_1)
		/sizeof(asn_DEF_Signature_tags_1[0]), /* 1 */
	asn_DEF_Signature_tags_1,	/* Same as above */
	sizeof(asn_DEF_Signature_tags_1)
		/sizeof(asn_DEF_Signature_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Signature_1,
	3,	/* Elements count */
	&asn_SPC_Signature_specs_1	/* Additional specs */
};
