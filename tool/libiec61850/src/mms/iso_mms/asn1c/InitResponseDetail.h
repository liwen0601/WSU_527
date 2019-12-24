/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_InitResponseDetail_H_
#define	_InitResponseDetail_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Integer16.h"
#include "ParameterSupportOptions.h"
#include "ServiceSupportOptions.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InitResponseDetail */
typedef struct InitResponseDetail {
	Integer16_t	 negotiatedVersionNumber;
	ParameterSupportOptions_t	 negotiatedParameterCBB;
	ServiceSupportOptions_t	 servicesSupportedCalled;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitResponseDetail_t;

/* Implementation */
LIB61850_INTERNAL extern asn_TYPE_descriptor_t asn_DEF_InitResponseDetail;

#ifdef __cplusplus
}
#endif

#endif	/* _InitResponseDetail_H_ */
