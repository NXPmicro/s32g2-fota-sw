/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#include "HashFunction.h"

int
HashFunction_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
HashFunction_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
HashFunction_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	HashFunction_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
HashFunction_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	HashFunction_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
HashFunction_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	HashFunction_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
HashFunction_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	HashFunction_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
HashFunction_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	HashFunction_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
HashFunction_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	HashFunction_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static const asn_INTEGER_enum_map_t asn_MAP_HashFunction_value2enum_1[] = {
	{ 0,	6,	"sha224" },
	{ 1,	6,	"sha256" },
	{ 2,	6,	"sha384" },
	{ 3,	6,	"sha512" },
	{ 4,	10,	"sha512-224" },
	{ 5,	10,	"sha512-256" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_HashFunction_enum2value_1[] = {
	0,	/* sha224(0) */
	1,	/* sha256(1) */
	2,	/* sha384(2) */
	3,	/* sha512(3) */
	4,	/* sha512-224(4) */
	5	/* sha512-256(5) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_HashFunction_specs_1 = {
	asn_MAP_HashFunction_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_HashFunction_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_HashFunction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_HashFunction = {
	"HashFunction",
	"HashFunction",
	HashFunction_free,
	HashFunction_print,
	HashFunction_constraint,
	HashFunction_decode_ber,
	HashFunction_encode_der,
	HashFunction_decode_xer,
	HashFunction_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_HashFunction_tags_1,
	sizeof(asn_DEF_HashFunction_tags_1)
		/sizeof(asn_DEF_HashFunction_tags_1[0]), /* 1 */
	asn_DEF_HashFunction_tags_1,	/* Same as above */
	sizeof(asn_DEF_HashFunction_tags_1)
		/sizeof(asn_DEF_HashFunction_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_HashFunction_specs_1	/* Additional specs */
};

