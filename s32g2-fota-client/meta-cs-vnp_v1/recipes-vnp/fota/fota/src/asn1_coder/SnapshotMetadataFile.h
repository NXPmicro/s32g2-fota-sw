/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "UptaneASN1Definitions"
 * 	found in "ota_metadata.asn1"
 */

#ifndef	_SnapshotMetadataFile_H_
#define	_SnapshotMetadataFile_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StrictFilename.h"
#include "Version.h"
#include "Length.h"
#include "Hashes.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SnapshotMetadataFile */
typedef struct SnapshotMetadataFile {
	StrictFilename_t	 filename;
	Version_t	 version;
	Length_t	 length;
	Length_t	 numberOfHashes;
	Hashes_t	 hashes;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SnapshotMetadataFile_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SnapshotMetadataFile;

#ifdef __cplusplus
}
#endif

#endif	/* _SnapshotMetadataFile_H_ */
#include <asn_internal.h>
