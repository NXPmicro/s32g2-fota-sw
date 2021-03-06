/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#include "Hash.h"

static asn_TYPE_member_t asn_MBR_Hash_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Hash, function),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HashFunction,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"function"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Hash, digest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OctetString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"digest"
		},
};
static const ber_tlv_tag_t asn_DEF_Hash_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Hash_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* function */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* digest */
};
static asn_SEQUENCE_specifics_t asn_SPC_Hash_specs_1 = {
	sizeof(struct Hash),
	offsetof(struct Hash, _asn_ctx),
	asn_MAP_Hash_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Hash = {
	"Hash",
	"Hash",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Hash_tags_1,
	sizeof(asn_DEF_Hash_tags_1)
		/sizeof(asn_DEF_Hash_tags_1[0]), /* 1 */
	asn_DEF_Hash_tags_1,	/* Same as above */
	sizeof(asn_DEF_Hash_tags_1)
		/sizeof(asn_DEF_Hash_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Hash_1,
	2,	/* Elements count */
	&asn_SPC_Hash_specs_1	/* Additional specs */
};

