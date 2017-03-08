/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellReselectionParametersCDMA2000_r11_H_
#define	_CellReselectionParametersCDMA2000_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandClassListCDMA2000.h"
#include "T-Reselection.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;
struct NeighCellCDMA2000_r11;

/* CellReselectionParametersCDMA2000-r11 */
typedef struct CellReselectionParametersCDMA2000_r11 {
	BandClassListCDMA2000_t	 bandClassList;
	struct CellReselectionParametersCDMA2000_r11__neighCellList_r11 {
		A_SEQUENCE_OF(struct NeighCellCDMA2000_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} neighCellList_r11;
	T_Reselection_t	 t_ReselectionCDMA2000;
	struct SpeedStateScaleFactors	*t_ReselectionCDMA2000_SF	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionParametersCDMA2000_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionParametersCDMA2000_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedStateScaleFactors.h"
#include "NeighCellCDMA2000-r11.h"

#endif	/* _CellReselectionParametersCDMA2000_r11_H_ */
#include <asn_internal.h>