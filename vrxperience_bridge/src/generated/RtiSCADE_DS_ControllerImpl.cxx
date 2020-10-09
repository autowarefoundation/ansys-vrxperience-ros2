

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RtiSCADE_DS_ControllerImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "RtiSCADE_DS_ControllerImpl.h"

/* ========================================================================= */
const char *IndyDS_RoadLinePolynom_cTYPENAME = "IndyDS::RoadLinePolynom";

DDS_TypeCode* IndyDS_RoadLinePolynom_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member IndyDS_RoadLinePolynom_c_g_tc_members[7]=
    {

        {
            (char *)"lineId",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"c0",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"c1",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"c2",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"c3",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"curvatureRadius",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"estimatedCurvatureRadius",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_RoadLinePolynom_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::RoadLinePolynom", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            IndyDS_RoadLinePolynom_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_RoadLinePolynom_c*/

    if (is_initialized) {
        return &IndyDS_RoadLinePolynom_c_g_tc;
    }

    IndyDS_RoadLinePolynom_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_RoadLinePolynom_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_RoadLinePolynom_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_RoadLinePolynom_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_RoadLinePolynom_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_RoadLinePolynom_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_RoadLinePolynom_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &IndyDS_RoadLinePolynom_c_g_tc;
}

RTIBool IndyDS_RoadLinePolynom_c_initialize(
    IndyDS_RoadLinePolynom_c* sample) {
    return IndyDS_RoadLinePolynom_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_RoadLinePolynom_c_initialize_ex(
    IndyDS_RoadLinePolynom_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_RoadLinePolynom_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_RoadLinePolynom_c_initialize_w_params(
    IndyDS_RoadLinePolynom_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->lineId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->c0)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->c1)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->c2)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->c3)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->curvatureRadius)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->estimatedCurvatureRadius)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_RoadLinePolynom_c_finalize(
    IndyDS_RoadLinePolynom_c* sample)
{

    IndyDS_RoadLinePolynom_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_RoadLinePolynom_c_finalize_ex(
    IndyDS_RoadLinePolynom_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_RoadLinePolynom_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_RoadLinePolynom_c_finalize_w_params(
    IndyDS_RoadLinePolynom_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_RoadLinePolynom_c_finalize_optional_members(
    IndyDS_RoadLinePolynom_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_RoadLinePolynom_c_copy(
    IndyDS_RoadLinePolynom_c* dst,
    const IndyDS_RoadLinePolynom_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyShort (
        &dst->lineId, &src->lineId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->c0, &src->c0)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->c1, &src->c1)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->c2, &src->c2)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->c3, &src->c3)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->curvatureRadius, &src->curvatureRadius)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->estimatedCurvatureRadius, &src->estimatedCurvatureRadius)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_RoadLinePolynom_c' sequence class.
*/
#define T IndyDS_RoadLinePolynom_c
#define TSeq IndyDS_RoadLinePolynom_cSeq

#define T_initialize_w_params IndyDS_RoadLinePolynom_c_initialize_w_params

#define T_finalize_w_params   IndyDS_RoadLinePolynom_c_finalize_w_params
#define T_copy       IndyDS_RoadLinePolynom_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_RoadLinesPolynoms_cTYPENAME = "IndyDS::RoadLinesPolynoms";

