/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_FloatingPoint_H_
#define	_FloatingPoint_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FloatingPoint */
typedef OCTET_STRING_t	 FloatingPoint_t;

/* Implementation */
LIB61850_INTERNAL extern asn_TYPE_descriptor_t asn_DEF_FloatingPoint;
LIB61850_INTERNAL asn_struct_free_f FloatingPoint_free;
LIB61850_INTERNAL asn_struct_print_f FloatingPoint_print;
LIB61850_INTERNAL asn_constr_check_f FloatingPoint_constraint;
LIB61850_INTERNAL ber_type_decoder_f FloatingPoint_decode_ber;
LIB61850_INTERNAL der_type_encoder_f FloatingPoint_encode_der;
LIB61850_INTERNAL xer_type_decoder_f FloatingPoint_decode_xer;
LIB61850_INTERNAL xer_type_encoder_f FloatingPoint_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _FloatingPoint_H_ */
