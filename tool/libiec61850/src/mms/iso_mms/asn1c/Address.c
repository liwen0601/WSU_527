/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "Address.h"

static asn_TYPE_member_t asn_MBR_Address_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Address, choice.numericAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numericAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Address, choice.symbolicAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"symbolicAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Address, choice.unconstrainedAddress),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unconstrainedAddress"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Address_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numericAddress at 792 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* symbolicAddress at 793 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* unconstrainedAddress at 794 */
};
static asn_CHOICE_specifics_t asn_SPC_Address_specs_1 = {
	sizeof(struct Address),
	offsetof(struct Address, _asn_ctx),
	offsetof(struct Address, present),
	sizeof(((struct Address *)0)->present),
	asn_MAP_Address_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Address = {
	"Address",
	"Address",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_Address_1,
	3,	/* Elements count */
	&asn_SPC_Address_specs_1	/* Additional specs */
};

