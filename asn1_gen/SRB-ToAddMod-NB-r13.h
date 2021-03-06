/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SRB_ToAddMod_NB_r13_H_
#define	_SRB_ToAddMod_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RLC-Config-NB-r13.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include "LogicalChannelConfig-NB-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRB_ToAddMod_NB_r13__rlc_Config_r13_PR {
	SRB_ToAddMod_NB_r13__rlc_Config_r13_PR_NOTHING,	/* No components present */
	SRB_ToAddMod_NB_r13__rlc_Config_r13_PR_explicitValue,
	SRB_ToAddMod_NB_r13__rlc_Config_r13_PR_defaultValue
} SRB_ToAddMod_NB_r13__rlc_Config_r13_PR;
typedef enum SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR {
	SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR_NOTHING,	/* No components present */
	SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR_explicitValue,
	SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR_defaultValue
} SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR;

/* SRB-ToAddMod-NB-r13 */
typedef struct SRB_ToAddMod_NB_r13 {
	struct SRB_ToAddMod_NB_r13__rlc_Config_r13 {
		SRB_ToAddMod_NB_r13__rlc_Config_r13_PR present;
		union SRB_ToAddMod_NB_r13__rlc_Config_r13_u {
			RLC_Config_NB_r13_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_Config_r13;
	struct SRB_ToAddMod_NB_r13__logicalChannelConfig_r13 {
		SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR present;
		union SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_u {
			LogicalChannelConfig_NB_r13_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *logicalChannelConfig_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_ToAddMod_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRB_ToAddMod_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_ToAddMod_NB_r13_H_ */
#include <asn_internal.h>
