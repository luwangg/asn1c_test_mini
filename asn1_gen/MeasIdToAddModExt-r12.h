/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasIdToAddModExt_r12_H_
#define	_MeasIdToAddModExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasId-v1250.h"
#include "MeasObjectId.h"
#include "ReportConfigId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasIdToAddModExt-r12 */
typedef struct MeasIdToAddModExt_r12 {
	MeasId_v1250_t	 measId_v1250;
	MeasObjectId_t	 measObjectId_r12;
	ReportConfigId_t	 reportConfigId_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdToAddModExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdToAddModExt_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasIdToAddModExt_r12_H_ */
#include <asn_internal.h>