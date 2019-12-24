/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_IndexRangeSeq_H_
#define	_IndexRangeSeq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Unsigned32.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IndexRangeSeq */
typedef struct IndexRangeSeq {
	Unsigned32_t	 lowIndex;
	Unsigned32_t	 numberOfElements;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IndexRangeSeq_t;

/* Implementation */
LIB61850_INTERNAL extern asn_TYPE_descriptor_t asn_DEF_IndexRangeSeq;

#ifdef __cplusplus
}
#endif

#endif	/* _IndexRangeSeq_H_ */
