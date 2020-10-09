
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RtiSCADE_DS_ControllerImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "RtiSCADE_DS_ControllerImplPlugin.h"

/* ----------------------------------------------------------------------------
*  Type IndyDS_RoadLinePolynom_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_RoadLinePolynom_c*
IndyDS_RoadLinePolynom_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_RoadLinePolynom_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_RoadLinePolynom_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_RoadLinePolynom_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_RoadLinePolynom_c *
IndyDS_RoadLinePolynom_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_RoadLinePolynom_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_RoadLinePolynom_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_RoadLinePolynom_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_RoadLinePolynom_c *
IndyDS_RoadLinePolynom_cPluginSupport_create_data(void)
{
    return IndyDS_RoadLinePolynom_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_RoadLinePolynom_cPluginSupport_destroy_data_w_params(
    IndyDS_RoadLinePolynom_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_RoadLinePolynom_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_RoadLinePolynom_cPluginSupport_destroy_data_ex(
    IndyDS_RoadLinePolynom_c *sample,RTIBool deallocate_pointers) {

    IndyDS_RoadLinePolynom_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_RoadLinePolynom_cPluginSupport_destroy_data(
    IndyDS_RoadLinePolynom_c *sample) {

    IndyDS_RoadLinePolynom_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_RoadLinePolynom_cPluginSupport_copy_data(
    IndyDS_RoadLinePolynom_c *dst,
    const IndyDS_RoadLinePolynom_c *src)
{
    return IndyDS_RoadLinePolynom_c_copy(dst,(const IndyDS_RoadLinePolynom_c*) src);
}

void 
IndyDS_RoadLinePolynom_cPluginSupport_print_data(
    const IndyDS_RoadLinePolynom_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printShort(
        &sample->lineId, "lineId", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->c0, "c0", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->c1, "c1", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->c2, "c2", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->c3, "c3", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->curvatureRadius, "curvatureRadius", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->estimatedCurvatureRadius, "estimatedCurvatureRadius", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_RoadLinePolynom_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_RoadLinePolynom_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_RoadLinePolynom_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_RoadLinePolynom_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_RoadLinePolynom_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_RoadLinePolynom_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_RoadLinePolynom_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *sample,
    void *handle)
{

    IndyDS_RoadLinePolynom_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_RoadLinePolynom_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *dst,
    const IndyDS_RoadLinePolynom_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_RoadLinePolynom_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_RoadLinePolynom_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinePolynom_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeShort(
            stream, &sample->lineId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->c0)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->c1)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->c2)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->c3)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->curvatureRadius)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->estimatedCurvatureRadius)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_RoadLinePolynom_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_RoadLinePolynom_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeShort(
            stream, &sample->lineId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->c0)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->c1)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->c2)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->c3)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->curvatureRadius)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->estimatedCurvatureRadius)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_RoadLinePolynom_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_RoadLinePolynom_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_RoadLinePolynom_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_RoadLinePolynom_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_RoadLinePolynom_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_RoadLinePolynom_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_RoadLinePolynom_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_RoadLinePolynom_cPlugin_data_to_string(
    const IndyDS_RoadLinePolynom_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_RoadLinePolynom_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_RoadLinePolynom_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_RoadLinePolynom_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_RoadLinePolynom_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_RoadLinePolynom_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_RoadLinePolynom_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_RoadLinePolynom_c");

    }

    return result;

}

RTIBool IndyDS_RoadLinePolynom_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_RoadLinePolynom_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_RoadLinePolynom_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_RoadLinePolynom_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinePolynom_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_RoadLinePolynom_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_RoadLinePolynom_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_RoadLinePolynom_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_RoadLinePolynom_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_RoadLinePolynom_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_RoadLinePolynom_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_RoadLinePolynom_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_RoadLinePolynom_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_RoadLinePolynom_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_RoadLinePolynom_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_RoadLinePolynom_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_RoadLinePolynom_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_RoadLinePolynom_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_RoadLinePolynom_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_RoadLinePolynom_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_RoadLinePolynom_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_RoadLinePolynom_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_RoadLinePolynom_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_RoadLinePolynom_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_RoadLinePolynom_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_RoadLinePolynom_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_RoadLinePolynom_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_RoadLinePolynom_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_RoadLinePolynom_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_RoadLinePolynom_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_RoadLinePolynom_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_RoadLinePolynom_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_RoadLinePolynom_cTYPENAME;

    return plugin;
}

void
IndyDS_RoadLinePolynom_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_RoadLinesPolynoms_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_RoadLinesPolynoms_c*
IndyDS_RoadLinesPolynoms_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_RoadLinesPolynoms_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_RoadLinesPolynoms_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_RoadLinesPolynoms_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_RoadLinesPolynoms_c *
IndyDS_RoadLinesPolynoms_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_RoadLinesPolynoms_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_RoadLinesPolynoms_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_RoadLinesPolynoms_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_RoadLinesPolynoms_c *
IndyDS_RoadLinesPolynoms_cPluginSupport_create_data(void)
{
    return IndyDS_RoadLinesPolynoms_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data_w_params(
    IndyDS_RoadLinesPolynoms_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_RoadLinesPolynoms_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data_ex(
    IndyDS_RoadLinesPolynoms_c *sample,RTIBool deallocate_pointers) {

    IndyDS_RoadLinesPolynoms_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data(
    IndyDS_RoadLinesPolynoms_c *sample) {

    IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_RoadLinesPolynoms_cPluginSupport_copy_data(
    IndyDS_RoadLinesPolynoms_c *dst,
    const IndyDS_RoadLinesPolynoms_c *src)
{
    return IndyDS_RoadLinesPolynoms_c_copy(dst,(const IndyDS_RoadLinesPolynoms_c*) src);
}

void 
IndyDS_RoadLinesPolynoms_cPluginSupport_print_data(
    const IndyDS_RoadLinesPolynoms_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printShort(
        &sample->egoVhlId, "egoVhlId", indent_level + 1);    

    RTICdrType_printLong(
        &sample->globalId, "globalId", indent_level + 1);    

    RTICdrType_printOctet(
        &sample->isNoisy, "isNoisy", indent_level + 1);    

    RTICdrType_printShort(
        &sample->referenceFrame, "referenceFrame", indent_level + 1);    

    if (IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray) != NULL) {
        RTICdrType_printArray(
            IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray), 
            IndyDS_RoadLinePolynom_cSeq_get_length(&sample->roadLinesPolynomsArray),
            sizeof(IndyDS_RoadLinePolynom_c),
            (RTICdrTypePrintFunction)IndyDS_RoadLinePolynom_cPluginSupport_print_data,
            "roadLinesPolynomsArray", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            IndyDS_RoadLinePolynom_cSeq_get_discontiguous_bufferI(&sample->roadLinesPolynomsArray), 
            IndyDS_RoadLinePolynom_cSeq_get_length(&sample->roadLinesPolynomsArray),
            (RTICdrTypePrintFunction)IndyDS_RoadLinePolynom_cPluginSupport_print_data,
            "roadLinesPolynomsArray", indent_level + 1);
    }

    RTICdrType_printDouble(
        &sample->timeOfUpdate, "timeOfUpdate", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_RoadLinesPolynoms_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_RoadLinesPolynoms_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_RoadLinesPolynoms_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_RoadLinesPolynoms_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_RoadLinesPolynoms_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_RoadLinesPolynoms_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *sample,
    void *handle)
{

    IndyDS_RoadLinesPolynoms_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *dst,
    const IndyDS_RoadLinesPolynoms_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_RoadLinesPolynoms_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinesPolynoms_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeShort(
            stream, &sample->egoVhlId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->globalId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->isNoisy)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->referenceFrame)) {
            return RTI_FALSE;
        }

        if (IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray),
                IndyDS_RoadLinePolynom_cSeq_get_length(&sample->roadLinesPolynomsArray),
                (3),
                sizeof(IndyDS_RoadLinePolynom_c),
                (RTICdrStreamSerializeFunction)IndyDS_RoadLinePolynom_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) IndyDS_RoadLinePolynom_cSeq_get_discontiguous_bufferI(&sample->roadLinesPolynomsArray),
                IndyDS_RoadLinePolynom_cSeq_get_length(&sample->roadLinesPolynomsArray),
                (3),
                (RTICdrStreamSerializeFunction)IndyDS_RoadLinePolynom_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->timeOfUpdate)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_RoadLinesPolynoms_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeShort(
            stream, &sample->egoVhlId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->globalId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeOctet(
            stream, &sample->isNoisy)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->referenceFrame)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray),
                    &sequence_length,
                    IndyDS_RoadLinePolynom_cSeq_get_maximum(&sample->roadLinesPolynomsArray),
                    sizeof(IndyDS_RoadLinePolynom_c),
                    (RTICdrStreamDeserializeFunction)IndyDS_RoadLinePolynom_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) IndyDS_RoadLinePolynom_cSeq_get_discontiguous_bufferI(&sample->roadLinesPolynomsArray),
                    &sequence_length,
                    IndyDS_RoadLinePolynom_cSeq_get_maximum(&sample->roadLinesPolynomsArray),
                    (RTICdrStreamDeserializeFunction)IndyDS_RoadLinePolynom_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!IndyDS_RoadLinePolynom_cSeq_set_length(
                &sample->roadLinesPolynomsArray,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->timeOfUpdate)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_RoadLinesPolynoms_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_RoadLinesPolynoms_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_RoadLinesPolynoms_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_RoadLinesPolynoms_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_RoadLinesPolynoms_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_RoadLinesPolynoms_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_RoadLinesPolynoms_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_RoadLinesPolynoms_cPlugin_data_to_string(
    const IndyDS_RoadLinesPolynoms_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_RoadLinesPolynoms_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_RoadLinesPolynoms_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_RoadLinesPolynoms_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_RoadLinesPolynoms_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_RoadLinesPolynoms_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_RoadLinesPolynoms_c");

    }

    return result;

}

RTIBool IndyDS_RoadLinesPolynoms_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(IndyDS_RoadLinePolynom_c),
                (RTICdrStreamSkipFunction)IndyDS_RoadLinePolynom_cPlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (3),
        IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_RoadLinesPolynoms_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_get4ByteMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray) != NULL) {
        current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
            current_alignment, IndyDS_RoadLinePolynom_cSeq_get_length(&sample->roadLinesPolynomsArray),
            sizeof(IndyDS_RoadLinePolynom_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            IndyDS_RoadLinePolynom_cSeq_get_contiguous_bufferI(&sample->roadLinesPolynomsArray),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerArraySerializedSize(
            current_alignment,  
            IndyDS_RoadLinePolynom_cSeq_get_length(&sample->roadLinesPolynomsArray),
            sizeof(IndyDS_RoadLinePolynom_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)IndyDS_RoadLinePolynom_cSeq_get_discontiguous_bufferI(&sample->roadLinesPolynomsArray),
            endpoint_data);
    }

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_RoadLinesPolynoms_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinesPolynoms_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_RoadLinesPolynoms_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_RoadLinesPolynoms_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_RoadLinesPolynoms_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_RoadLinesPolynoms_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_RoadLinesPolynoms_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_RoadLinesPolynoms_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_RoadLinesPolynoms_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_RoadLinesPolynoms_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_RoadLinesPolynoms_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_RoadLinesPolynoms_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_RoadLinesPolynoms_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_RoadLinesPolynoms_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_RoadLinesPolynoms_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_RoadLinesPolynoms_cTYPENAME;

    return plugin;
}

void
IndyDS_RoadLinesPolynoms_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_SensorTargetBBox_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_SensorTargetBBox_c*
IndyDS_SensorTargetBBox_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_SensorTargetBBox_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorTargetBBox_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorTargetBBox_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_SensorTargetBBox_c *
IndyDS_SensorTargetBBox_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_SensorTargetBBox_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorTargetBBox_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorTargetBBox_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_SensorTargetBBox_c *
IndyDS_SensorTargetBBox_cPluginSupport_create_data(void)
{
    return IndyDS_SensorTargetBBox_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_SensorTargetBBox_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorTargetBBox_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_SensorTargetBBox_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorTargetBBox_cPluginSupport_destroy_data_ex(
    IndyDS_SensorTargetBBox_c *sample,RTIBool deallocate_pointers) {

    IndyDS_SensorTargetBBox_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorTargetBBox_cPluginSupport_destroy_data(
    IndyDS_SensorTargetBBox_c *sample) {

    IndyDS_SensorTargetBBox_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_SensorTargetBBox_cPluginSupport_copy_data(
    IndyDS_SensorTargetBBox_c *dst,
    const IndyDS_SensorTargetBBox_c *src)
{
    return IndyDS_SensorTargetBBox_c_copy(dst,(const IndyDS_SensorTargetBBox_c*) src);
}

void 
IndyDS_SensorTargetBBox_cPluginSupport_print_data(
    const IndyDS_SensorTargetBBox_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printShort(
        &sample->id, "id", indent_level + 1);    

    RTICdrType_printShort(
        &sample->referenceFrame, "referenceFrame", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearBottomRightX, "rearBottomRightX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearBottomRightY, "rearBottomRightY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearBottomRightZ, "rearBottomRightZ", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearTopRightX, "rearTopRightX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearTopRightY, "rearTopRightY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearTopRightZ, "rearTopRightZ", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearbottomLeftX, "rearbottomLeftX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearbottomLeftY, "rearbottomLeftY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearbottomLeftZ, "rearbottomLeftZ", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearTopLeftX, "rearTopLeftX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearTopLeftY, "rearTopLeftY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->rearTopLeftZ, "rearTopLeftZ", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontBottomRightX, "frontBottomRightX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontBottomRightY, "frontBottomRightY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontBottomRightZ, "frontBottomRightZ", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontTopRightX, "frontTopRightX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontTopRightY, "frontTopRightY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontTopRightZ, "frontTopRightZ", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontbottomLeftX, "frontbottomLeftX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontbottomLeftY, "frontbottomLeftY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontbottomLeftZ, "frontbottomLeftZ", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontTopLeftX, "frontTopLeftX", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontTopLeftY, "frontTopLeftY", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->frontTopLeftZ, "frontTopLeftZ", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_SensorTargetBBox_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_SensorTargetBBox_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_SensorTargetBBox_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_SensorTargetBBox_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_SensorTargetBBox_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_SensorTargetBBox_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_SensorTargetBBox_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *sample,
    void *handle)
{

    IndyDS_SensorTargetBBox_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_SensorTargetBBox_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *dst,
    const IndyDS_SensorTargetBBox_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_SensorTargetBBox_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_SensorTargetBBox_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorTargetBBox_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeShort(
            stream, &sample->id)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->referenceFrame)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearBottomRightX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearBottomRightY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearBottomRightZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearTopRightX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearTopRightY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearTopRightZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearbottomLeftX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearbottomLeftY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearbottomLeftZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearTopLeftX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearTopLeftY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->rearTopLeftZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontBottomRightX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontBottomRightY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontBottomRightZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontTopRightX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontTopRightY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontTopRightZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontbottomLeftX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontbottomLeftY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontbottomLeftZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontTopLeftX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontTopLeftY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->frontTopLeftZ)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_SensorTargetBBox_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_SensorTargetBBox_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeShort(
            stream, &sample->id)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->referenceFrame)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearBottomRightX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearBottomRightY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearBottomRightZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearTopRightX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearTopRightY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearTopRightZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearbottomLeftX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearbottomLeftY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearbottomLeftZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearTopLeftX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearTopLeftY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->rearTopLeftZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontBottomRightX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontBottomRightY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontBottomRightZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontTopRightX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontTopRightY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontTopRightZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontbottomLeftX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontbottomLeftY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontbottomLeftZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontTopLeftX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontTopLeftY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->frontTopLeftZ)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_SensorTargetBBox_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorTargetBBox_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_SensorTargetBBox_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_SensorTargetBBox_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorTargetBBox_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_SensorTargetBBox_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_SensorTargetBBox_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_SensorTargetBBox_cPlugin_data_to_string(
    const IndyDS_SensorTargetBBox_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_SensorTargetBBox_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_SensorTargetBBox_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_SensorTargetBBox_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_SensorTargetBBox_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_SensorTargetBBox_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorTargetBBox_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_SensorTargetBBox_c");

    }

    return result;

}

RTIBool IndyDS_SensorTargetBBox_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorTargetBBox_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_SensorTargetBBox_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_SensorTargetBBox_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorTargetBBox_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_SensorTargetBBox_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_SensorTargetBBox_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_SensorTargetBBox_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_SensorTargetBBox_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorTargetBBox_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_SensorTargetBBox_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_SensorTargetBBox_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorTargetBBox_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_SensorTargetBBox_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_SensorTargetBBox_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_SensorTargetBBox_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_SensorTargetBBox_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_SensorTargetBBox_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_SensorTargetBBox_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_SensorTargetBBox_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_SensorTargetBBox_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_SensorTargetBBox_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_SensorTargetBBox_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_SensorTargetBBox_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_SensorTargetBBox_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_SensorTargetBBox_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_SensorTargetBBox_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_SensorTargetBBox_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_SensorTargetBBox_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_SensorTargetBBox_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_SensorTargetBBox_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_SensorTargetBBox_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_SensorTargetBBox_cTYPENAME;

    return plugin;
}

void
IndyDS_SensorTargetBBox_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_SensorMovableTargetsBoundingBoxes_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_SensorMovableTargetsBoundingBoxes_c*
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorMovableTargetsBoundingBoxes_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_SensorMovableTargetsBoundingBoxes_c *
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorMovableTargetsBoundingBoxes_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_SensorMovableTargetsBoundingBoxes_c *
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data(void)
{
    return IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data_ex(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,RTIBool deallocate_pointers) {

    IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample) {

    IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_copy_data(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *dst,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *src)
{
    return IndyDS_SensorMovableTargetsBoundingBoxes_c_copy(dst,(const IndyDS_SensorMovableTargetsBoundingBoxes_c*) src);
}

void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_print_data(
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray) != NULL) {
        RTICdrType_printArray(
            IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray), 
            IndyDS_SensorTargetBBox_cSeq_get_length(&sample->boundingBoxesArray),
            sizeof(IndyDS_SensorTargetBBox_c),
            (RTICdrTypePrintFunction)IndyDS_SensorTargetBBox_cPluginSupport_print_data,
            "boundingBoxesArray", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            IndyDS_SensorTargetBBox_cSeq_get_discontiguous_bufferI(&sample->boundingBoxesArray), 
            IndyDS_SensorTargetBBox_cSeq_get_length(&sample->boundingBoxesArray),
            (RTICdrTypePrintFunction)IndyDS_SensorTargetBBox_cPluginSupport_print_data,
            "boundingBoxesArray", indent_level + 1);
    }

    RTICdrType_printLong(
        &sample->globalId, "globalId", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->timeOfUpdate, "timeOfUpdate", indent_level + 1);    

    RTICdrType_printShort(
        &sample->vhlId, "vhlId", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    void *handle)
{

    IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *dst,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray),
                IndyDS_SensorTargetBBox_cSeq_get_length(&sample->boundingBoxesArray),
                (30),
                sizeof(IndyDS_SensorTargetBBox_c),
                (RTICdrStreamSerializeFunction)IndyDS_SensorTargetBBox_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) IndyDS_SensorTargetBBox_cSeq_get_discontiguous_bufferI(&sample->boundingBoxesArray),
                IndyDS_SensorTargetBBox_cSeq_get_length(&sample->boundingBoxesArray),
                (30),
                (RTICdrStreamSerializeFunction)IndyDS_SensorTargetBBox_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->globalId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->timeOfUpdate)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->vhlId)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        {
            RTICdrUnsignedLong sequence_length;
            if (IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray),
                    &sequence_length,
                    IndyDS_SensorTargetBBox_cSeq_get_maximum(&sample->boundingBoxesArray),
                    sizeof(IndyDS_SensorTargetBBox_c),
                    (RTICdrStreamDeserializeFunction)IndyDS_SensorTargetBBox_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) IndyDS_SensorTargetBBox_cSeq_get_discontiguous_bufferI(&sample->boundingBoxesArray),
                    &sequence_length,
                    IndyDS_SensorTargetBBox_cSeq_get_maximum(&sample->boundingBoxesArray),
                    (RTICdrStreamDeserializeFunction)IndyDS_SensorTargetBBox_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!IndyDS_SensorTargetBBox_cSeq_set_length(
                &sample->boundingBoxesArray,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->globalId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->timeOfUpdate)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->vhlId)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_data_to_string(
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_SensorMovableTargetsBoundingBoxes_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_SensorMovableTargetsBoundingBoxes_c");

    }

    return result;

}

RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(IndyDS_SensorTargetBBox_c),
                (RTICdrStreamSkipFunction)IndyDS_SensorTargetBBox_cPlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (30),
        IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_get4ByteMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray) != NULL) {
        current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
            current_alignment, IndyDS_SensorTargetBBox_cSeq_get_length(&sample->boundingBoxesArray),
            sizeof(IndyDS_SensorTargetBBox_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            IndyDS_SensorTargetBBox_cSeq_get_contiguous_bufferI(&sample->boundingBoxesArray),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerArraySerializedSize(
            current_alignment,  
            IndyDS_SensorTargetBBox_cSeq_get_length(&sample->boundingBoxesArray),
            sizeof(IndyDS_SensorTargetBBox_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)IndyDS_SensorTargetBBox_cSeq_get_discontiguous_bufferI(&sample->boundingBoxesArray),
            endpoint_data);
    }

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_SensorMovableTargetsBoundingBoxes_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_SensorMovableTargetsBoundingBoxes_cTYPENAME;

    return plugin;
}

void
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_GPS_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_GPS_c*
IndyDS_GPS_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_GPS_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_GPS_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_GPS_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_GPS_c *
IndyDS_GPS_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_GPS_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_GPS_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_GPS_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_GPS_c *
IndyDS_GPS_cPluginSupport_create_data(void)
{
    return IndyDS_GPS_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_GPS_cPluginSupport_destroy_data_w_params(
    IndyDS_GPS_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_GPS_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_GPS_cPluginSupport_destroy_data_ex(
    IndyDS_GPS_c *sample,RTIBool deallocate_pointers) {

    IndyDS_GPS_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_GPS_cPluginSupport_destroy_data(
    IndyDS_GPS_c *sample) {

    IndyDS_GPS_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_GPS_cPluginSupport_copy_data(
    IndyDS_GPS_c *dst,
    const IndyDS_GPS_c *src)
{
    return IndyDS_GPS_c_copy(dst,(const IndyDS_GPS_c*) src);
}

void 
IndyDS_GPS_cPluginSupport_print_data(
    const IndyDS_GPS_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printDouble(
        &sample->altitude, "altitude", indent_level + 1);    

    RTICdrType_printLong(
        &sample->globalId, "globalId", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->hdop, "hdop", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->lastUpdate, "lastUpdate", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->latitude, "latitude", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->longitude, "longitude", indent_level + 1);    

    RTICdrType_printShort(
        &sample->satellites, "satellites", indent_level + 1);    

    RTICdrType_printShort(
        &sample->sensorId, "sensorId", indent_level + 1);    

    RTICdrType_printShort(
        &sample->vhlId, "vhlId", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_GPS_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_GPS_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_GPS_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_GPS_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_GPS_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_GPS_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_GPS_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_GPS_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_GPS_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_GPS_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *sample,
    void *handle)
{

    IndyDS_GPS_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_GPS_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *dst,
    const IndyDS_GPS_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_GPS_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_GPS_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_GPS_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_GPS_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeDouble(
            stream, &sample->altitude)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->globalId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->hdop)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->lastUpdate)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->latitude)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->longitude)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->satellites)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->sensorId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->vhlId)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_GPS_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_GPS_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->altitude)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->globalId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->hdop)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->lastUpdate)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->latitude)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->longitude)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->satellites)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->sensorId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->vhlId)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_GPS_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_GPS_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_GPS_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_GPS_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_GPS_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_GPS_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_GPS_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_GPS_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_GPS_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_GPS_cPlugin_data_to_string(
    const IndyDS_GPS_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_GPS_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_GPS_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_GPS_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_GPS_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_GPS_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_GPS_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_GPS_c");

    }

    return result;

}

RTIBool IndyDS_GPS_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_GPS_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_GPS_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_GPS_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_GPS_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_GPS_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_GPS_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_GPS_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_GPS_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_GPS_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_GPS_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_GPS_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_GPS_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_GPS_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_GPS_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_GPS_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_GPS_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_GPS_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_GPS_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_GPS_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_GPS_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_GPS_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_GPS_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_GPS_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_GPS_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_GPS_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_GPS_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_GPS_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_GPS_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_GPS_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_GPS_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_GPS_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_GPS_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_GPS_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_GPS_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_GPS_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_GPS_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_GPS_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_GPS_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_GPS_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_GPS_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_GPS_cTYPENAME;

    return plugin;
}

void
IndyDS_GPS_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_LaserMeterPoint_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_LaserMeterPoint_c*
IndyDS_LaserMeterPoint_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_LaserMeterPoint_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_LaserMeterPoint_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_LaserMeterPoint_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_LaserMeterPoint_c *
IndyDS_LaserMeterPoint_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_LaserMeterPoint_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_LaserMeterPoint_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_LaserMeterPoint_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_LaserMeterPoint_c *
IndyDS_LaserMeterPoint_cPluginSupport_create_data(void)
{
    return IndyDS_LaserMeterPoint_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_LaserMeterPoint_cPluginSupport_destroy_data_w_params(
    IndyDS_LaserMeterPoint_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_LaserMeterPoint_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_LaserMeterPoint_cPluginSupport_destroy_data_ex(
    IndyDS_LaserMeterPoint_c *sample,RTIBool deallocate_pointers) {

    IndyDS_LaserMeterPoint_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_LaserMeterPoint_cPluginSupport_destroy_data(
    IndyDS_LaserMeterPoint_c *sample) {

    IndyDS_LaserMeterPoint_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_LaserMeterPoint_cPluginSupport_copy_data(
    IndyDS_LaserMeterPoint_c *dst,
    const IndyDS_LaserMeterPoint_c *src)
{
    return IndyDS_LaserMeterPoint_c_copy(dst,(const IndyDS_LaserMeterPoint_c*) src);
}

void 
IndyDS_LaserMeterPoint_cPluginSupport_print_data(
    const IndyDS_LaserMeterPoint_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printOctet(
        &sample->hit, "hit", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->Hangle, "Hangle", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->Vangle, "Vangle", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->absposx, "absposx", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->absposy, "absposy", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->absposz, "absposz", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relposx, "relposx", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relposy, "relposy", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relposz, "relposz", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->distance, "distance", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_LaserMeterPoint_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_LaserMeterPoint_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_LaserMeterPoint_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_LaserMeterPoint_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_LaserMeterPoint_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_LaserMeterPoint_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_LaserMeterPoint_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *sample,
    void *handle)
{

    IndyDS_LaserMeterPoint_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_LaserMeterPoint_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *dst,
    const IndyDS_LaserMeterPoint_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_LaserMeterPoint_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_LaserMeterPoint_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeterPoint_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeOctet(
            stream, &sample->hit)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->Hangle)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->Vangle)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->absposx)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->absposy)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->absposz)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relposx)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relposy)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relposz)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->distance)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_LaserMeterPoint_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_LaserMeterPoint_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeOctet(
            stream, &sample->hit)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->Hangle)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->Vangle)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->absposx)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->absposy)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->absposz)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relposx)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relposy)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relposz)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->distance)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_LaserMeterPoint_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_LaserMeterPoint_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_LaserMeterPoint_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_LaserMeterPoint_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_LaserMeterPoint_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_LaserMeterPoint_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_LaserMeterPoint_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_LaserMeterPoint_cPlugin_data_to_string(
    const IndyDS_LaserMeterPoint_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_LaserMeterPoint_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_LaserMeterPoint_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_LaserMeterPoint_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_LaserMeterPoint_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_LaserMeterPoint_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_LaserMeterPoint_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_LaserMeterPoint_c");

    }

    return result;

}

RTIBool IndyDS_LaserMeterPoint_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_LaserMeterPoint_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_LaserMeterPoint_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_LaserMeterPoint_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeterPoint_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_LaserMeterPoint_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_LaserMeterPoint_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_LaserMeterPoint_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_LaserMeterPoint_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_LaserMeterPoint_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_LaserMeterPoint_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_LaserMeterPoint_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_LaserMeterPoint_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_LaserMeterPoint_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_LaserMeterPoint_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_LaserMeterPoint_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_LaserMeterPoint_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_LaserMeterPoint_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_LaserMeterPoint_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_LaserMeterPoint_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_LaserMeterPoint_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_LaserMeterPoint_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_LaserMeterPoint_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_LaserMeterPoint_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_LaserMeterPoint_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_LaserMeterPoint_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_LaserMeterPoint_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_LaserMeterPoint_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_LaserMeterPoint_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_LaserMeterPoint_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_LaserMeterPoint_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_LaserMeterPoint_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_LaserMeterPoint_cTYPENAME;

    return plugin;
}

void
IndyDS_LaserMeterPoint_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_LaserMeter_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_LaserMeter_c*
IndyDS_LaserMeter_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_LaserMeter_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_LaserMeter_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_LaserMeter_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_LaserMeter_c *
IndyDS_LaserMeter_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_LaserMeter_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_LaserMeter_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_LaserMeter_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_LaserMeter_c *
IndyDS_LaserMeter_cPluginSupport_create_data(void)
{
    return IndyDS_LaserMeter_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_LaserMeter_cPluginSupport_destroy_data_w_params(
    IndyDS_LaserMeter_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_LaserMeter_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_LaserMeter_cPluginSupport_destroy_data_ex(
    IndyDS_LaserMeter_c *sample,RTIBool deallocate_pointers) {

    IndyDS_LaserMeter_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_LaserMeter_cPluginSupport_destroy_data(
    IndyDS_LaserMeter_c *sample) {

    IndyDS_LaserMeter_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_LaserMeter_cPluginSupport_copy_data(
    IndyDS_LaserMeter_c *dst,
    const IndyDS_LaserMeter_c *src)
{
    return IndyDS_LaserMeter_c_copy(dst,(const IndyDS_LaserMeter_c*) src);
}

void 
IndyDS_LaserMeter_cPluginSupport_print_data(
    const IndyDS_LaserMeter_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printShort(
        &sample->frameCount, "frameCount", indent_level + 1);    

    RTICdrType_printLong(
        &sample->globalId, "globalId", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->lastUpdate, "lastUpdate", indent_level + 1);    

    RTICdrType_printShort(
        &sample->nearestPoint, "nearestPoint", indent_level + 1);    

    if (IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray) != NULL) {
        RTICdrType_printArray(
            IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray), 
            IndyDS_LaserMeterPoint_cSeq_get_length(&sample->resultArray),
            sizeof(IndyDS_LaserMeterPoint_c),
            (RTICdrTypePrintFunction)IndyDS_LaserMeterPoint_cPluginSupport_print_data,
            "resultArray", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            IndyDS_LaserMeterPoint_cSeq_get_discontiguous_bufferI(&sample->resultArray), 
            IndyDS_LaserMeterPoint_cSeq_get_length(&sample->resultArray),
            (RTICdrTypePrintFunction)IndyDS_LaserMeterPoint_cPluginSupport_print_data,
            "resultArray", indent_level + 1);
    }

    RTICdrType_printShort(
        &sample->sensorId, "sensorId", indent_level + 1);    

    RTICdrType_printShort(
        &sample->vhlId, "vhlId", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_LaserMeter_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_LaserMeter_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_LaserMeter_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_LaserMeter_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_LaserMeter_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_LaserMeter_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_LaserMeter_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_LaserMeter_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *sample,
    void *handle)
{

    IndyDS_LaserMeter_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_LaserMeter_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *dst,
    const IndyDS_LaserMeter_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_LaserMeter_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_LaserMeter_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeter_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeShort(
            stream, &sample->frameCount)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->globalId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->lastUpdate)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->nearestPoint)) {
            return RTI_FALSE;
        }

        if (IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray),
                IndyDS_LaserMeterPoint_cSeq_get_length(&sample->resultArray),
                (720),
                sizeof(IndyDS_LaserMeterPoint_c),
                (RTICdrStreamSerializeFunction)IndyDS_LaserMeterPoint_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) IndyDS_LaserMeterPoint_cSeq_get_discontiguous_bufferI(&sample->resultArray),
                IndyDS_LaserMeterPoint_cSeq_get_length(&sample->resultArray),
                (720),
                (RTICdrStreamSerializeFunction)IndyDS_LaserMeterPoint_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->sensorId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->vhlId)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_LaserMeter_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_LaserMeter_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeShort(
            stream, &sample->frameCount)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->globalId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->lastUpdate)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->nearestPoint)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray),
                    &sequence_length,
                    IndyDS_LaserMeterPoint_cSeq_get_maximum(&sample->resultArray),
                    sizeof(IndyDS_LaserMeterPoint_c),
                    (RTICdrStreamDeserializeFunction)IndyDS_LaserMeterPoint_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) IndyDS_LaserMeterPoint_cSeq_get_discontiguous_bufferI(&sample->resultArray),
                    &sequence_length,
                    IndyDS_LaserMeterPoint_cSeq_get_maximum(&sample->resultArray),
                    (RTICdrStreamDeserializeFunction)IndyDS_LaserMeterPoint_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!IndyDS_LaserMeterPoint_cSeq_set_length(
                &sample->resultArray,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->sensorId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->vhlId)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_LaserMeter_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_LaserMeter_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_LaserMeter_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_LaserMeter_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_LaserMeter_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_LaserMeter_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_LaserMeter_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_LaserMeter_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_LaserMeter_cPlugin_data_to_string(
    const IndyDS_LaserMeter_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_LaserMeter_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_LaserMeter_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_LaserMeter_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_LaserMeter_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_LaserMeter_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_LaserMeter_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_LaserMeter_c");

    }

    return result;

}

RTIBool IndyDS_LaserMeter_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(IndyDS_LaserMeterPoint_c),
                (RTICdrStreamSkipFunction)IndyDS_LaserMeterPoint_cPlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (720),
        IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_LaserMeter_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_LaserMeter_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_get4ByteMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray) != NULL) {
        current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
            current_alignment, IndyDS_LaserMeterPoint_cSeq_get_length(&sample->resultArray),
            sizeof(IndyDS_LaserMeterPoint_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            IndyDS_LaserMeterPoint_cSeq_get_contiguous_bufferI(&sample->resultArray),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerArraySerializedSize(
            current_alignment,  
            IndyDS_LaserMeterPoint_cSeq_get_length(&sample->resultArray),
            sizeof(IndyDS_LaserMeterPoint_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)IndyDS_LaserMeterPoint_cSeq_get_discontiguous_bufferI(&sample->resultArray),
            endpoint_data);
    }

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_LaserMeter_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_LaserMeter_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeter_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_LaserMeter_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_LaserMeter_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_LaserMeter_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_LaserMeter_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_LaserMeter_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_LaserMeter_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_LaserMeter_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_LaserMeter_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_LaserMeter_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_LaserMeter_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_LaserMeter_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_LaserMeter_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_LaserMeter_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_LaserMeter_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_LaserMeter_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_LaserMeter_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_LaserMeter_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_LaserMeter_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_LaserMeter_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_LaserMeter_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_LaserMeter_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_LaserMeter_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_LaserMeter_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_LaserMeter_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_LaserMeter_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_LaserMeter_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_LaserMeter_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_LaserMeter_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_LaserMeter_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_LaserMeter_cTYPENAME;

    return plugin;
}

void
IndyDS_LaserMeter_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_SensorMovableTarget_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_SensorMovableTarget_c*
IndyDS_SensorMovableTarget_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_SensorMovableTarget_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorMovableTarget_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorMovableTarget_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_SensorMovableTarget_c *
IndyDS_SensorMovableTarget_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_SensorMovableTarget_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorMovableTarget_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorMovableTarget_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_SensorMovableTarget_c *
IndyDS_SensorMovableTarget_cPluginSupport_create_data(void)
{
    return IndyDS_SensorMovableTarget_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_SensorMovableTarget_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorMovableTarget_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_SensorMovableTarget_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorMovableTarget_cPluginSupport_destroy_data_ex(
    IndyDS_SensorMovableTarget_c *sample,RTIBool deallocate_pointers) {

    IndyDS_SensorMovableTarget_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorMovableTarget_cPluginSupport_destroy_data(
    IndyDS_SensorMovableTarget_c *sample) {

    IndyDS_SensorMovableTarget_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_SensorMovableTarget_cPluginSupport_copy_data(
    IndyDS_SensorMovableTarget_c *dst,
    const IndyDS_SensorMovableTarget_c *src)
{
    return IndyDS_SensorMovableTarget_c_copy(dst,(const IndyDS_SensorMovableTarget_c*) src);
}

void 
IndyDS_SensorMovableTarget_cPluginSupport_print_data(
    const IndyDS_SensorMovableTarget_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printShort(
        &sample->id, "id", indent_level + 1);    

    RTICdrType_printShort(
        &sample->scanerId, "scanerId", indent_level + 1);    

    RTICdrType_printShort(
        &sample->detectionStatus, "detectionStatus", indent_level + 1);    

    RTICdrType_printShort(
        &sample->type_, "type_", indent_level + 1);    

    RTICdrType_printShort(
        &sample->beamIndex, "beamIndex", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->existenceTime, "existenceTime", indent_level + 1);    

    RTICdrType_printShort(
        &sample->anchorPoint, "anchorPoint", indent_level + 1);    

    RTICdrType_printShort(
        &sample->referenceFrame, "referenceFrame", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->posXInChosenRef, "posXInChosenRef", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->posYInChosenRef, "posYInChosenRef", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->posZInChosenRef, "posZInChosenRef", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->posHeadingInChosenRef, "posHeadingInChosenRef", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->posPitchInChosenRef, "posPitchInChosenRef", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->posRollInChosenRef, "posRollInChosenRef", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->distanceToCollision, "distanceToCollision", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->azimuthInSensor, "azimuthInSensor", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->elevationInSensor, "elevationInSensor", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->azimuthInVehicle, "azimuthInVehicle", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->elevationInVehicle, "elevationInVehicle", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteSpeedX, "absoluteSpeedX", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteSpeedY, "absoluteSpeedY", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteSpeedZ, "absoluteSpeedZ", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteAngularSpeedH, "absoluteAngularSpeedH", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteAngularSpeedP, "absoluteAngularSpeedP", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteAngularSpeedR, "absoluteAngularSpeedR", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeSpeedX, "relativeSpeedX", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeSpeedY, "relativeSpeedY", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeSpeedZ, "relativeSpeedZ", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeAngularSpeedH, "relativeAngularSpeedH", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeAngularSpeedP, "relativeAngularSpeedP", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeAngularSpeedR, "relativeAngularSpeedR", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteAccelX, "absoluteAccelX", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteAccelY, "absoluteAccelY", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->absoluteAccelZ, "absoluteAccelZ", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeAccelX, "relativeAccelX", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeAccelY, "relativeAccelY", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->relativeAccelZ, "relativeAccelZ", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->length, "length", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->width, "width", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->height, "height", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->visibility, "visibility", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_SensorMovableTarget_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_SensorMovableTarget_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_SensorMovableTarget_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_SensorMovableTarget_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_SensorMovableTarget_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_SensorMovableTarget_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_SensorMovableTarget_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *sample,
    void *handle)
{

    IndyDS_SensorMovableTarget_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_SensorMovableTarget_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *dst,
    const IndyDS_SensorMovableTarget_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_SensorMovableTarget_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_SensorMovableTarget_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTarget_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeShort(
            stream, &sample->id)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->scanerId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->detectionStatus)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->type_)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->beamIndex)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->existenceTime)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->anchorPoint)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->referenceFrame)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->posXInChosenRef)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->posYInChosenRef)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->posZInChosenRef)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->posHeadingInChosenRef)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->posPitchInChosenRef)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->posRollInChosenRef)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->distanceToCollision)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->azimuthInSensor)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->elevationInSensor)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->azimuthInVehicle)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->elevationInVehicle)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteSpeedX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteSpeedY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteSpeedZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteAngularSpeedH)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteAngularSpeedP)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteAngularSpeedR)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeSpeedX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeSpeedY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeSpeedZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeAngularSpeedH)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeAngularSpeedP)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeAngularSpeedR)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteAccelX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteAccelY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->absoluteAccelZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeAccelX)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeAccelY)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->relativeAccelZ)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->length)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->width)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->height)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeFloat(
            stream, &sample->visibility)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_SensorMovableTarget_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_SensorMovableTarget_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeShort(
            stream, &sample->id)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->scanerId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->detectionStatus)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->type_)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->beamIndex)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->existenceTime)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->anchorPoint)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->referenceFrame)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->posXInChosenRef)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->posYInChosenRef)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->posZInChosenRef)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->posHeadingInChosenRef)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->posPitchInChosenRef)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->posRollInChosenRef)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->distanceToCollision)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->azimuthInSensor)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->elevationInSensor)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->azimuthInVehicle)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->elevationInVehicle)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteSpeedX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteSpeedY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteSpeedZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteAngularSpeedH)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteAngularSpeedP)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteAngularSpeedR)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeSpeedX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeSpeedY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeSpeedZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeAngularSpeedH)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeAngularSpeedP)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeAngularSpeedR)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteAccelX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteAccelY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->absoluteAccelZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeAccelX)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeAccelY)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->relativeAccelZ)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->length)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->width)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->height)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeFloat(
            stream, &sample->visibility)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_SensorMovableTarget_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorMovableTarget_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_SensorMovableTarget_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_SensorMovableTarget_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorMovableTarget_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_SensorMovableTarget_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_SensorMovableTarget_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_SensorMovableTarget_cPlugin_data_to_string(
    const IndyDS_SensorMovableTarget_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_SensorMovableTarget_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_SensorMovableTarget_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_SensorMovableTarget_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_SensorMovableTarget_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_SensorMovableTarget_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorMovableTarget_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_SensorMovableTarget_c");

    }

    return result;

}

RTIBool IndyDS_SensorMovableTarget_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorMovableTarget_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_SensorMovableTarget_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_SensorMovableTarget_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTarget_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_SensorMovableTarget_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_SensorMovableTarget_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_SensorMovableTarget_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_SensorMovableTarget_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorMovableTarget_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_SensorMovableTarget_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_SensorMovableTarget_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorMovableTarget_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_SensorMovableTarget_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_SensorMovableTarget_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_SensorMovableTarget_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_SensorMovableTarget_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_SensorMovableTarget_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_SensorMovableTarget_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_SensorMovableTarget_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_SensorMovableTarget_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_SensorMovableTarget_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_SensorMovableTarget_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_SensorMovableTarget_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_SensorMovableTarget_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_SensorMovableTarget_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_SensorMovableTarget_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_SensorMovableTarget_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_SensorMovableTarget_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_SensorMovableTarget_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_SensorMovableTarget_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_SensorMovableTarget_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_SensorMovableTarget_cTYPENAME;

    return plugin;
}

void
IndyDS_SensorMovableTarget_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_SensorMovableTargets_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_SensorMovableTargets_c*
IndyDS_SensorMovableTargets_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_SensorMovableTargets_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorMovableTargets_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorMovableTargets_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_SensorMovableTargets_c *
IndyDS_SensorMovableTargets_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_SensorMovableTargets_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_SensorMovableTargets_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_SensorMovableTargets_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_SensorMovableTargets_c *
IndyDS_SensorMovableTargets_cPluginSupport_create_data(void)
{
    return IndyDS_SensorMovableTargets_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_SensorMovableTargets_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorMovableTargets_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_SensorMovableTargets_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorMovableTargets_cPluginSupport_destroy_data_ex(
    IndyDS_SensorMovableTargets_c *sample,RTIBool deallocate_pointers) {

    IndyDS_SensorMovableTargets_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_SensorMovableTargets_cPluginSupport_destroy_data(
    IndyDS_SensorMovableTargets_c *sample) {

    IndyDS_SensorMovableTargets_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_SensorMovableTargets_cPluginSupport_copy_data(
    IndyDS_SensorMovableTargets_c *dst,
    const IndyDS_SensorMovableTargets_c *src)
{
    return IndyDS_SensorMovableTargets_c_copy(dst,(const IndyDS_SensorMovableTargets_c*) src);
}

void 
IndyDS_SensorMovableTargets_cPluginSupport_print_data(
    const IndyDS_SensorMovableTargets_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printShort(
        &sample->egoVhlId, "egoVhlId", indent_level + 1);    

    RTICdrType_printLong(
        &sample->globalId, "globalId", indent_level + 1);    

    RTICdrType_printShort(
        &sample->nearestTarget, "nearestTarget", indent_level + 1);    

    if (IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray) != NULL) {
        RTICdrType_printArray(
            IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray), 
            IndyDS_SensorMovableTarget_cSeq_get_length(&sample->targetsArray),
            sizeof(IndyDS_SensorMovableTarget_c),
            (RTICdrTypePrintFunction)IndyDS_SensorMovableTarget_cPluginSupport_print_data,
            "targetsArray", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            IndyDS_SensorMovableTarget_cSeq_get_discontiguous_bufferI(&sample->targetsArray), 
            IndyDS_SensorMovableTarget_cSeq_get_length(&sample->targetsArray),
            (RTICdrTypePrintFunction)IndyDS_SensorMovableTarget_cPluginSupport_print_data,
            "targetsArray", indent_level + 1);
    }

    RTICdrType_printDouble(
        &sample->timeOfUpdate, "timeOfUpdate", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_SensorMovableTargets_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_SensorMovableTargets_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_SensorMovableTargets_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_SensorMovableTargets_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_SensorMovableTargets_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_SensorMovableTargets_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_SensorMovableTargets_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *sample,
    void *handle)
{

    IndyDS_SensorMovableTargets_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_SensorMovableTargets_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *dst,
    const IndyDS_SensorMovableTargets_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_SensorMovableTargets_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_SensorMovableTargets_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargets_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeShort(
            stream, &sample->egoVhlId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->globalId)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->nearestTarget)) {
            return RTI_FALSE;
        }

        if (IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray),
                IndyDS_SensorMovableTarget_cSeq_get_length(&sample->targetsArray),
                (30),
                sizeof(IndyDS_SensorMovableTarget_c),
                (RTICdrStreamSerializeFunction)IndyDS_SensorMovableTarget_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) IndyDS_SensorMovableTarget_cSeq_get_discontiguous_bufferI(&sample->targetsArray),
                IndyDS_SensorMovableTarget_cSeq_get_length(&sample->targetsArray),
                (30),
                (RTICdrStreamSerializeFunction)IndyDS_SensorMovableTarget_cPlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->timeOfUpdate)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_SensorMovableTargets_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_SensorMovableTargets_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeShort(
            stream, &sample->egoVhlId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->globalId)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->nearestTarget)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray),
                    &sequence_length,
                    IndyDS_SensorMovableTarget_cSeq_get_maximum(&sample->targetsArray),
                    sizeof(IndyDS_SensorMovableTarget_c),
                    (RTICdrStreamDeserializeFunction)IndyDS_SensorMovableTarget_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) IndyDS_SensorMovableTarget_cSeq_get_discontiguous_bufferI(&sample->targetsArray),
                    &sequence_length,
                    IndyDS_SensorMovableTarget_cSeq_get_maximum(&sample->targetsArray),
                    (RTICdrStreamDeserializeFunction)IndyDS_SensorMovableTarget_cPlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!IndyDS_SensorMovableTarget_cSeq_set_length(
                &sample->targetsArray,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->timeOfUpdate)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_SensorMovableTargets_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorMovableTargets_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_SensorMovableTargets_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_SensorMovableTargets_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorMovableTargets_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_SensorMovableTargets_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_SensorMovableTargets_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_SensorMovableTargets_cPlugin_data_to_string(
    const IndyDS_SensorMovableTargets_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_SensorMovableTargets_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_SensorMovableTargets_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_SensorMovableTargets_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_SensorMovableTargets_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_SensorMovableTargets_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorMovableTargets_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_SensorMovableTargets_c");

    }

    return result;

}

RTIBool IndyDS_SensorMovableTargets_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(IndyDS_SensorMovableTarget_c),
                (RTICdrStreamSkipFunction)IndyDS_SensorMovableTarget_cPlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (30),
        IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorMovableTargets_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_get4ByteMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray) != NULL) {
        current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
            current_alignment, IndyDS_SensorMovableTarget_cSeq_get_length(&sample->targetsArray),
            sizeof(IndyDS_SensorMovableTarget_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            IndyDS_SensorMovableTarget_cSeq_get_contiguous_bufferI(&sample->targetsArray),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerArraySerializedSize(
            current_alignment,  
            IndyDS_SensorMovableTarget_cSeq_get_length(&sample->targetsArray),
            sizeof(IndyDS_SensorMovableTarget_c),
            (RTICdrTypeGetSerializedSampleSizeFunction)IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)IndyDS_SensorMovableTarget_cSeq_get_discontiguous_bufferI(&sample->targetsArray),
            endpoint_data);
    }

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_SensorMovableTargets_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_SensorMovableTargets_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargets_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_SensorMovableTargets_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_SensorMovableTargets_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_SensorMovableTargets_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_SensorMovableTargets_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_SensorMovableTargets_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_SensorMovableTargets_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_SensorMovableTargets_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_SensorMovableTargets_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_SensorMovableTargets_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_SensorMovableTargets_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_SensorMovableTargets_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_SensorMovableTargets_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_SensorMovableTargets_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_SensorMovableTargets_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_SensorMovableTargets_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_SensorMovableTargets_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_SensorMovableTargets_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_SensorMovableTargets_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_SensorMovableTargets_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_SensorMovableTargets_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_SensorMovableTargets_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_SensorMovableTargets_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_SensorMovableTargets_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_SensorMovableTargets_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_SensorMovableTargets_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_SensorMovableTargets_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_SensorMovableTargets_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_SensorMovableTargets_cTYPENAME;

    return plugin;
}

void
IndyDS_SensorMovableTargets_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_CabToModelCorrective_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_CabToModelCorrective_c*
IndyDS_CabToModelCorrective_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_CabToModelCorrective_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_CabToModelCorrective_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_CabToModelCorrective_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_CabToModelCorrective_c *
IndyDS_CabToModelCorrective_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_CabToModelCorrective_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_CabToModelCorrective_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_CabToModelCorrective_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_CabToModelCorrective_c *
IndyDS_CabToModelCorrective_cPluginSupport_create_data(void)
{
    return IndyDS_CabToModelCorrective_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_CabToModelCorrective_cPluginSupport_destroy_data_w_params(
    IndyDS_CabToModelCorrective_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_CabToModelCorrective_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_CabToModelCorrective_cPluginSupport_destroy_data_ex(
    IndyDS_CabToModelCorrective_c *sample,RTIBool deallocate_pointers) {

    IndyDS_CabToModelCorrective_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_CabToModelCorrective_cPluginSupport_destroy_data(
    IndyDS_CabToModelCorrective_c *sample) {

    IndyDS_CabToModelCorrective_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_CabToModelCorrective_cPluginSupport_copy_data(
    IndyDS_CabToModelCorrective_c *dst,
    const IndyDS_CabToModelCorrective_c *src)
{
    return IndyDS_CabToModelCorrective_c_copy(dst,(const IndyDS_CabToModelCorrective_c*) src);
}

void 
IndyDS_CabToModelCorrective_cPluginSupport_print_data(
    const IndyDS_CabToModelCorrective_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printDouble(
        &sample->AcceleratorAdditive, "AcceleratorAdditive", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->AcceleratorMultiplicative, "AcceleratorMultiplicative", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->BrakeAdditive, "BrakeAdditive", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->BrakeMultiplicative, "BrakeMultiplicative", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->ClutchAdditive, "ClutchAdditive", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->ClutchMultiplicative, "ClutchMultiplicative", indent_level + 1);    

    RTICdrType_printShort(
        &sample->GearboxAutoMode, "GearboxAutoMode", indent_level + 1);    

    RTICdrType_printOctet(
        &sample->GearboxTakeOver, "GearboxTakeOver", indent_level + 1);    

    RTICdrType_printOctet(
        &sample->IsRatioLimit, "IsRatioLimit", indent_level + 1);    

    RTICdrType_printShort(
        &sample->MaxRatio, "MaxRatio", indent_level + 1);    

    RTICdrType_printShort(
        &sample->MinRatio, "MinRatio", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->ParkingBrakeAdditive, "ParkingBrakeAdditive", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->ParkingBrakeMultiplicative, "ParkingBrakeMultiplicative", indent_level + 1);    

    RTICdrType_printOctet(
        &sample->ShiftDown, "ShiftDown", indent_level + 1);    

    RTICdrType_printOctet(
        &sample->ShiftUp, "ShiftUp", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->TimeOfUpdate, "TimeOfUpdate", indent_level + 1);    

    RTICdrType_printShort(
        &sample->WantedGear, "WantedGear", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_CabToModelCorrective_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_CabToModelCorrective_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_CabToModelCorrective_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_CabToModelCorrective_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_CabToModelCorrective_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_CabToModelCorrective_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_CabToModelCorrective_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *sample,
    void *handle)
{

    IndyDS_CabToModelCorrective_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_CabToModelCorrective_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *dst,
    const IndyDS_CabToModelCorrective_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_CabToModelCorrective_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_CabToModelCorrective_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToModelCorrective_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeDouble(
            stream, &sample->AcceleratorAdditive)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->AcceleratorMultiplicative)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->BrakeAdditive)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->BrakeMultiplicative)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->ClutchAdditive)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->ClutchMultiplicative)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->GearboxAutoMode)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->GearboxTakeOver)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->IsRatioLimit)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->MaxRatio)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->MinRatio)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->ParkingBrakeAdditive)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->ParkingBrakeMultiplicative)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->ShiftDown)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->ShiftUp)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->TimeOfUpdate)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeShort(
            stream, &sample->WantedGear)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_CabToModelCorrective_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_CabToModelCorrective_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->AcceleratorAdditive)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->AcceleratorMultiplicative)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->BrakeAdditive)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->BrakeMultiplicative)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->ClutchAdditive)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->ClutchMultiplicative)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->GearboxAutoMode)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeOctet(
            stream, &sample->GearboxTakeOver)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeOctet(
            stream, &sample->IsRatioLimit)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->MaxRatio)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->MinRatio)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->ParkingBrakeAdditive)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->ParkingBrakeMultiplicative)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeOctet(
            stream, &sample->ShiftDown)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeOctet(
            stream, &sample->ShiftUp)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->TimeOfUpdate)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeShort(
            stream, &sample->WantedGear)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_CabToModelCorrective_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_CabToModelCorrective_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_CabToModelCorrective_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_CabToModelCorrective_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_CabToModelCorrective_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_CabToModelCorrective_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_CabToModelCorrective_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_CabToModelCorrective_cPlugin_data_to_string(
    const IndyDS_CabToModelCorrective_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_CabToModelCorrective_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_CabToModelCorrective_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_CabToModelCorrective_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_CabToModelCorrective_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_CabToModelCorrective_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_CabToModelCorrective_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_CabToModelCorrective_c");

    }

    return result;

}

RTIBool IndyDS_CabToModelCorrective_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipShort (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getShortMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_CabToModelCorrective_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getShortMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_CabToModelCorrective_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_CabToModelCorrective_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToModelCorrective_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_CabToModelCorrective_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_CabToModelCorrective_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_CabToModelCorrective_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_CabToModelCorrective_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_CabToModelCorrective_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_CabToModelCorrective_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_CabToModelCorrective_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_CabToModelCorrective_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_CabToModelCorrective_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_CabToModelCorrective_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_CabToModelCorrective_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_CabToModelCorrective_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_CabToModelCorrective_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_CabToModelCorrective_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_CabToModelCorrective_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_CabToModelCorrective_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_CabToModelCorrective_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_CabToModelCorrective_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_CabToModelCorrective_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_CabToModelCorrective_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_CabToModelCorrective_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_CabToModelCorrective_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_CabToModelCorrective_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_CabToModelCorrective_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_CabToModelCorrective_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_CabToModelCorrective_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_CabToModelCorrective_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_CabToModelCorrective_cTYPENAME;

    return plugin;
}

void
IndyDS_CabToModelCorrective_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_CabToSteeringCorrective_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_CabToSteeringCorrective_c*
IndyDS_CabToSteeringCorrective_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_CabToSteeringCorrective_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_CabToSteeringCorrective_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_CabToSteeringCorrective_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_CabToSteeringCorrective_c *
IndyDS_CabToSteeringCorrective_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_CabToSteeringCorrective_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_CabToSteeringCorrective_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_CabToSteeringCorrective_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_CabToSteeringCorrective_c *
IndyDS_CabToSteeringCorrective_cPluginSupport_create_data(void)
{
    return IndyDS_CabToSteeringCorrective_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data_w_params(
    IndyDS_CabToSteeringCorrective_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_CabToSteeringCorrective_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data_ex(
    IndyDS_CabToSteeringCorrective_c *sample,RTIBool deallocate_pointers) {

    IndyDS_CabToSteeringCorrective_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data(
    IndyDS_CabToSteeringCorrective_c *sample) {

    IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_CabToSteeringCorrective_cPluginSupport_copy_data(
    IndyDS_CabToSteeringCorrective_c *dst,
    const IndyDS_CabToSteeringCorrective_c *src)
{
    return IndyDS_CabToSteeringCorrective_c_copy(dst,(const IndyDS_CabToSteeringCorrective_c*) src);
}

void 
IndyDS_CabToSteeringCorrective_cPluginSupport_print_data(
    const IndyDS_CabToSteeringCorrective_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printDouble(
        &sample->AdditiveSteeringWheelAccel, "AdditiveSteeringWheelAccel", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->AdditiveSteeringWheelAngle, "AdditiveSteeringWheelAngle", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->AdditiveSteeringWheelSpeed, "AdditiveSteeringWheelSpeed", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->AdditiveSteeringWheelTorque, "AdditiveSteeringWheelTorque", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->MultiplicativeSteeringWheelAccel, "MultiplicativeSteeringWheelAccel", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->MultiplicativeSteeringWheelAngle, "MultiplicativeSteeringWheelAngle", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->MultiplicativeSteeringWheelSpeed, "MultiplicativeSteeringWheelSpeed", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->MultiplicativeSteeringWheelTorque, "MultiplicativeSteeringWheelTorque", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->TimeOfUpdate, "TimeOfUpdate", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_CabToSteeringCorrective_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_CabToSteeringCorrective_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_CabToSteeringCorrective_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_CabToSteeringCorrective_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_CabToSteeringCorrective_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_CabToSteeringCorrective_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *sample,
    void *handle)
{

    IndyDS_CabToSteeringCorrective_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *dst,
    const IndyDS_CabToSteeringCorrective_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_CabToSteeringCorrective_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToSteeringCorrective_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeDouble(
            stream, &sample->AdditiveSteeringWheelAccel)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->AdditiveSteeringWheelAngle)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->AdditiveSteeringWheelSpeed)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->AdditiveSteeringWheelTorque)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->MultiplicativeSteeringWheelAccel)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->MultiplicativeSteeringWheelAngle)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->MultiplicativeSteeringWheelSpeed)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->MultiplicativeSteeringWheelTorque)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->TimeOfUpdate)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_CabToSteeringCorrective_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->AdditiveSteeringWheelAccel)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->AdditiveSteeringWheelAngle)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->AdditiveSteeringWheelSpeed)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->AdditiveSteeringWheelTorque)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->MultiplicativeSteeringWheelAccel)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->MultiplicativeSteeringWheelAngle)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->MultiplicativeSteeringWheelSpeed)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->MultiplicativeSteeringWheelTorque)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->TimeOfUpdate)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_CabToSteeringCorrective_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_CabToSteeringCorrective_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_CabToSteeringCorrective_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_CabToSteeringCorrective_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_CabToSteeringCorrective_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_CabToSteeringCorrective_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_CabToSteeringCorrective_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_CabToSteeringCorrective_cPlugin_data_to_string(
    const IndyDS_CabToSteeringCorrective_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_CabToSteeringCorrective_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_CabToSteeringCorrective_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_CabToSteeringCorrective_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_CabToSteeringCorrective_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_CabToSteeringCorrective_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_CabToSteeringCorrective_c");

    }

    return result;

}

RTIBool IndyDS_CabToSteeringCorrective_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_CabToSteeringCorrective_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_CabToSteeringCorrective_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToSteeringCorrective_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_CabToSteeringCorrective_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_CabToSteeringCorrective_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_CabToSteeringCorrective_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_CabToSteeringCorrective_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_CabToSteeringCorrective_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_CabToSteeringCorrective_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_CabToSteeringCorrective_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_CabToSteeringCorrective_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_CabToSteeringCorrective_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_CabToSteeringCorrective_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_CabToSteeringCorrective_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_CabToSteeringCorrective_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_CabToSteeringCorrective_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_CabToSteeringCorrective_cTYPENAME;

    return plugin;
}

void
IndyDS_CabToSteeringCorrective_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type IndyDS_VehicleOutput_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

IndyDS_VehicleOutput_c*
IndyDS_VehicleOutput_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    IndyDS_VehicleOutput_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_VehicleOutput_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!IndyDS_VehicleOutput_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample; 
} 

IndyDS_VehicleOutput_c *
IndyDS_VehicleOutput_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    IndyDS_VehicleOutput_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),IndyDS_VehicleOutput_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!IndyDS_VehicleOutput_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample; 
}

IndyDS_VehicleOutput_c *
IndyDS_VehicleOutput_cPluginSupport_create_data(void)
{
    return IndyDS_VehicleOutput_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
IndyDS_VehicleOutput_cPluginSupport_destroy_data_w_params(
    IndyDS_VehicleOutput_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    IndyDS_VehicleOutput_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_VehicleOutput_cPluginSupport_destroy_data_ex(
    IndyDS_VehicleOutput_c *sample,RTIBool deallocate_pointers) {

    IndyDS_VehicleOutput_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
IndyDS_VehicleOutput_cPluginSupport_destroy_data(
    IndyDS_VehicleOutput_c *sample) {

    IndyDS_VehicleOutput_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
IndyDS_VehicleOutput_cPluginSupport_copy_data(
    IndyDS_VehicleOutput_c *dst,
    const IndyDS_VehicleOutput_c *src)
{
    return IndyDS_VehicleOutput_c_copy(dst,(const IndyDS_VehicleOutput_c*) src);
}

void 
IndyDS_VehicleOutput_cPluginSupport_print_data(
    const IndyDS_VehicleOutput_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printArray(
        sample->CustomOutput, (512), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "CustomOutput", indent_level + 1);        

    RTICdrType_printDouble(
        &sample->EngineSpeed, "EngineSpeed", indent_level + 1);    

    RTICdrType_printOctet(
        &sample->EngineState, "EngineState", indent_level + 1);    

    RTICdrType_printLong(
        &sample->GearBoxMode, "GearBoxMode", indent_level + 1);    

    RTICdrType_printLong(
        &sample->GearEngaged, "GearEngaged", indent_level + 1);    

    RTICdrType_printArray(
        sample->GroundIndex, (4), RTI_CDR_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printLong, 
        "GroundIndex", indent_level + 1);        

    RTICdrType_printArray(
        sample->LSR, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "LSR", indent_level + 1);        

    RTICdrType_printDouble(
        &sample->SteeringWheelAccel, "SteeringWheelAccel", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->SteeringWheelAngle, "SteeringWheelAngle", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->SteeringWheelSpeed, "SteeringWheelSpeed", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->SteeringWheelTorque, "SteeringWheelTorque", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->TimeOfUpdate, "TimeOfUpdate", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->TraveledDistance, "TraveledDistance", indent_level + 1);    

    RTICdrType_printArray(
        sample->absIsActive, (4), RTI_CDR_OCTET_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printOctet, 
        "absIsActive", indent_level + 1);        

    RTICdrType_printLong(
        &sample->auxiliaryLights, "auxiliaryLights", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->brakePedal, "brakePedal", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->brakeRetarderNotch, "brakeRetarderNotch", indent_level + 1);    

    RTICdrType_printArray(
        sample->brakeTemperature, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "brakeTemperature", indent_level + 1);        

    RTICdrType_printDouble(
        &sample->cdgAccel_heading, "cdgAccel_heading", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgAccel_pitch, "cdgAccel_pitch", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgAccel_roll, "cdgAccel_roll", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgAccel_x, "cdgAccel_x", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgAccel_y, "cdgAccel_y", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgAccel_z, "cdgAccel_z", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgPos_heading, "cdgPos_heading", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgPos_pitch, "cdgPos_pitch", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgPos_roll, "cdgPos_roll", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgPos_x, "cdgPos_x", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgPos_y, "cdgPos_y", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgPos_z, "cdgPos_z", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgSpeed_heading, "cdgSpeed_heading", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgSpeed_pitch, "cdgSpeed_pitch", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgSpeed_roll, "cdgSpeed_roll", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgSpeed_x, "cdgSpeed_x", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgSpeed_y, "cdgSpeed_y", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->cdgSpeed_z, "cdgSpeed_z", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->clutchPedal, "clutchPedal", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->consumption, "consumption", indent_level + 1);    

    RTICdrType_printArray(
        sample->contactPoint_x, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "contactPoint_x", indent_level + 1);        

    RTICdrType_printArray(
        sample->contactPoint_y, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "contactPoint_y", indent_level + 1);        

    RTICdrType_printArray(
        sample->contactPoint_z, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "contactPoint_z", indent_level + 1);        

    RTICdrType_printLong(
        &sample->effectiveIgnitionKeyPosition, "effectiveIgnitionKeyPosition", indent_level + 1);    

    RTICdrType_printOctet(
        &sample->forceLockup, "forceLockup", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->gasPedal, "gasPedal", indent_level + 1);    

    RTICdrType_printArray(
        sample->grip, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "grip", indent_level + 1);        

    RTICdrType_printArray(
        sample->groundNormal_x, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "groundNormal_x", indent_level + 1);        

    RTICdrType_printArray(
        sample->groundNormal_y, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "groundNormal_y", indent_level + 1);        

    RTICdrType_printArray(
        sample->groundNormal_z, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "groundNormal_z", indent_level + 1);        

    RTICdrType_printArray(
        sample->groundType, (4), RTI_CDR_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printLong, 
        "groundType", indent_level + 1);        

    RTICdrType_printDouble(
        &sample->handBrake, "handBrake", indent_level + 1);    

    RTICdrType_printArray(
        sample->hubPosition_heading, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "hubPosition_heading", indent_level + 1);        

    RTICdrType_printArray(
        sample->hubPosition_pitch, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "hubPosition_pitch", indent_level + 1);        

    RTICdrType_printArray(
        sample->hubPosition_roll, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "hubPosition_roll", indent_level + 1);        

    RTICdrType_printArray(
        sample->hubPosition_x, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "hubPosition_x", indent_level + 1);        

    RTICdrType_printArray(
        sample->hubPosition_y, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "hubPosition_y", indent_level + 1);        

    RTICdrType_printArray(
        sample->hubPosition_z, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "hubPosition_z", indent_level + 1);        

    RTICdrType_printOctet(
        &sample->isEngineRetarder, "isEngineRetarder", indent_level + 1);    

    RTICdrType_printArray(
        sample->isInContact, (4), RTI_CDR_OCTET_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printOctet, 
        "isInContact", indent_level + 1);        

    RTICdrType_printArray(
        sample->laneType, (4), RTI_CDR_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printLong, 
        "laneType", indent_level + 1);        

    RTICdrType_printLong(
        &sample->lights, "lights", indent_level + 1);    

    RTICdrType_printLong(
        &sample->lockDiffMode, "lockDiffMode", indent_level + 1);    

    RTICdrType_printLong(
        &sample->plowMode, "plowMode", indent_level + 1);    

    RTICdrType_printDouble(
        &sample->pollution, "pollution", indent_level + 1);    

    RTICdrType_printArray(
        sample->roughnessHeight, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "roughnessHeight", indent_level + 1);        

    RTICdrType_printArray(
        sample->roughnessHeightStdDeviation, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "roughnessHeightStdDeviation", indent_level + 1);        

    RTICdrType_printArray(
        sample->roughnessLength, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "roughnessLength", indent_level + 1);        

    RTICdrType_printArray(
        sample->roughnessLengthStdDeviation, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "roughnessLengthStdDeviation", indent_level + 1);        

    RTICdrType_printLong(
        &sample->sirens, "sirens", indent_level + 1);    

    RTICdrType_printArray(
        sample->slipAngle, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "slipAngle", indent_level + 1);        

    RTICdrType_printArray(
        sample->tireForce_x, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "tireForce_x", indent_level + 1);        

    RTICdrType_printArray(
        sample->tireForce_y, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "tireForce_y", indent_level + 1);        

    RTICdrType_printArray(
        sample->tireForce_z, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "tireForce_z", indent_level + 1);        

    RTICdrType_printDouble(
        &sample->trailerBrake, "trailerBrake", indent_level + 1);    

    RTICdrType_printLong(
        &sample->transferChoice, "transferChoice", indent_level + 1);    

    RTICdrType_printArray(
        sample->waterHeight, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "waterHeight", indent_level + 1);        

    RTICdrType_printArray(
        sample->wheelRotation, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "wheelRotation", indent_level + 1);        

    RTICdrType_printArray(
        sample->wheelRotationSpeed, (4), RTI_CDR_DOUBLE_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printDouble, 
        "wheelRotationSpeed", indent_level + 1);        

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
IndyDS_VehicleOutput_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
IndyDS_VehicleOutput_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
IndyDS_VehicleOutput_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        IndyDS_VehicleOutput_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        IndyDS_VehicleOutput_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            IndyDS_VehicleOutput_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
IndyDS_VehicleOutput_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
IndyDS_VehicleOutput_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *sample,
    void *handle)
{

    IndyDS_VehicleOutput_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
IndyDS_VehicleOutput_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *dst,
    const IndyDS_VehicleOutput_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return IndyDS_VehicleOutput_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
IndyDS_VehicleOutput_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_VehicleOutput_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->CustomOutput, (512), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->EngineSpeed)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->EngineState)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->GearBoxMode)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->GearEngaged)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->GroundIndex, (4), RTI_CDR_LONG_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->LSR, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->SteeringWheelAccel)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->SteeringWheelAngle)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->SteeringWheelSpeed)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->SteeringWheelTorque)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->TimeOfUpdate)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->TraveledDistance)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->absIsActive, (4), RTI_CDR_OCTET_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->auxiliaryLights)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->brakePedal)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->brakeRetarderNotch)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->brakeTemperature, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgAccel_heading)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgAccel_pitch)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgAccel_roll)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgAccel_x)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgAccel_y)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgAccel_z)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgPos_heading)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgPos_pitch)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgPos_roll)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgPos_x)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgPos_y)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgPos_z)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgSpeed_heading)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgSpeed_pitch)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgSpeed_roll)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgSpeed_x)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgSpeed_y)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->cdgSpeed_z)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->clutchPedal)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->consumption)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->contactPoint_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->contactPoint_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->contactPoint_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->effectiveIgnitionKeyPosition)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->forceLockup)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->gasPedal)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->grip, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->groundNormal_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->groundNormal_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->groundNormal_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->groundType, (4), RTI_CDR_LONG_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->handBrake)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->hubPosition_heading, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->hubPosition_pitch, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->hubPosition_roll, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->hubPosition_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->hubPosition_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->hubPosition_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeOctet(
            stream, &sample->isEngineRetarder)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->isInContact, (4), RTI_CDR_OCTET_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->laneType, (4), RTI_CDR_LONG_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->lights)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->lockDiffMode)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->plowMode)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->pollution)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->roughnessHeight, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->roughnessHeightStdDeviation, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->roughnessLength, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->roughnessLengthStdDeviation, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->sirens)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->slipAngle, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->tireForce_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->tireForce_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->tireForce_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeDouble(
            stream, &sample->trailerBrake)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->transferChoice)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->waterHeight, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->wheelRotation, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->wheelRotationSpeed, (4), RTI_CDR_DOUBLE_TYPE)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
IndyDS_VehicleOutput_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        IndyDS_VehicleOutput_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->CustomOutput, (512), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->EngineSpeed)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeOctet(
            stream, &sample->EngineState)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->GearBoxMode)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->GearEngaged)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->GroundIndex, (4), RTI_CDR_LONG_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->LSR, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->SteeringWheelAccel)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->SteeringWheelAngle)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->SteeringWheelSpeed)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->SteeringWheelTorque)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->TimeOfUpdate)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->TraveledDistance)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->absIsActive, (4), RTI_CDR_OCTET_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeLong(
            stream, &sample->auxiliaryLights)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->brakePedal)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->brakeRetarderNotch)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->brakeTemperature, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgAccel_heading)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgAccel_pitch)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgAccel_roll)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgAccel_x)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgAccel_y)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgAccel_z)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgPos_heading)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgPos_pitch)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgPos_roll)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgPos_x)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgPos_y)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgPos_z)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgSpeed_heading)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgSpeed_pitch)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgSpeed_roll)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgSpeed_x)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgSpeed_y)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->cdgSpeed_z)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->clutchPedal)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->consumption)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->contactPoint_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->contactPoint_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->contactPoint_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeLong(
            stream, &sample->effectiveIgnitionKeyPosition)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeOctet(
            stream, &sample->forceLockup)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->gasPedal)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->grip, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->groundNormal_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->groundNormal_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->groundNormal_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->groundType, (4), RTI_CDR_LONG_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->handBrake)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->hubPosition_heading, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->hubPosition_pitch, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->hubPosition_roll, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->hubPosition_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->hubPosition_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->hubPosition_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeOctet(
            stream, &sample->isEngineRetarder)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->isInContact, (4), RTI_CDR_OCTET_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->laneType, (4), RTI_CDR_LONG_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeLong(
            stream, &sample->lights)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->lockDiffMode)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->plowMode)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeDouble(
            stream, &sample->pollution)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->roughnessHeight, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->roughnessHeightStdDeviation, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->roughnessLength, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->roughnessLengthStdDeviation, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeLong(
            stream, &sample->sirens)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->slipAngle, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->tireForce_x, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->tireForce_y, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->tireForce_z, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializeDouble(
            stream, &sample->trailerBrake)) {
            goto fin; 
        }
        if (!RTICdrStream_deserializeLong(
            stream, &sample->transferChoice)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->waterHeight, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->wheelRotation, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->wheelRotationSpeed, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
IndyDS_VehicleOutput_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_VehicleOutput_c *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        IndyDS_VehicleOutput_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = IndyDS_VehicleOutput_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
IndyDS_VehicleOutput_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_VehicleOutput_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    IndyDS_VehicleOutput_c_finalize_optional_members(sample, RTI_TRUE);
    return IndyDS_VehicleOutput_cPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
IndyDS_VehicleOutput_cPlugin_data_to_string(
    const IndyDS_VehicleOutput_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!IndyDS_VehicleOutput_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!IndyDS_VehicleOutput_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        IndyDS_VehicleOutput_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
IndyDS_VehicleOutput_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "IndyDS_VehicleOutput_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_VehicleOutput_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "IndyDS_VehicleOutput_c");

    }

    return result;

}

RTIBool IndyDS_VehicleOutput_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipPrimitiveArray(
            stream, (512), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_LONG_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_OCTET_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_LONG_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipOctet (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_OCTET_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_LONG_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipDouble (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, (4), RTI_CDR_DOUBLE_TYPE)) {
            goto fin; 
        }      
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (512),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_LONG_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_OCTET_TYPE);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_LONG_TYPE);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_OCTET_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_LONG_TYPE);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4),  RTI_CDR_DOUBLE_TYPE);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (512), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_LONG_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_OCTET_TYPE);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_LONG_TYPE);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_OCTET_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_LONG_TYPE);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_DOUBLE_TYPE);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_VehicleOutput_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (512), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_LONG_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_OCTET_TYPE);  

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_LONG_TYPE);  

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getOctetMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_OCTET_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_LONG_TYPE);  

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            (4), RTI_CDR_DOUBLE_TYPE);  

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
IndyDS_VehicleOutput_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
IndyDS_VehicleOutput_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_VehicleOutput_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!IndyDS_VehicleOutput_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool IndyDS_VehicleOutput_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!IndyDS_VehicleOutput_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool IndyDS_VehicleOutput_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= IndyDS_VehicleOutput_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
IndyDS_VehicleOutput_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
IndyDS_VehicleOutput_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = IndyDS_VehicleOutput_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
IndyDS_VehicleOutput_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!IndyDS_VehicleOutput_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *IndyDS_VehicleOutput_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    IndyDS_VehicleOutput_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    IndyDS_VehicleOutput_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    IndyDS_VehicleOutput_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    IndyDS_VehicleOutput_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    IndyDS_VehicleOutput_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    IndyDS_VehicleOutput_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    IndyDS_VehicleOutput_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    IndyDS_VehicleOutput_c_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    IndyDS_VehicleOutput_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    IndyDS_VehicleOutput_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    IndyDS_VehicleOutput_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    IndyDS_VehicleOutput_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    IndyDS_VehicleOutput_cPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    IndyDS_VehicleOutput_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)IndyDS_VehicleOutput_c_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    IndyDS_VehicleOutput_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    IndyDS_VehicleOutput_cPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    IndyDS_VehicleOutput_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = IndyDS_VehicleOutput_cTYPENAME;

    return plugin;
}

void
IndyDS_VehicleOutput_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