DDS_TypeCode* IndyDS_RoadLinesPolynoms_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode IndyDS_RoadLinesPolynoms_c_g_tc_roadLinesPolynomsArray_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);
    static DDS_TypeCode_Member IndyDS_RoadLinesPolynoms_c_g_tc_members[6]=
    {

        {
            (char *)"egoVhlId",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"globalId",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"isNoisy",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"referenceFrame",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"roadLinesPolynomsArray",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timeOfUpdate",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_RoadLinesPolynoms_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::RoadLinesPolynoms", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            IndyDS_RoadLinesPolynoms_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_RoadLinesPolynoms_c*/

    if (is_initialized) {
        return &IndyDS_RoadLinesPolynoms_c_g_tc;
    }

    IndyDS_RoadLinesPolynoms_c_g_tc_roadLinesPolynomsArray_sequence._data._typeCode = (RTICdrTypeCode *)IndyDS_RoadLinePolynom_c_get_typecode();

    IndyDS_RoadLinesPolynoms_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_RoadLinesPolynoms_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_RoadLinesPolynoms_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_RoadLinesPolynoms_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_RoadLinesPolynoms_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_RoadLinesPolynoms_c_g_tc_roadLinesPolynomsArray_sequence;
    IndyDS_RoadLinesPolynoms_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &IndyDS_RoadLinesPolynoms_c_g_tc;
}

RTIBool IndyDS_RoadLinesPolynoms_c_initialize(
    IndyDS_RoadLinesPolynoms_c* sample) {
    return IndyDS_RoadLinesPolynoms_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_RoadLinesPolynoms_c_initialize_ex(
    IndyDS_RoadLinesPolynoms_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_RoadLinesPolynoms_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_RoadLinesPolynoms_c_initialize_w_params(
    IndyDS_RoadLinesPolynoms_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->egoVhlId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->globalId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->isNoisy)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->referenceFrame)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        IndyDS_RoadLinePolynom_cSeq_initialize(&sample->roadLinesPolynomsArray );
        IndyDS_RoadLinePolynom_cSeq_set_element_allocation_params(&sample->roadLinesPolynomsArray ,allocParams);
        IndyDS_RoadLinePolynom_cSeq_set_absolute_maximum(&sample->roadLinesPolynomsArray , (3));
        if (!IndyDS_RoadLinePolynom_cSeq_set_maximum(&sample->roadLinesPolynomsArray, (3))) {
            return RTI_FALSE;
        }
    } else { 
        IndyDS_RoadLinePolynom_cSeq_set_length(&sample->roadLinesPolynomsArray, 0);
    }

    if (!RTICdrType_initDouble(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_RoadLinesPolynoms_c_finalize(
    IndyDS_RoadLinesPolynoms_c* sample)
{

    IndyDS_RoadLinesPolynoms_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_RoadLinesPolynoms_c_finalize_ex(
    IndyDS_RoadLinesPolynoms_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_RoadLinesPolynoms_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_RoadLinesPolynoms_c_finalize_w_params(
    IndyDS_RoadLinesPolynoms_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    IndyDS_RoadLinePolynom_cSeq_set_element_deallocation_params(
        &sample->roadLinesPolynomsArray,deallocParams);
    IndyDS_RoadLinePolynom_cSeq_finalize(&sample->roadLinesPolynomsArray);

}

void IndyDS_RoadLinesPolynoms_c_finalize_optional_members(
    IndyDS_RoadLinesPolynoms_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        DDS_UnsignedLong i, length;
        length = IndyDS_RoadLinePolynom_cSeq_get_length(
            &sample->roadLinesPolynomsArray);

        for (i = 0; i < length; i++) {
            IndyDS_RoadLinePolynom_c_finalize_optional_members(
                IndyDS_RoadLinePolynom_cSeq_get_reference(
                    &sample->roadLinesPolynomsArray, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool IndyDS_RoadLinesPolynoms_c_copy(
    IndyDS_RoadLinesPolynoms_c* dst,
    const IndyDS_RoadLinesPolynoms_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyShort (
        &dst->egoVhlId, &src->egoVhlId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->globalId, &src->globalId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->isNoisy, &src->isNoisy)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->referenceFrame, &src->referenceFrame)) { 
        return RTI_FALSE;
    }
    if (!IndyDS_RoadLinePolynom_cSeq_copy(&dst->roadLinesPolynomsArray ,
    &src->roadLinesPolynomsArray )) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->timeOfUpdate, &src->timeOfUpdate)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_RoadLinesPolynoms_c' sequence class.
*/
#define T IndyDS_RoadLinesPolynoms_c
#define TSeq IndyDS_RoadLinesPolynoms_cSeq

#define T_initialize_w_params IndyDS_RoadLinesPolynoms_c_initialize_w_params

#define T_finalize_w_params   IndyDS_RoadLinesPolynoms_c_finalize_w_params
#define T_copy       IndyDS_RoadLinesPolynoms_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_SensorTargetBBox_cTYPENAME = "IndyDS::SensorTargetBBox";

DDS_TypeCode* IndyDS_SensorTargetBBox_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member IndyDS_SensorTargetBBox_c_g_tc_members[26]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"referenceFrame",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearBottomRightX",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearBottomRightY",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearBottomRightZ",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearTopRightX",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearTopRightY",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearTopRightZ",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearbottomLeftX",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearbottomLeftY",/* Member name */
            {
                9,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearbottomLeftZ",/* Member name */
            {
                10,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearTopLeftX",/* Member name */
            {
                11,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearTopLeftY",/* Member name */
            {
                12,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"rearTopLeftZ",/* Member name */
            {
                13,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontBottomRightX",/* Member name */
            {
                14,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontBottomRightY",/* Member name */
            {
                15,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontBottomRightZ",/* Member name */
            {
                16,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontTopRightX",/* Member name */
            {
                17,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontTopRightY",/* Member name */
            {
                18,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontTopRightZ",/* Member name */
            {
                19,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontbottomLeftX",/* Member name */
            {
                20,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontbottomLeftY",/* Member name */
            {
                21,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontbottomLeftZ",/* Member name */
            {
                22,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontTopLeftX",/* Member name */
            {
                23,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontTopLeftY",/* Member name */
            {
                24,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"frontTopLeftZ",/* Member name */
            {
                25,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_SensorTargetBBox_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::SensorTargetBBox", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            26, /* Number of members */
            IndyDS_SensorTargetBBox_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_SensorTargetBBox_c*/

    if (is_initialized) {
        return &IndyDS_SensorTargetBBox_c_g_tc;
    }

    IndyDS_SensorTargetBBox_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorTargetBBox_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorTargetBBox_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorTargetBBox_c_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &IndyDS_SensorTargetBBox_c_g_tc;
}

RTIBool IndyDS_SensorTargetBBox_c_initialize(
    IndyDS_SensorTargetBBox_c* sample) {
    return IndyDS_SensorTargetBBox_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_SensorTargetBBox_c_initialize_ex(
    IndyDS_SensorTargetBBox_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_SensorTargetBBox_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_SensorTargetBBox_c_initialize_w_params(
    IndyDS_SensorTargetBBox_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->id)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->referenceFrame)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearBottomRightX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearBottomRightY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearBottomRightZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearTopRightX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearTopRightY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearTopRightZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearbottomLeftX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearbottomLeftY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearbottomLeftZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearTopLeftX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearTopLeftY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->rearTopLeftZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontBottomRightX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontBottomRightY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontBottomRightZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontTopRightX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontTopRightY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontTopRightZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontbottomLeftX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontbottomLeftY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontbottomLeftZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontTopLeftX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontTopLeftY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->frontTopLeftZ)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_SensorTargetBBox_c_finalize(
    IndyDS_SensorTargetBBox_c* sample)
{

    IndyDS_SensorTargetBBox_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_SensorTargetBBox_c_finalize_ex(
    IndyDS_SensorTargetBBox_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_SensorTargetBBox_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_SensorTargetBBox_c_finalize_w_params(
    IndyDS_SensorTargetBBox_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_SensorTargetBBox_c_finalize_optional_members(
    IndyDS_SensorTargetBBox_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_SensorTargetBBox_c_copy(
    IndyDS_SensorTargetBBox_c* dst,
    const IndyDS_SensorTargetBBox_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyShort (
        &dst->id, &src->id)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->referenceFrame, &src->referenceFrame)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearBottomRightX, &src->rearBottomRightX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearBottomRightY, &src->rearBottomRightY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearBottomRightZ, &src->rearBottomRightZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearTopRightX, &src->rearTopRightX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearTopRightY, &src->rearTopRightY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearTopRightZ, &src->rearTopRightZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearbottomLeftX, &src->rearbottomLeftX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearbottomLeftY, &src->rearbottomLeftY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearbottomLeftZ, &src->rearbottomLeftZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearTopLeftX, &src->rearTopLeftX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearTopLeftY, &src->rearTopLeftY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->rearTopLeftZ, &src->rearTopLeftZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontBottomRightX, &src->frontBottomRightX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontBottomRightY, &src->frontBottomRightY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontBottomRightZ, &src->frontBottomRightZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontTopRightX, &src->frontTopRightX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontTopRightY, &src->frontTopRightY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontTopRightZ, &src->frontTopRightZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontbottomLeftX, &src->frontbottomLeftX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontbottomLeftY, &src->frontbottomLeftY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontbottomLeftZ, &src->frontbottomLeftZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontTopLeftX, &src->frontTopLeftX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontTopLeftY, &src->frontTopLeftY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->frontTopLeftZ, &src->frontTopLeftZ)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_SensorTargetBBox_c' sequence class.
*/
#define T IndyDS_SensorTargetBBox_c
#define TSeq IndyDS_SensorTargetBBox_cSeq

#define T_initialize_w_params IndyDS_SensorTargetBBox_c_initialize_w_params

#define T_finalize_w_params   IndyDS_SensorTargetBBox_c_finalize_w_params
#define T_copy       IndyDS_SensorTargetBBox_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_SensorMovableTargetsBoundingBoxes_cTYPENAME = "IndyDS::SensorMovableTargetsBoundingBoxes";

DDS_TypeCode* IndyDS_SensorMovableTargetsBoundingBoxes_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_boundingBoxesArray_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((30),NULL);
    static DDS_TypeCode_Member IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_members[4]=
    {

        {
            (char *)"boundingBoxesArray",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"globalId",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timeOfUpdate",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"vhlId",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::SensorMovableTargetsBoundingBoxes", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_SensorMovableTargetsBoundingBoxes_c*/

    if (is_initialized) {
        return &IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc;
    }

    IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_boundingBoxesArray_sequence._data._typeCode = (RTICdrTypeCode *)IndyDS_SensorTargetBBox_c_get_typecode();

    IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_boundingBoxesArray_sequence;
    IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &IndyDS_SensorMovableTargetsBoundingBoxes_c_g_tc;
}

RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* sample) {
    return IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_ex(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_w_params(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        IndyDS_SensorTargetBBox_cSeq_initialize(&sample->boundingBoxesArray );
        IndyDS_SensorTargetBBox_cSeq_set_element_allocation_params(&sample->boundingBoxesArray ,allocParams);
        IndyDS_SensorTargetBBox_cSeq_set_absolute_maximum(&sample->boundingBoxesArray , (30));
        if (!IndyDS_SensorTargetBBox_cSeq_set_maximum(&sample->boundingBoxesArray, (30))) {
            return RTI_FALSE;
        }
    } else { 
        IndyDS_SensorTargetBBox_cSeq_set_length(&sample->boundingBoxesArray, 0);
    }

    if (!RTICdrType_initLong(&sample->globalId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->vhlId)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* sample)
{

    IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_ex(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_w_params(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    IndyDS_SensorTargetBBox_cSeq_set_element_deallocation_params(
        &sample->boundingBoxesArray,deallocParams);
    IndyDS_SensorTargetBBox_cSeq_finalize(&sample->boundingBoxesArray);

}

void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_optional_members(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        DDS_UnsignedLong i, length;
        length = IndyDS_SensorTargetBBox_cSeq_get_length(
            &sample->boundingBoxesArray);

        for (i = 0; i < length; i++) {
            IndyDS_SensorTargetBBox_c_finalize_optional_members(
                IndyDS_SensorTargetBBox_cSeq_get_reference(
                    &sample->boundingBoxesArray, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_copy(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* dst,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!IndyDS_SensorTargetBBox_cSeq_copy(&dst->boundingBoxesArray ,
    &src->boundingBoxesArray )) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->globalId, &src->globalId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->timeOfUpdate, &src->timeOfUpdate)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->vhlId, &src->vhlId)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_SensorMovableTargetsBoundingBoxes_c' sequence class.
*/
#define T IndyDS_SensorMovableTargetsBoundingBoxes_c
#define TSeq IndyDS_SensorMovableTargetsBoundingBoxes_cSeq

#define T_initialize_w_params IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_w_params

#define T_finalize_w_params   IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_w_params
#define T_copy       IndyDS_SensorMovableTargetsBoundingBoxes_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_GPS_cTYPENAME = "IndyDS::GPS";

DDS_TypeCode* IndyDS_GPS_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member IndyDS_GPS_c_g_tc_members[9]=
    {

        {
            (char *)"altitude",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"globalId",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"hdop",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"lastUpdate",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"latitude",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"longitude",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"satellites",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"sensorId",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"vhlId",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_GPS_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::GPS", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            IndyDS_GPS_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_GPS_c*/

    if (is_initialized) {
        return &IndyDS_GPS_c_g_tc;
    }

    IndyDS_GPS_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_GPS_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_GPS_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_GPS_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_GPS_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_GPS_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_GPS_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_GPS_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_GPS_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &IndyDS_GPS_c_g_tc;
}

RTIBool IndyDS_GPS_c_initialize(
    IndyDS_GPS_c* sample) {
    return IndyDS_GPS_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_GPS_c_initialize_ex(
    IndyDS_GPS_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_GPS_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_GPS_c_initialize_w_params(
    IndyDS_GPS_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->altitude)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->globalId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->hdop)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->lastUpdate)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->latitude)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->longitude)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->satellites)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->sensorId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->vhlId)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_GPS_c_finalize(
    IndyDS_GPS_c* sample)
{

    IndyDS_GPS_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_GPS_c_finalize_ex(
    IndyDS_GPS_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_GPS_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_GPS_c_finalize_w_params(
    IndyDS_GPS_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_GPS_c_finalize_optional_members(
    IndyDS_GPS_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_GPS_c_copy(
    IndyDS_GPS_c* dst,
    const IndyDS_GPS_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyDouble (
        &dst->altitude, &src->altitude)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->globalId, &src->globalId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->hdop, &src->hdop)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->lastUpdate, &src->lastUpdate)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->latitude, &src->latitude)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->longitude, &src->longitude)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->satellites, &src->satellites)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->sensorId, &src->sensorId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->vhlId, &src->vhlId)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_GPS_c' sequence class.
*/
#define T IndyDS_GPS_c
#define TSeq IndyDS_GPS_cSeq

#define T_initialize_w_params IndyDS_GPS_c_initialize_w_params

#define T_finalize_w_params   IndyDS_GPS_c_finalize_w_params
#define T_copy       IndyDS_GPS_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_LaserMeterPoint_cTYPENAME = "IndyDS::LaserMeterPoint";

DDS_TypeCode* IndyDS_LaserMeterPoint_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member IndyDS_LaserMeterPoint_c_g_tc_members[10]=
    {

        {
            (char *)"hit",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"Hangle",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"Vangle",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absposx",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absposy",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absposz",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relposx",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relposy",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relposz",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"distance",/* Member name */
            {
                9,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_LaserMeterPoint_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::LaserMeterPoint", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            10, /* Number of members */
            IndyDS_LaserMeterPoint_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_LaserMeterPoint_c*/

    if (is_initialized) {
        return &IndyDS_LaserMeterPoint_c_g_tc;
    }

    IndyDS_LaserMeterPoint_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_LaserMeterPoint_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_LaserMeterPoint_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_LaserMeterPoint_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_LaserMeterPoint_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_LaserMeterPoint_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_LaserMeterPoint_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_LaserMeterPoint_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_LaserMeterPoint_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_LaserMeterPoint_c_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &IndyDS_LaserMeterPoint_c_g_tc;
}

RTIBool IndyDS_LaserMeterPoint_c_initialize(
    IndyDS_LaserMeterPoint_c* sample) {
    return IndyDS_LaserMeterPoint_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_LaserMeterPoint_c_initialize_ex(
    IndyDS_LaserMeterPoint_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_LaserMeterPoint_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_LaserMeterPoint_c_initialize_w_params(
    IndyDS_LaserMeterPoint_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->hit)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->Hangle)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->Vangle)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->absposx)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->absposy)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->absposz)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relposx)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relposy)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relposz)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->distance)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_LaserMeterPoint_c_finalize(
    IndyDS_LaserMeterPoint_c* sample)
{

    IndyDS_LaserMeterPoint_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_LaserMeterPoint_c_finalize_ex(
    IndyDS_LaserMeterPoint_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_LaserMeterPoint_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_LaserMeterPoint_c_finalize_w_params(
    IndyDS_LaserMeterPoint_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_LaserMeterPoint_c_finalize_optional_members(
    IndyDS_LaserMeterPoint_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_LaserMeterPoint_c_copy(
    IndyDS_LaserMeterPoint_c* dst,
    const IndyDS_LaserMeterPoint_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyOctet (
        &dst->hit, &src->hit)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->Hangle, &src->Hangle)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->Vangle, &src->Vangle)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->absposx, &src->absposx)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->absposy, &src->absposy)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->absposz, &src->absposz)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relposx, &src->relposx)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relposy, &src->relposy)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relposz, &src->relposz)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->distance, &src->distance)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_LaserMeterPoint_c' sequence class.
*/
#define T IndyDS_LaserMeterPoint_c
#define TSeq IndyDS_LaserMeterPoint_cSeq

#define T_initialize_w_params IndyDS_LaserMeterPoint_c_initialize_w_params

#define T_finalize_w_params   IndyDS_LaserMeterPoint_c_finalize_w_params
#define T_copy       IndyDS_LaserMeterPoint_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_LaserMeter_cTYPENAME = "IndyDS::LaserMeter";

DDS_TypeCode* IndyDS_LaserMeter_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode IndyDS_LaserMeter_c_g_tc_resultArray_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((720),NULL);
    static DDS_TypeCode_Member IndyDS_LaserMeter_c_g_tc_members[7]=
    {

        {
            (char *)"frameCount",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"globalId",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"lastUpdate",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"nearestPoint",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"resultArray",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"sensorId",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"vhlId",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_LaserMeter_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::LaserMeter", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            IndyDS_LaserMeter_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_LaserMeter_c*/

    if (is_initialized) {
        return &IndyDS_LaserMeter_c_g_tc;
    }

    IndyDS_LaserMeter_c_g_tc_resultArray_sequence._data._typeCode = (RTICdrTypeCode *)IndyDS_LaserMeterPoint_c_get_typecode();

    IndyDS_LaserMeter_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_LaserMeter_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_LaserMeter_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_LaserMeter_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_LaserMeter_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_LaserMeter_c_g_tc_resultArray_sequence;
    IndyDS_LaserMeter_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_LaserMeter_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &IndyDS_LaserMeter_c_g_tc;
}

RTIBool IndyDS_LaserMeter_c_initialize(
    IndyDS_LaserMeter_c* sample) {
    return IndyDS_LaserMeter_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_LaserMeter_c_initialize_ex(
    IndyDS_LaserMeter_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_LaserMeter_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_LaserMeter_c_initialize_w_params(
    IndyDS_LaserMeter_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->frameCount)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->globalId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->lastUpdate)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->nearestPoint)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        IndyDS_LaserMeterPoint_cSeq_initialize(&sample->resultArray );
        IndyDS_LaserMeterPoint_cSeq_set_element_allocation_params(&sample->resultArray ,allocParams);
        IndyDS_LaserMeterPoint_cSeq_set_absolute_maximum(&sample->resultArray , (720));
        if (!IndyDS_LaserMeterPoint_cSeq_set_maximum(&sample->resultArray, (720))) {
            return RTI_FALSE;
        }
    } else { 
        IndyDS_LaserMeterPoint_cSeq_set_length(&sample->resultArray, 0);
    }

    if (!RTICdrType_initShort(&sample->sensorId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->vhlId)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_LaserMeter_c_finalize(
    IndyDS_LaserMeter_c* sample)
{

    IndyDS_LaserMeter_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_LaserMeter_c_finalize_ex(
    IndyDS_LaserMeter_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_LaserMeter_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_LaserMeter_c_finalize_w_params(
    IndyDS_LaserMeter_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    IndyDS_LaserMeterPoint_cSeq_set_element_deallocation_params(
        &sample->resultArray,deallocParams);
    IndyDS_LaserMeterPoint_cSeq_finalize(&sample->resultArray);

}

void IndyDS_LaserMeter_c_finalize_optional_members(
    IndyDS_LaserMeter_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        DDS_UnsignedLong i, length;
        length = IndyDS_LaserMeterPoint_cSeq_get_length(
            &sample->resultArray);

        for (i = 0; i < length; i++) {
            IndyDS_LaserMeterPoint_c_finalize_optional_members(
                IndyDS_LaserMeterPoint_cSeq_get_reference(
                    &sample->resultArray, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool IndyDS_LaserMeter_c_copy(
    IndyDS_LaserMeter_c* dst,
    const IndyDS_LaserMeter_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyShort (
        &dst->frameCount, &src->frameCount)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->globalId, &src->globalId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->lastUpdate, &src->lastUpdate)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->nearestPoint, &src->nearestPoint)) { 
        return RTI_FALSE;
    }
    if (!IndyDS_LaserMeterPoint_cSeq_copy(&dst->resultArray ,
    &src->resultArray )) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->sensorId, &src->sensorId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->vhlId, &src->vhlId)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_LaserMeter_c' sequence class.
*/
#define T IndyDS_LaserMeter_c
#define TSeq IndyDS_LaserMeter_cSeq

#define T_initialize_w_params IndyDS_LaserMeter_c_initialize_w_params

#define T_finalize_w_params   IndyDS_LaserMeter_c_finalize_w_params
#define T_copy       IndyDS_LaserMeter_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_SensorMovableTarget_cTYPENAME = "IndyDS::SensorMovableTarget";

DDS_TypeCode* IndyDS_SensorMovableTarget_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member IndyDS_SensorMovableTarget_c_g_tc_members[41]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"scanerId",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"detectionStatus",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"type_",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"beamIndex",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"existenceTime",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"anchorPoint",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"referenceFrame",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"posXInChosenRef",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"posYInChosenRef",/* Member name */
            {
                9,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"posZInChosenRef",/* Member name */
            {
                10,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"posHeadingInChosenRef",/* Member name */
            {
                11,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"posPitchInChosenRef",/* Member name */
            {
                12,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"posRollInChosenRef",/* Member name */
            {
                13,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"distanceToCollision",/* Member name */
            {
                14,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"azimuthInSensor",/* Member name */
            {
                15,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"elevationInSensor",/* Member name */
            {
                16,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"azimuthInVehicle",/* Member name */
            {
                17,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"elevationInVehicle",/* Member name */
            {
                18,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteSpeedX",/* Member name */
            {
                19,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteSpeedY",/* Member name */
            {
                20,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteSpeedZ",/* Member name */
            {
                21,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteAngularSpeedH",/* Member name */
            {
                22,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteAngularSpeedP",/* Member name */
            {
                23,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteAngularSpeedR",/* Member name */
            {
                24,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeSpeedX",/* Member name */
            {
                25,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeSpeedY",/* Member name */
            {
                26,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeSpeedZ",/* Member name */
            {
                27,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeAngularSpeedH",/* Member name */
            {
                28,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeAngularSpeedP",/* Member name */
            {
                29,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeAngularSpeedR",/* Member name */
            {
                30,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteAccelX",/* Member name */
            {
                31,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteAccelY",/* Member name */
            {
                32,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absoluteAccelZ",/* Member name */
            {
                33,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeAccelX",/* Member name */
            {
                34,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeAccelY",/* Member name */
            {
                35,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relativeAccelZ",/* Member name */
            {
                36,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"length",/* Member name */
            {
                37,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"width",/* Member name */
            {
                38,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"height",/* Member name */
            {
                39,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"visibility",/* Member name */
            {
                40,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_SensorMovableTarget_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::SensorMovableTarget", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            41, /* Number of members */
            IndyDS_SensorMovableTarget_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_SensorMovableTarget_c*/

    if (is_initialized) {
        return &IndyDS_SensorMovableTarget_c_g_tc;
    }

    IndyDS_SensorMovableTarget_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTarget_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTarget_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTarget_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTarget_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTarget_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorMovableTarget_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTarget_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTarget_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorMovableTarget_c_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorMovableTarget_c_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_SensorMovableTarget_c_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    IndyDS_SensorMovableTarget_c_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &IndyDS_SensorMovableTarget_c_g_tc;
}

RTIBool IndyDS_SensorMovableTarget_c_initialize(
    IndyDS_SensorMovableTarget_c* sample) {
    return IndyDS_SensorMovableTarget_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_SensorMovableTarget_c_initialize_ex(
    IndyDS_SensorMovableTarget_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_SensorMovableTarget_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_SensorMovableTarget_c_initialize_w_params(
    IndyDS_SensorMovableTarget_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->id)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->scanerId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->detectionStatus)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->type_)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->beamIndex)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->existenceTime)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->anchorPoint)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->referenceFrame)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->posXInChosenRef)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->posYInChosenRef)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->posZInChosenRef)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->posHeadingInChosenRef)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->posPitchInChosenRef)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->posRollInChosenRef)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->distanceToCollision)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->azimuthInSensor)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->elevationInSensor)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->azimuthInVehicle)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->elevationInVehicle)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteSpeedX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteSpeedY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteSpeedZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteAngularSpeedH)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteAngularSpeedP)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteAngularSpeedR)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeSpeedX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeSpeedY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeSpeedZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeAngularSpeedH)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeAngularSpeedP)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeAngularSpeedR)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteAccelX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteAccelY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->absoluteAccelZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeAccelX)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeAccelY)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->relativeAccelZ)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->length)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->width)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->height)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->visibility)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_SensorMovableTarget_c_finalize(
    IndyDS_SensorMovableTarget_c* sample)
{

    IndyDS_SensorMovableTarget_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_SensorMovableTarget_c_finalize_ex(
    IndyDS_SensorMovableTarget_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_SensorMovableTarget_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_SensorMovableTarget_c_finalize_w_params(
    IndyDS_SensorMovableTarget_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_SensorMovableTarget_c_finalize_optional_members(
    IndyDS_SensorMovableTarget_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_SensorMovableTarget_c_copy(
    IndyDS_SensorMovableTarget_c* dst,
    const IndyDS_SensorMovableTarget_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyShort (
        &dst->id, &src->id)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->scanerId, &src->scanerId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->detectionStatus, &src->detectionStatus)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->type_, &src->type_)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->beamIndex, &src->beamIndex)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->existenceTime, &src->existenceTime)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->anchorPoint, &src->anchorPoint)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->referenceFrame, &src->referenceFrame)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->posXInChosenRef, &src->posXInChosenRef)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->posYInChosenRef, &src->posYInChosenRef)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->posZInChosenRef, &src->posZInChosenRef)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->posHeadingInChosenRef, &src->posHeadingInChosenRef)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->posPitchInChosenRef, &src->posPitchInChosenRef)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->posRollInChosenRef, &src->posRollInChosenRef)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->distanceToCollision, &src->distanceToCollision)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->azimuthInSensor, &src->azimuthInSensor)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->elevationInSensor, &src->elevationInSensor)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->azimuthInVehicle, &src->azimuthInVehicle)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->elevationInVehicle, &src->elevationInVehicle)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteSpeedX, &src->absoluteSpeedX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteSpeedY, &src->absoluteSpeedY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteSpeedZ, &src->absoluteSpeedZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteAngularSpeedH, &src->absoluteAngularSpeedH)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteAngularSpeedP, &src->absoluteAngularSpeedP)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteAngularSpeedR, &src->absoluteAngularSpeedR)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeSpeedX, &src->relativeSpeedX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeSpeedY, &src->relativeSpeedY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeSpeedZ, &src->relativeSpeedZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeAngularSpeedH, &src->relativeAngularSpeedH)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeAngularSpeedP, &src->relativeAngularSpeedP)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeAngularSpeedR, &src->relativeAngularSpeedR)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteAccelX, &src->absoluteAccelX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteAccelY, &src->absoluteAccelY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->absoluteAccelZ, &src->absoluteAccelZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeAccelX, &src->relativeAccelX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeAccelY, &src->relativeAccelY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->relativeAccelZ, &src->relativeAccelZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->length, &src->length)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->width, &src->width)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->height, &src->height)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->visibility, &src->visibility)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_SensorMovableTarget_c' sequence class.
*/
#define T IndyDS_SensorMovableTarget_c
#define TSeq IndyDS_SensorMovableTarget_cSeq

#define T_initialize_w_params IndyDS_SensorMovableTarget_c_initialize_w_params

#define T_finalize_w_params   IndyDS_SensorMovableTarget_c_finalize_w_params
#define T_copy       IndyDS_SensorMovableTarget_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_SensorMovableTargets_cTYPENAME = "IndyDS::SensorMovableTargets";

DDS_TypeCode* IndyDS_SensorMovableTargets_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode IndyDS_SensorMovableTargets_c_g_tc_targetsArray_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((30),NULL);
    static DDS_TypeCode_Member IndyDS_SensorMovableTargets_c_g_tc_members[5]=
    {

        {
            (char *)"egoVhlId",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"globalId",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"nearestTarget",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"targetsArray",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timeOfUpdate",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_SensorMovableTargets_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::SensorMovableTargets", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            IndyDS_SensorMovableTargets_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_SensorMovableTargets_c*/

    if (is_initialized) {
        return &IndyDS_SensorMovableTargets_c_g_tc;
    }

    IndyDS_SensorMovableTargets_c_g_tc_targetsArray_sequence._data._typeCode = (RTICdrTypeCode *)IndyDS_SensorMovableTarget_c_get_typecode();

    IndyDS_SensorMovableTargets_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTargets_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_SensorMovableTargets_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_SensorMovableTargets_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_SensorMovableTargets_c_g_tc_targetsArray_sequence;
    IndyDS_SensorMovableTargets_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &IndyDS_SensorMovableTargets_c_g_tc;
}

RTIBool IndyDS_SensorMovableTargets_c_initialize(
    IndyDS_SensorMovableTargets_c* sample) {
    return IndyDS_SensorMovableTargets_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_SensorMovableTargets_c_initialize_ex(
    IndyDS_SensorMovableTargets_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_SensorMovableTargets_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_SensorMovableTargets_c_initialize_w_params(
    IndyDS_SensorMovableTargets_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->egoVhlId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->globalId)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->nearestTarget)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        IndyDS_SensorMovableTarget_cSeq_initialize(&sample->targetsArray );
        IndyDS_SensorMovableTarget_cSeq_set_element_allocation_params(&sample->targetsArray ,allocParams);
        IndyDS_SensorMovableTarget_cSeq_set_absolute_maximum(&sample->targetsArray , (30));
        if (!IndyDS_SensorMovableTarget_cSeq_set_maximum(&sample->targetsArray, (30))) {
            return RTI_FALSE;
        }
    } else { 
        IndyDS_SensorMovableTarget_cSeq_set_length(&sample->targetsArray, 0);
    }

    if (!RTICdrType_initDouble(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_SensorMovableTargets_c_finalize(
    IndyDS_SensorMovableTargets_c* sample)
{

    IndyDS_SensorMovableTargets_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_SensorMovableTargets_c_finalize_ex(
    IndyDS_SensorMovableTargets_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_SensorMovableTargets_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_SensorMovableTargets_c_finalize_w_params(
    IndyDS_SensorMovableTargets_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    IndyDS_SensorMovableTarget_cSeq_set_element_deallocation_params(
        &sample->targetsArray,deallocParams);
    IndyDS_SensorMovableTarget_cSeq_finalize(&sample->targetsArray);

}

void IndyDS_SensorMovableTargets_c_finalize_optional_members(
    IndyDS_SensorMovableTargets_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        DDS_UnsignedLong i, length;
        length = IndyDS_SensorMovableTarget_cSeq_get_length(
            &sample->targetsArray);

        for (i = 0; i < length; i++) {
            IndyDS_SensorMovableTarget_c_finalize_optional_members(
                IndyDS_SensorMovableTarget_cSeq_get_reference(
                    &sample->targetsArray, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool IndyDS_SensorMovableTargets_c_copy(
    IndyDS_SensorMovableTargets_c* dst,
    const IndyDS_SensorMovableTargets_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyShort (
        &dst->egoVhlId, &src->egoVhlId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->globalId, &src->globalId)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->nearestTarget, &src->nearestTarget)) { 
        return RTI_FALSE;
    }
    if (!IndyDS_SensorMovableTarget_cSeq_copy(&dst->targetsArray ,
    &src->targetsArray )) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->timeOfUpdate, &src->timeOfUpdate)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_SensorMovableTargets_c' sequence class.
*/
#define T IndyDS_SensorMovableTargets_c
#define TSeq IndyDS_SensorMovableTargets_cSeq

#define T_initialize_w_params IndyDS_SensorMovableTargets_c_initialize_w_params

#define T_finalize_w_params   IndyDS_SensorMovableTargets_c_finalize_w_params
#define T_copy       IndyDS_SensorMovableTargets_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_CabToModelCorrective_cTYPENAME = "IndyDS::CabToModelCorrective";

DDS_TypeCode* IndyDS_CabToModelCorrective_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member IndyDS_CabToModelCorrective_c_g_tc_members[17]=
    {

        {
            (char *)"AcceleratorAdditive",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"AcceleratorMultiplicative",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"BrakeAdditive",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"BrakeMultiplicative",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"ClutchAdditive",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"ClutchMultiplicative",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"GearboxAutoMode",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"GearboxTakeOver",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"IsRatioLimit",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MaxRatio",/* Member name */
            {
                9,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MinRatio",/* Member name */
            {
                10,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"ParkingBrakeAdditive",/* Member name */
            {
                11,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"ParkingBrakeMultiplicative",/* Member name */
            {
                12,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"ShiftDown",/* Member name */
            {
                13,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"ShiftUp",/* Member name */
            {
                14,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"TimeOfUpdate",/* Member name */
            {
                15,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"WantedGear",/* Member name */
            {
                16,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_CabToModelCorrective_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::CabToModelCorrective", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            17, /* Number of members */
            IndyDS_CabToModelCorrective_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_CabToModelCorrective_c*/

    if (is_initialized) {
        return &IndyDS_CabToModelCorrective_c_g_tc;
    }

    IndyDS_CabToModelCorrective_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_CabToModelCorrective_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_CabToModelCorrective_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_CabToModelCorrective_c_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_CabToModelCorrective_c_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    IndyDS_CabToModelCorrective_c_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_CabToModelCorrective_c_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_CabToModelCorrective_c_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToModelCorrective_c_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &IndyDS_CabToModelCorrective_c_g_tc;
}

RTIBool IndyDS_CabToModelCorrective_c_initialize(
    IndyDS_CabToModelCorrective_c* sample) {
    return IndyDS_CabToModelCorrective_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_CabToModelCorrective_c_initialize_ex(
    IndyDS_CabToModelCorrective_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_CabToModelCorrective_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_CabToModelCorrective_c_initialize_w_params(
    IndyDS_CabToModelCorrective_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->AcceleratorAdditive)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->AcceleratorMultiplicative)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->BrakeAdditive)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->BrakeMultiplicative)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->ClutchAdditive)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->ClutchMultiplicative)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->GearboxAutoMode)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->GearboxTakeOver)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->IsRatioLimit)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->MaxRatio)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->MinRatio)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->ParkingBrakeAdditive)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->ParkingBrakeMultiplicative)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->ShiftDown)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->ShiftUp)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->TimeOfUpdate)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initShort(&sample->WantedGear)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_CabToModelCorrective_c_finalize(
    IndyDS_CabToModelCorrective_c* sample)
{

    IndyDS_CabToModelCorrective_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_CabToModelCorrective_c_finalize_ex(
    IndyDS_CabToModelCorrective_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_CabToModelCorrective_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_CabToModelCorrective_c_finalize_w_params(
    IndyDS_CabToModelCorrective_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_CabToModelCorrective_c_finalize_optional_members(
    IndyDS_CabToModelCorrective_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_CabToModelCorrective_c_copy(
    IndyDS_CabToModelCorrective_c* dst,
    const IndyDS_CabToModelCorrective_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyDouble (
        &dst->AcceleratorAdditive, &src->AcceleratorAdditive)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->AcceleratorMultiplicative, &src->AcceleratorMultiplicative)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->BrakeAdditive, &src->BrakeAdditive)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->BrakeMultiplicative, &src->BrakeMultiplicative)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->ClutchAdditive, &src->ClutchAdditive)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->ClutchMultiplicative, &src->ClutchMultiplicative)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->GearboxAutoMode, &src->GearboxAutoMode)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->GearboxTakeOver, &src->GearboxTakeOver)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->IsRatioLimit, &src->IsRatioLimit)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->MaxRatio, &src->MaxRatio)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->MinRatio, &src->MinRatio)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->ParkingBrakeAdditive, &src->ParkingBrakeAdditive)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->ParkingBrakeMultiplicative, &src->ParkingBrakeMultiplicative)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->ShiftDown, &src->ShiftDown)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->ShiftUp, &src->ShiftUp)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->TimeOfUpdate, &src->TimeOfUpdate)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyShort (
        &dst->WantedGear, &src->WantedGear)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_CabToModelCorrective_c' sequence class.
