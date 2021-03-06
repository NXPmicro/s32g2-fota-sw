/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_MapFile_H_
#define	_MapFile_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Length.h"
#include "Repositories.h"
#include "Mappings.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MapFile */
typedef struct MapFile {
	Length_t	 numberOfRepositories;
	Repositories_t	 repositories;
	Length_t	 numberOfMappings;
	Mappings_t	 mappings;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MapFile_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MapFile;

#ifdef __cplusplus
}
#endif

#endif	/* _MapFile_H_ */
#include <asn_internal.h>
