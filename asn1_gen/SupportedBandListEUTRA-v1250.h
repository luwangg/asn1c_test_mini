/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandListEUTRA_v1250_H_
#define	_SupportedBandListEUTRA_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandEUTRA_v1250;

/* SupportedBandListEUTRA-v1250 */
typedef struct SupportedBandListEUTRA_v1250 {
	A_SEQUENCE_OF(struct SupportedBandEUTRA_v1250) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandListEUTRA_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandListEUTRA_v1250;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandEUTRA-v1250.h"

#endif	/* _SupportedBandListEUTRA_v1250_H_ */
#include <asn_internal.h>