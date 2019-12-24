/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_GetVariableAccessAttributesResponse_H_
#define	_GetVariableAccessAttributesResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "TypeSpecification.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Address;

/* GetVariableAccessAttributesResponse */
typedef struct GetVariableAccessAttributesResponse {
	BOOLEAN_t	 mmsDeletable;
	struct Address	*address	/* OPTIONAL */;
	TypeSpecification_t	 typeSpecification;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetVariableAccessAttributesResponse_t;

/* Implementation */
LIB61850_INTERNAL extern asn_TYPE_descriptor_t asn_DEF_GetVariableAccessAttributesResponse;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Address.h"

#endif	/* _GetVariableAccessAttributesResponse_H_ */
