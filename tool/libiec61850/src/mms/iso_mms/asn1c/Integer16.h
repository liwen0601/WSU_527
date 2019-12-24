/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_Integer16_H_
#define	_Integer16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Integer16 */
typedef long	 Integer16_t;

/* Implementation */
LIB61850_INTERNAL extern asn_TYPE_descriptor_t asn_DEF_Integer16;
LIB61850_INTERNAL asn_struct_free_f Integer16_free;
LIB61850_INTERNAL asn_struct_print_f Integer16_print;
LIB61850_INTERNAL asn_constr_check_f Integer16_constraint;
LIB61850_INTERNAL ber_type_decoder_f Integer16_decode_ber;
LIB61850_INTERNAL der_type_encoder_f Integer16_encode_der;
LIB61850_INTERNAL xer_type_decoder_f Integer16_decode_xer;
LIB61850_INTERNAL xer_type_encoder_f Integer16_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Integer16_H_ */
