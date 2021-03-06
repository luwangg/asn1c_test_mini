/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasResultServFreq_r13_H_
#define	_MeasResultServFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex-r13.h"
#include "RSRP-Range.h"
#include "RSRQ-Range-r13.h"
#include "RS-SINR-Range-r13.h"
#include <constr_SEQUENCE.h>
#include "PhysCellId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultServFreq-r13 */
typedef struct MeasResultServFreq_r13 {
	ServCellIndex_r13_t	 servFreqId_r13;
	struct MeasResultServFreq_r13__measResultSCell_r13 {
		RSRP_Range_t	 rsrpResultSCell_r13;
		RSRQ_Range_r13_t	 rsrqResultSCell_r13;
		RS_SINR_Range_r13_t	*rs_sinr_Result_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultSCell_r13;
	struct MeasResultServFreq_r13__measResultBestNeighCell_r13 {
		PhysCellId_t	 physCellId_r13;
		RSRP_Range_t	 rsrpResultNCell_r13;
		RSRQ_Range_r13_t	 rsrqResultNCell_r13;
		RS_SINR_Range_r13_t	*rs_sinr_Result_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultBestNeighCell_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServFreq_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultServFreq_r13_H_ */
#include <asn_internal.h>