*/
#define T IndyDS_CabToModelCorrective_c
#define TSeq IndyDS_CabToModelCorrective_cSeq

#define T_initialize_w_params IndyDS_CabToModelCorrective_c_initialize_w_params

#define T_finalize_w_params   IndyDS_CabToModelCorrective_c_finalize_w_params
#define T_copy       IndyDS_CabToModelCorrective_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_CabToSteeringCorrective_cTYPENAME = "IndyDS::CabToSteeringCorrective";

DDS_TypeCode* IndyDS_CabToSteeringCorrective_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member IndyDS_CabToSteeringCorrective_c_g_tc_members[9]=
    {

        {
            (char *)"AdditiveSteeringWheelAccel",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"AdditiveSteeringWheelAngle",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"AdditiveSteeringWheelSpeed",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"AdditiveSteeringWheelTorque",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MultiplicativeSteeringWheelAccel",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MultiplicativeSteeringWheelAngle",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MultiplicativeSteeringWheelSpeed",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MultiplicativeSteeringWheelTorque",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"TimeOfUpdate",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_CabToSteeringCorrective_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::CabToSteeringCorrective", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            IndyDS_CabToSteeringCorrective_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_CabToSteeringCorrective_c*/

    if (is_initialized) {
        return &IndyDS_CabToSteeringCorrective_c_g_tc;
    }

    IndyDS_CabToSteeringCorrective_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_CabToSteeringCorrective_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &IndyDS_CabToSteeringCorrective_c_g_tc;
}

RTIBool IndyDS_CabToSteeringCorrective_c_initialize(
    IndyDS_CabToSteeringCorrective_c* sample) {
    return IndyDS_CabToSteeringCorrective_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_CabToSteeringCorrective_c_initialize_ex(
    IndyDS_CabToSteeringCorrective_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_CabToSteeringCorrective_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_CabToSteeringCorrective_c_initialize_w_params(
    IndyDS_CabToSteeringCorrective_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->AdditiveSteeringWheelAccel)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->AdditiveSteeringWheelAngle)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->AdditiveSteeringWheelSpeed)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->AdditiveSteeringWheelTorque)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->MultiplicativeSteeringWheelAccel)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->MultiplicativeSteeringWheelAngle)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->MultiplicativeSteeringWheelSpeed)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->MultiplicativeSteeringWheelTorque)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->TimeOfUpdate)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void IndyDS_CabToSteeringCorrective_c_finalize(
    IndyDS_CabToSteeringCorrective_c* sample)
{

    IndyDS_CabToSteeringCorrective_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_CabToSteeringCorrective_c_finalize_ex(
    IndyDS_CabToSteeringCorrective_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_CabToSteeringCorrective_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_CabToSteeringCorrective_c_finalize_w_params(
    IndyDS_CabToSteeringCorrective_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_CabToSteeringCorrective_c_finalize_optional_members(
    IndyDS_CabToSteeringCorrective_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_CabToSteeringCorrective_c_copy(
    IndyDS_CabToSteeringCorrective_c* dst,
    const IndyDS_CabToSteeringCorrective_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyDouble (
        &dst->AdditiveSteeringWheelAccel, &src->AdditiveSteeringWheelAccel)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->AdditiveSteeringWheelAngle, &src->AdditiveSteeringWheelAngle)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->AdditiveSteeringWheelSpeed, &src->AdditiveSteeringWheelSpeed)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->AdditiveSteeringWheelTorque, &src->AdditiveSteeringWheelTorque)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->MultiplicativeSteeringWheelAccel, &src->MultiplicativeSteeringWheelAccel)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->MultiplicativeSteeringWheelAngle, &src->MultiplicativeSteeringWheelAngle)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->MultiplicativeSteeringWheelSpeed, &src->MultiplicativeSteeringWheelSpeed)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->MultiplicativeSteeringWheelTorque, &src->MultiplicativeSteeringWheelTorque)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->TimeOfUpdate, &src->TimeOfUpdate)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_CabToSteeringCorrective_c' sequence class.
