/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_GetNameListRequest_H_
#define	_GetNameListRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ObjectClass.h"
#include "Identifier.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GetNameListRequest__objectScope_PR {
	GetNameListRequest__objectScope_PR_NOTHING,	/* No components present */
	GetNameListRequest__objectScope_PR_vmdSpecific,
	GetNameListRequest__objectScope_PR_domainSpecific,
	GetNameListRequest__objectScope_PR_aaSpecific
} GetNameListRequest__objectScope_PR;

/* GetNameListRequest */
typedef struct GetNameListRequest {
	ObjectClass_t	 objectClass;
	struct GetNameListRequest__objectScope {
		GetNameListRequest__objectScope_PR present;
		union GetNameListRequest__objectScope_u {
			NULL_t	 vmdSpecific;
			Identifier_t	 domainSpecific;
			NULL_t	 aaSpecific;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} objectScope;
	Identifier_t	*continueAfter	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetNameListRequest_t;

/* Implementation */
LIB61850_INTERNAL extern asn_TYPE_descriptor_t asn_DEF_GetNameListRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _GetNameListRequest_H_ */