*/
#define T IndyDS_CabToSteeringCorrective_c
#define TSeq IndyDS_CabToSteeringCorrective_cSeq

#define T_initialize_w_params IndyDS_CabToSteeringCorrective_c_initialize_w_params

#define T_finalize_w_params   IndyDS_CabToSteeringCorrective_c_finalize_w_params
#define T_copy       IndyDS_CabToSteeringCorrective_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *IndyDS_VehicleOutput_cTYPENAME = "IndyDS::VehicleOutput";

DDS_TypeCode* IndyDS_VehicleOutput_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_CustomOutput_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,512, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_GroundIndex_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_LSR_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_absIsActive_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_brakeTemperature_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_contactPoint_x_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_contactPoint_y_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_contactPoint_z_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_grip_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_groundNormal_x_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_groundNormal_y_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_groundNormal_z_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_groundType_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_hubPosition_heading_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_hubPosition_pitch_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_hubPosition_roll_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_hubPosition_x_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_hubPosition_y_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_hubPosition_z_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_isInContact_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_laneType_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_roughnessHeight_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_roughnessHeightStdDeviation_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_roughnessLength_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_roughnessLengthStdDeviation_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_slipAngle_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_tireForce_x_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_tireForce_y_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_tireForce_z_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_waterHeight_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_wheelRotation_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc_wheelRotationSpeed_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode_Member IndyDS_VehicleOutput_c_g_tc_members[77]=
    {

        {
            (char *)"CustomOutput",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"EngineSpeed",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"EngineState",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"GearBoxMode",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"GearEngaged",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"GroundIndex",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"LSR",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SteeringWheelAccel",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SteeringWheelAngle",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SteeringWheelSpeed",/* Member name */
            {
                9,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SteeringWheelTorque",/* Member name */
            {
                10,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"TimeOfUpdate",/* Member name */
            {
                11,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"TraveledDistance",/* Member name */
            {
                12,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"absIsActive",/* Member name */
            {
                13,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"auxiliaryLights",/* Member name */
            {
                14,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"brakePedal",/* Member name */
            {
                15,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"brakeRetarderNotch",/* Member name */
            {
                16,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"brakeTemperature",/* Member name */
            {
                17,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgAccel_heading",/* Member name */
            {
                18,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgAccel_pitch",/* Member name */
            {
                19,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgAccel_roll",/* Member name */
            {
                20,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgAccel_x",/* Member name */
            {
                21,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgAccel_y",/* Member name */
            {
                22,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgAccel_z",/* Member name */
            {
                23,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgPos_heading",/* Member name */
            {
                24,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgPos_pitch",/* Member name */
            {
                25,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgPos_roll",/* Member name */
            {
                26,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgPos_x",/* Member name */
            {
                27,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgPos_y",/* Member name */
            {
                28,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgPos_z",/* Member name */
            {
                29,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgSpeed_heading",/* Member name */
            {
                30,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgSpeed_pitch",/* Member name */
            {
                31,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgSpeed_roll",/* Member name */
            {
                32,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgSpeed_x",/* Member name */
            {
                33,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgSpeed_y",/* Member name */
            {
                34,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cdgSpeed_z",/* Member name */
            {
                35,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"clutchPedal",/* Member name */
            {
                36,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"consumption",/* Member name */
            {
                37,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"contactPoint_x",/* Member name */
            {
                38,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"contactPoint_y",/* Member name */
            {
                39,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"contactPoint_z",/* Member name */
            {
                40,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"effectiveIgnitionKeyPosition",/* Member name */
            {
                41,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"forceLockup",/* Member name */
            {
                42,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"gasPedal",/* Member name */
            {
                43,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"grip",/* Member name */
            {
                44,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"groundNormal_x",/* Member name */
            {
                45,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"groundNormal_y",/* Member name */
            {
                46,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"groundNormal_z",/* Member name */
            {
                47,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"groundType",/* Member name */
            {
                48,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"handBrake",/* Member name */
            {
                49,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"hubPosition_heading",/* Member name */
            {
                50,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"hubPosition_pitch",/* Member name */
            {
                51,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"hubPosition_roll",/* Member name */
            {
                52,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"hubPosition_x",/* Member name */
            {
                53,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"hubPosition_y",/* Member name */
            {
                54,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"hubPosition_z",/* Member name */
            {
                55,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"isEngineRetarder",/* Member name */
            {
                56,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"isInContact",/* Member name */
            {
                57,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"laneType",/* Member name */
            {
                58,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"lights",/* Member name */
            {
                59,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"lockDiffMode",/* Member name */
            {
                60,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"plowMode",/* Member name */
            {
                61,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"pollution",/* Member name */
            {
                62,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"roughnessHeight",/* Member name */
            {
                63,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"roughnessHeightStdDeviation",/* Member name */
            {
                64,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"roughnessLength",/* Member name */
            {
                65,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"roughnessLengthStdDeviation",/* Member name */
            {
                66,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"sirens",/* Member name */
            {
                67,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"slipAngle",/* Member name */
            {
                68,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"tireForce_x",/* Member name */
            {
                69,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"tireForce_y",/* Member name */
            {
                70,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"tireForce_z",/* Member name */
            {
                71,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"trailerBrake",/* Member name */
            {
                72,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"transferChoice",/* Member name */
            {
                73,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"waterHeight",/* Member name */
            {
                74,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"wheelRotation",/* Member name */
            {
                75,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"wheelRotationSpeed",/* Member name */
            {
                76,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode IndyDS_VehicleOutput_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"IndyDS::VehicleOutput", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            77, /* Number of members */
            IndyDS_VehicleOutput_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for IndyDS_VehicleOutput_c*/

    if (is_initialized) {
        return &IndyDS_VehicleOutput_c_g_tc;
    }

    IndyDS_VehicleOutput_c_g_tc_CustomOutput_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_GroundIndex_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_LSR_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_absIsActive_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_VehicleOutput_c_g_tc_brakeTemperature_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_contactPoint_x_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_contactPoint_y_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_contactPoint_z_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_grip_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_groundNormal_x_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_groundNormal_y_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_groundNormal_z_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_groundType_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_hubPosition_heading_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_hubPosition_pitch_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_hubPosition_roll_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_hubPosition_x_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_hubPosition_y_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_hubPosition_z_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_isInContact_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_VehicleOutput_c_g_tc_laneType_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_roughnessHeight_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_roughnessHeightStdDeviation_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_roughnessLength_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_roughnessLengthStdDeviation_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_slipAngle_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_tireForce_x_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_tireForce_y_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_tireForce_z_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_waterHeight_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_wheelRotation_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_wheelRotationSpeed_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_CustomOutput_array;
    IndyDS_VehicleOutput_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_VehicleOutput_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_GroundIndex_array;
    IndyDS_VehicleOutput_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_LSR_array;
    IndyDS_VehicleOutput_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_absIsActive_array;
    IndyDS_VehicleOutput_c_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_brakeTemperature_array;
    IndyDS_VehicleOutput_c_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_contactPoint_x_array;
    IndyDS_VehicleOutput_c_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_contactPoint_y_array;
    IndyDS_VehicleOutput_c_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_contactPoint_z_array;
    IndyDS_VehicleOutput_c_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_VehicleOutput_c_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[44]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_grip_array;
    IndyDS_VehicleOutput_c_g_tc_members[45]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_groundNormal_x_array;
    IndyDS_VehicleOutput_c_g_tc_members[46]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_groundNormal_y_array;
    IndyDS_VehicleOutput_c_g_tc_members[47]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_groundNormal_z_array;
    IndyDS_VehicleOutput_c_g_tc_members[48]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_groundType_array;
    IndyDS_VehicleOutput_c_g_tc_members[49]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[50]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_hubPosition_heading_array;
    IndyDS_VehicleOutput_c_g_tc_members[51]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_hubPosition_pitch_array;
    IndyDS_VehicleOutput_c_g_tc_members[52]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_hubPosition_roll_array;
    IndyDS_VehicleOutput_c_g_tc_members[53]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_hubPosition_x_array;
    IndyDS_VehicleOutput_c_g_tc_members[54]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_hubPosition_y_array;
    IndyDS_VehicleOutput_c_g_tc_members[55]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_hubPosition_z_array;
    IndyDS_VehicleOutput_c_g_tc_members[56]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    IndyDS_VehicleOutput_c_g_tc_members[57]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_isInContact_array;
    IndyDS_VehicleOutput_c_g_tc_members[58]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_laneType_array;
    IndyDS_VehicleOutput_c_g_tc_members[59]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[60]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[61]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[62]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[63]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_roughnessHeight_array;
    IndyDS_VehicleOutput_c_g_tc_members[64]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_roughnessHeightStdDeviation_array;
    IndyDS_VehicleOutput_c_g_tc_members[65]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_roughnessLength_array;
    IndyDS_VehicleOutput_c_g_tc_members[66]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_roughnessLengthStdDeviation_array;
    IndyDS_VehicleOutput_c_g_tc_members[67]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[68]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_slipAngle_array;
    IndyDS_VehicleOutput_c_g_tc_members[69]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_tireForce_x_array;
    IndyDS_VehicleOutput_c_g_tc_members[70]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_tireForce_y_array;
    IndyDS_VehicleOutput_c_g_tc_members[71]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_tireForce_z_array;
    IndyDS_VehicleOutput_c_g_tc_members[72]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    IndyDS_VehicleOutput_c_g_tc_members[73]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    IndyDS_VehicleOutput_c_g_tc_members[74]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_waterHeight_array;
    IndyDS_VehicleOutput_c_g_tc_members[75]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_wheelRotation_array;
    IndyDS_VehicleOutput_c_g_tc_members[76]._representation._typeCode = (RTICdrTypeCode *)& IndyDS_VehicleOutput_c_g_tc_wheelRotationSpeed_array;

    is_initialized = RTI_TRUE;

    return &IndyDS_VehicleOutput_c_g_tc;
}

RTIBool IndyDS_VehicleOutput_c_initialize(
    IndyDS_VehicleOutput_c* sample) {
    return IndyDS_VehicleOutput_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndyDS_VehicleOutput_c_initialize_ex(
    IndyDS_VehicleOutput_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return IndyDS_VehicleOutput_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool IndyDS_VehicleOutput_c_initialize_w_params(
    IndyDS_VehicleOutput_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->CustomOutput, (512), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->EngineSpeed)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->EngineState)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->GearBoxMode)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->GearEngaged)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->GroundIndex, (4), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->LSR, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->SteeringWheelAccel)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->SteeringWheelAngle)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->SteeringWheelSpeed)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->SteeringWheelTorque)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->TimeOfUpdate)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->TraveledDistance)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->absIsActive, (4), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->auxiliaryLights)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->brakePedal)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->brakeRetarderNotch)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->brakeTemperature, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgAccel_heading)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgAccel_pitch)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgAccel_roll)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgAccel_x)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgAccel_y)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgAccel_z)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgPos_heading)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgPos_pitch)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgPos_roll)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgPos_x)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgPos_y)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgPos_z)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgSpeed_heading)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgSpeed_pitch)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgSpeed_roll)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgSpeed_x)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgSpeed_y)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->cdgSpeed_z)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->clutchPedal)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->consumption)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->contactPoint_x, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->contactPoint_y, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->contactPoint_z, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->effectiveIgnitionKeyPosition)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->forceLockup)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->gasPedal)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->grip, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->groundNormal_x, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->groundNormal_y, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->groundNormal_z, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->groundType, (4), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->handBrake)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->hubPosition_heading, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->hubPosition_pitch, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->hubPosition_roll, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->hubPosition_x, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->hubPosition_y, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->hubPosition_z, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initOctet(&sample->isEngineRetarder)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->isInContact, (4), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->laneType, (4), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->lights)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->lockDiffMode)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->plowMode)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->pollution)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->roughnessHeight, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->roughnessHeightStdDeviation, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->roughnessLength, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->roughnessLengthStdDeviation, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->sirens)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->slipAngle, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->tireForce_x, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->tireForce_y, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->tireForce_z, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->trailerBrake)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->transferChoice)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->waterHeight, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->wheelRotation, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->wheelRotationSpeed, (4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void IndyDS_VehicleOutput_c_finalize(
    IndyDS_VehicleOutput_c* sample)
{

    IndyDS_VehicleOutput_c_finalize_ex(sample,RTI_TRUE);
}

void IndyDS_VehicleOutput_c_finalize_ex(
    IndyDS_VehicleOutput_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    IndyDS_VehicleOutput_c_finalize_w_params(
        sample,&deallocParams);
}

void IndyDS_VehicleOutput_c_finalize_w_params(
    IndyDS_VehicleOutput_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void IndyDS_VehicleOutput_c_finalize_optional_members(
    IndyDS_VehicleOutput_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool IndyDS_VehicleOutput_c_copy(
    IndyDS_VehicleOutput_c* dst,
    const IndyDS_VehicleOutput_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyArray(
        dst->CustomOutput ,src->CustomOutput,(512), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->EngineSpeed, &src->EngineSpeed)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->EngineState, &src->EngineState)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->GearBoxMode, &src->GearBoxMode)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->GearEngaged, &src->GearEngaged)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->GroundIndex ,src->GroundIndex,(4), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->LSR ,src->LSR,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->SteeringWheelAccel, &src->SteeringWheelAccel)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->SteeringWheelAngle, &src->SteeringWheelAngle)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->SteeringWheelSpeed, &src->SteeringWheelSpeed)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->SteeringWheelTorque, &src->SteeringWheelTorque)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->TimeOfUpdate, &src->TimeOfUpdate)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->TraveledDistance, &src->TraveledDistance)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->absIsActive ,src->absIsActive,(4), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->auxiliaryLights, &src->auxiliaryLights)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->brakePedal, &src->brakePedal)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->brakeRetarderNotch, &src->brakeRetarderNotch)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->brakeTemperature ,src->brakeTemperature,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgAccel_heading, &src->cdgAccel_heading)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgAccel_pitch, &src->cdgAccel_pitch)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgAccel_roll, &src->cdgAccel_roll)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgAccel_x, &src->cdgAccel_x)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgAccel_y, &src->cdgAccel_y)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgAccel_z, &src->cdgAccel_z)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgPos_heading, &src->cdgPos_heading)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgPos_pitch, &src->cdgPos_pitch)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgPos_roll, &src->cdgPos_roll)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgPos_x, &src->cdgPos_x)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgPos_y, &src->cdgPos_y)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgPos_z, &src->cdgPos_z)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgSpeed_heading, &src->cdgSpeed_heading)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgSpeed_pitch, &src->cdgSpeed_pitch)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgSpeed_roll, &src->cdgSpeed_roll)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgSpeed_x, &src->cdgSpeed_x)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgSpeed_y, &src->cdgSpeed_y)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cdgSpeed_z, &src->cdgSpeed_z)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->clutchPedal, &src->clutchPedal)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->consumption, &src->consumption)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->contactPoint_x ,src->contactPoint_x,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->contactPoint_y ,src->contactPoint_y,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->contactPoint_z ,src->contactPoint_z,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->effectiveIgnitionKeyPosition, &src->effectiveIgnitionKeyPosition)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->forceLockup, &src->forceLockup)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->gasPedal, &src->gasPedal)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->grip ,src->grip,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->groundNormal_x ,src->groundNormal_x,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->groundNormal_y ,src->groundNormal_y,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->groundNormal_z ,src->groundNormal_z,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->groundType ,src->groundType,(4), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->handBrake, &src->handBrake)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->hubPosition_heading ,src->hubPosition_heading,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->hubPosition_pitch ,src->hubPosition_pitch,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->hubPosition_roll ,src->hubPosition_roll,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->hubPosition_x ,src->hubPosition_x,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->hubPosition_y ,src->hubPosition_y,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->hubPosition_z ,src->hubPosition_z,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyOctet (
        &dst->isEngineRetarder, &src->isEngineRetarder)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->isInContact ,src->isInContact,(4), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->laneType ,src->laneType,(4), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->lights, &src->lights)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->lockDiffMode, &src->lockDiffMode)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->plowMode, &src->plowMode)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->pollution, &src->pollution)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->roughnessHeight ,src->roughnessHeight,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->roughnessHeightStdDeviation ,src->roughnessHeightStdDeviation,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->roughnessLength ,src->roughnessLength,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->roughnessLengthStdDeviation ,src->roughnessLengthStdDeviation,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->sirens, &src->sirens)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->slipAngle ,src->slipAngle,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->tireForce_x ,src->tireForce_x,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->tireForce_y ,src->tireForce_y,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->tireForce_z ,src->tireForce_z,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->trailerBrake, &src->trailerBrake)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->transferChoice, &src->transferChoice)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->waterHeight ,src->waterHeight,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->wheelRotation ,src->wheelRotation,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->wheelRotationSpeed ,src->wheelRotationSpeed,(4), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'IndyDS_VehicleOutput_c' sequence class.
*/
#define T IndyDS_VehicleOutput_c
#define TSeq IndyDS_VehicleOutput_cSeq

#define T_initialize_w_params IndyDS_VehicleOutput_c_initialize_w_params

#define T_finalize_w_params   IndyDS_VehicleOutput_c_finalize_w_params
#define T_copy       IndyDS_VehicleOutput_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

