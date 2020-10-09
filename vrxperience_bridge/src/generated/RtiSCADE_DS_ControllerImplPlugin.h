

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RtiSCADE_DS_ControllerImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RtiSCADE_DS_ControllerImplPlugin_1459192143_h
#define RtiSCADE_DS_ControllerImplPlugin_1459192143_h

#include "RtiSCADE_DS_ControllerImpl.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define IndyDS_RoadLinePolynom_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_RoadLinePolynom_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_RoadLinePolynom_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_RoadLinePolynom_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_RoadLinePolynom_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_RoadLinePolynom_c*
IndyDS_RoadLinePolynom_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_RoadLinePolynom_c*
IndyDS_RoadLinePolynom_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_RoadLinePolynom_c*
IndyDS_RoadLinePolynom_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPluginSupport_copy_data(
    IndyDS_RoadLinePolynom_c *out,
    const IndyDS_RoadLinePolynom_c *in);

NDDSUSERDllExport extern void 
IndyDS_RoadLinePolynom_cPluginSupport_destroy_data_w_params(
    IndyDS_RoadLinePolynom_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_RoadLinePolynom_cPluginSupport_destroy_data_ex(
    IndyDS_RoadLinePolynom_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_RoadLinePolynom_cPluginSupport_destroy_data(
    IndyDS_RoadLinePolynom_c *sample);

NDDSUSERDllExport extern void 
IndyDS_RoadLinePolynom_cPluginSupport_print_data(
    const IndyDS_RoadLinePolynom_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_RoadLinePolynom_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_RoadLinePolynom_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_RoadLinePolynom_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_RoadLinePolynom_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_RoadLinePolynom_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *out,
    const IndyDS_RoadLinePolynom_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinePolynom_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinePolynom_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_RoadLinePolynom_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinePolynom_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_RoadLinePolynom_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_RoadLinePolynom_cPlugin_data_to_string(
    const IndyDS_RoadLinePolynom_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinePolynom_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_RoadLinePolynom_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_RoadLinePolynom_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_RoadLinePolynom_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinePolynom_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinePolynom_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinePolynom_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinePolynom_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinePolynom_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_RoadLinePolynom_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_RoadLinePolynom_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_RoadLinesPolynoms_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_RoadLinesPolynoms_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_RoadLinesPolynoms_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_RoadLinesPolynoms_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_RoadLinesPolynoms_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_RoadLinesPolynoms_c*
IndyDS_RoadLinesPolynoms_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_RoadLinesPolynoms_c*
IndyDS_RoadLinesPolynoms_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_RoadLinesPolynoms_c*
IndyDS_RoadLinesPolynoms_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPluginSupport_copy_data(
    IndyDS_RoadLinesPolynoms_c *out,
    const IndyDS_RoadLinesPolynoms_c *in);

NDDSUSERDllExport extern void 
IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data_w_params(
    IndyDS_RoadLinesPolynoms_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data_ex(
    IndyDS_RoadLinesPolynoms_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_RoadLinesPolynoms_cPluginSupport_destroy_data(
    IndyDS_RoadLinesPolynoms_c *sample);

NDDSUSERDllExport extern void 
IndyDS_RoadLinesPolynoms_cPluginSupport_print_data(
    const IndyDS_RoadLinesPolynoms_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_RoadLinesPolynoms_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_RoadLinesPolynoms_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_RoadLinesPolynoms_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_RoadLinesPolynoms_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_RoadLinesPolynoms_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *out,
    const IndyDS_RoadLinesPolynoms_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinesPolynoms_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinesPolynoms_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_RoadLinesPolynoms_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinesPolynoms_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_RoadLinesPolynoms_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_RoadLinesPolynoms_cPlugin_data_to_string(
    const IndyDS_RoadLinesPolynoms_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinesPolynoms_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_RoadLinesPolynoms_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_RoadLinesPolynoms_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_RoadLinesPolynoms_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_RoadLinesPolynoms_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_RoadLinesPolynoms_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_RoadLinesPolynoms_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_RoadLinesPolynoms_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_RoadLinesPolynoms_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_RoadLinesPolynoms_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_SensorTargetBBox_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_SensorTargetBBox_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_SensorTargetBBox_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_SensorTargetBBox_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_SensorTargetBBox_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_SensorTargetBBox_c*
IndyDS_SensorTargetBBox_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_SensorTargetBBox_c*
IndyDS_SensorTargetBBox_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_SensorTargetBBox_c*
IndyDS_SensorTargetBBox_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPluginSupport_copy_data(
    IndyDS_SensorTargetBBox_c *out,
    const IndyDS_SensorTargetBBox_c *in);

NDDSUSERDllExport extern void 
IndyDS_SensorTargetBBox_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorTargetBBox_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_SensorTargetBBox_cPluginSupport_destroy_data_ex(
    IndyDS_SensorTargetBBox_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_SensorTargetBBox_cPluginSupport_destroy_data(
    IndyDS_SensorTargetBBox_c *sample);

NDDSUSERDllExport extern void 
IndyDS_SensorTargetBBox_cPluginSupport_print_data(
    const IndyDS_SensorTargetBBox_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_SensorTargetBBox_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_SensorTargetBBox_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_SensorTargetBBox_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_SensorTargetBBox_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_SensorTargetBBox_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *out,
    const IndyDS_SensorTargetBBox_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorTargetBBox_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorTargetBBox_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorTargetBBox_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorTargetBBox_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorTargetBBox_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_SensorTargetBBox_cPlugin_data_to_string(
    const IndyDS_SensorTargetBBox_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_SensorTargetBBox_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_SensorTargetBBox_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorTargetBBox_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_SensorTargetBBox_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorTargetBBox_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorTargetBBox_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorTargetBBox_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorTargetBBox_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorTargetBBox_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_SensorTargetBBox_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_SensorTargetBBox_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_SensorMovableTargetsBoundingBoxes_c*
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_SensorMovableTargetsBoundingBoxes_c*
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_SensorMovableTargetsBoundingBoxes_c*
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_copy_data(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *out,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *in);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data_ex(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_destroy_data(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPluginSupport_print_data(
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *out,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_data_to_string(
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargetsBoundingBoxes_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_GPS_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_GPS_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_GPS_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_GPS_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_GPS_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_GPS_c*
IndyDS_GPS_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_GPS_c*
IndyDS_GPS_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_GPS_c*
IndyDS_GPS_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPluginSupport_copy_data(
    IndyDS_GPS_c *out,
    const IndyDS_GPS_c *in);

NDDSUSERDllExport extern void 
IndyDS_GPS_cPluginSupport_destroy_data_w_params(
    IndyDS_GPS_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_GPS_cPluginSupport_destroy_data_ex(
    IndyDS_GPS_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_GPS_cPluginSupport_destroy_data(
    IndyDS_GPS_c *sample);

NDDSUSERDllExport extern void 
IndyDS_GPS_cPluginSupport_print_data(
    const IndyDS_GPS_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_GPS_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_GPS_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_GPS_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_GPS_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_GPS_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *out,
    const IndyDS_GPS_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_GPS_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_GPS_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_GPS_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_GPS_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_GPS_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_GPS_cPlugin_data_to_string(
    const IndyDS_GPS_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_GPS_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_GPS_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_GPS_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_GPS_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_GPS_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_GPS_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_GPS_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_GPS_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_GPS_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_GPS_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_GPS_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_GPS_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_GPS_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_GPS_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_GPS_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_LaserMeterPoint_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_LaserMeterPoint_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_LaserMeterPoint_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_LaserMeterPoint_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_LaserMeterPoint_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_LaserMeterPoint_c*
IndyDS_LaserMeterPoint_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_LaserMeterPoint_c*
IndyDS_LaserMeterPoint_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_LaserMeterPoint_c*
IndyDS_LaserMeterPoint_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPluginSupport_copy_data(
    IndyDS_LaserMeterPoint_c *out,
    const IndyDS_LaserMeterPoint_c *in);

NDDSUSERDllExport extern void 
IndyDS_LaserMeterPoint_cPluginSupport_destroy_data_w_params(
    IndyDS_LaserMeterPoint_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_LaserMeterPoint_cPluginSupport_destroy_data_ex(
    IndyDS_LaserMeterPoint_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_LaserMeterPoint_cPluginSupport_destroy_data(
    IndyDS_LaserMeterPoint_c *sample);

NDDSUSERDllExport extern void 
IndyDS_LaserMeterPoint_cPluginSupport_print_data(
    const IndyDS_LaserMeterPoint_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_LaserMeterPoint_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_LaserMeterPoint_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_LaserMeterPoint_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_LaserMeterPoint_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_LaserMeterPoint_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *out,
    const IndyDS_LaserMeterPoint_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeterPoint_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeterPoint_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_LaserMeterPoint_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeterPoint_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_LaserMeterPoint_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_LaserMeterPoint_cPlugin_data_to_string(
    const IndyDS_LaserMeterPoint_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeterPoint_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_LaserMeterPoint_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_LaserMeterPoint_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_LaserMeterPoint_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeterPoint_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeterPoint_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeterPoint_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeterPoint_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeterPoint_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_LaserMeterPoint_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_LaserMeterPoint_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_LaserMeter_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_LaserMeter_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_LaserMeter_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_LaserMeter_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_LaserMeter_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_LaserMeter_c*
IndyDS_LaserMeter_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_LaserMeter_c*
IndyDS_LaserMeter_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_LaserMeter_c*
IndyDS_LaserMeter_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPluginSupport_copy_data(
    IndyDS_LaserMeter_c *out,
    const IndyDS_LaserMeter_c *in);

NDDSUSERDllExport extern void 
IndyDS_LaserMeter_cPluginSupport_destroy_data_w_params(
    IndyDS_LaserMeter_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_LaserMeter_cPluginSupport_destroy_data_ex(
    IndyDS_LaserMeter_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_LaserMeter_cPluginSupport_destroy_data(
    IndyDS_LaserMeter_c *sample);

NDDSUSERDllExport extern void 
IndyDS_LaserMeter_cPluginSupport_print_data(
    const IndyDS_LaserMeter_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_LaserMeter_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_LaserMeter_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_LaserMeter_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_LaserMeter_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_LaserMeter_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *out,
    const IndyDS_LaserMeter_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeter_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeter_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_LaserMeter_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeter_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_LaserMeter_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_LaserMeter_cPlugin_data_to_string(
    const IndyDS_LaserMeter_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeter_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_LaserMeter_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_LaserMeter_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_LaserMeter_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_LaserMeter_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_LaserMeter_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_LaserMeter_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_LaserMeter_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_LaserMeter_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_LaserMeter_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_LaserMeter_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_SensorMovableTarget_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_SensorMovableTarget_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_SensorMovableTarget_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_SensorMovableTarget_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_SensorMovableTarget_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_SensorMovableTarget_c*
IndyDS_SensorMovableTarget_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_SensorMovableTarget_c*
IndyDS_SensorMovableTarget_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_SensorMovableTarget_c*
IndyDS_SensorMovableTarget_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPluginSupport_copy_data(
    IndyDS_SensorMovableTarget_c *out,
    const IndyDS_SensorMovableTarget_c *in);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTarget_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorMovableTarget_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTarget_cPluginSupport_destroy_data_ex(
    IndyDS_SensorMovableTarget_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTarget_cPluginSupport_destroy_data(
    IndyDS_SensorMovableTarget_c *sample);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTarget_cPluginSupport_print_data(
    const IndyDS_SensorMovableTarget_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_SensorMovableTarget_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTarget_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_SensorMovableTarget_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTarget_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_SensorMovableTarget_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *out,
    const IndyDS_SensorMovableTarget_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTarget_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTarget_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorMovableTarget_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTarget_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorMovableTarget_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_SensorMovableTarget_cPlugin_data_to_string(
    const IndyDS_SensorMovableTarget_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTarget_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_SensorMovableTarget_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorMovableTarget_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_SensorMovableTarget_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTarget_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTarget_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTarget_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTarget_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTarget_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_SensorMovableTarget_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_SensorMovableTarget_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_SensorMovableTargets_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_SensorMovableTargets_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_SensorMovableTargets_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_SensorMovableTargets_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_SensorMovableTargets_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_SensorMovableTargets_c*
IndyDS_SensorMovableTargets_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_SensorMovableTargets_c*
IndyDS_SensorMovableTargets_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_SensorMovableTargets_c*
IndyDS_SensorMovableTargets_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPluginSupport_copy_data(
    IndyDS_SensorMovableTargets_c *out,
    const IndyDS_SensorMovableTargets_c *in);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargets_cPluginSupport_destroy_data_w_params(
    IndyDS_SensorMovableTargets_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargets_cPluginSupport_destroy_data_ex(
    IndyDS_SensorMovableTargets_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargets_cPluginSupport_destroy_data(
    IndyDS_SensorMovableTargets_c *sample);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargets_cPluginSupport_print_data(
    const IndyDS_SensorMovableTargets_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_SensorMovableTargets_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargets_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_SensorMovableTargets_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_SensorMovableTargets_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_SensorMovableTargets_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *out,
    const IndyDS_SensorMovableTargets_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargets_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargets_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_SensorMovableTargets_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargets_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_SensorMovableTargets_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_SensorMovableTargets_cPlugin_data_to_string(
    const IndyDS_SensorMovableTargets_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargets_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_SensorMovableTargets_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_SensorMovableTargets_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_SensorMovableTargets_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_SensorMovableTargets_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_SensorMovableTargets_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_SensorMovableTargets_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_SensorMovableTargets_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_SensorMovableTargets_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_SensorMovableTargets_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_SensorMovableTargets_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_CabToModelCorrective_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_CabToModelCorrective_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_CabToModelCorrective_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_CabToModelCorrective_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_CabToModelCorrective_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_CabToModelCorrective_c*
IndyDS_CabToModelCorrective_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_CabToModelCorrective_c*
IndyDS_CabToModelCorrective_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_CabToModelCorrective_c*
IndyDS_CabToModelCorrective_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPluginSupport_copy_data(
    IndyDS_CabToModelCorrective_c *out,
    const IndyDS_CabToModelCorrective_c *in);

NDDSUSERDllExport extern void 
IndyDS_CabToModelCorrective_cPluginSupport_destroy_data_w_params(
    IndyDS_CabToModelCorrective_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_CabToModelCorrective_cPluginSupport_destroy_data_ex(
    IndyDS_CabToModelCorrective_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_CabToModelCorrective_cPluginSupport_destroy_data(
    IndyDS_CabToModelCorrective_c *sample);

NDDSUSERDllExport extern void 
IndyDS_CabToModelCorrective_cPluginSupport_print_data(
    const IndyDS_CabToModelCorrective_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_CabToModelCorrective_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_CabToModelCorrective_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_CabToModelCorrective_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_CabToModelCorrective_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_CabToModelCorrective_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *out,
    const IndyDS_CabToModelCorrective_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToModelCorrective_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_CabToModelCorrective_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_CabToModelCorrective_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_CabToModelCorrective_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_CabToModelCorrective_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_CabToModelCorrective_cPlugin_data_to_string(
    const IndyDS_CabToModelCorrective_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_CabToModelCorrective_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_CabToModelCorrective_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_CabToModelCorrective_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_CabToModelCorrective_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToModelCorrective_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToModelCorrective_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToModelCorrective_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_CabToModelCorrective_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToModelCorrective_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_CabToModelCorrective_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_CabToModelCorrective_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_CabToSteeringCorrective_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_CabToSteeringCorrective_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_CabToSteeringCorrective_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_CabToSteeringCorrective_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_CabToSteeringCorrective_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_CabToSteeringCorrective_c*
IndyDS_CabToSteeringCorrective_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_CabToSteeringCorrective_c*
IndyDS_CabToSteeringCorrective_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_CabToSteeringCorrective_c*
IndyDS_CabToSteeringCorrective_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPluginSupport_copy_data(
    IndyDS_CabToSteeringCorrective_c *out,
    const IndyDS_CabToSteeringCorrective_c *in);

NDDSUSERDllExport extern void 
IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data_w_params(
    IndyDS_CabToSteeringCorrective_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data_ex(
    IndyDS_CabToSteeringCorrective_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_CabToSteeringCorrective_cPluginSupport_destroy_data(
    IndyDS_CabToSteeringCorrective_c *sample);

NDDSUSERDllExport extern void 
IndyDS_CabToSteeringCorrective_cPluginSupport_print_data(
    const IndyDS_CabToSteeringCorrective_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_CabToSteeringCorrective_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_CabToSteeringCorrective_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_CabToSteeringCorrective_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_CabToSteeringCorrective_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_CabToSteeringCorrective_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *out,
    const IndyDS_CabToSteeringCorrective_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToSteeringCorrective_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_CabToSteeringCorrective_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_CabToSteeringCorrective_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_CabToSteeringCorrective_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_CabToSteeringCorrective_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_CabToSteeringCorrective_cPlugin_data_to_string(
    const IndyDS_CabToSteeringCorrective_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_CabToSteeringCorrective_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_CabToSteeringCorrective_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_CabToSteeringCorrective_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_CabToSteeringCorrective_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_CabToSteeringCorrective_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_CabToSteeringCorrective_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_CabToSteeringCorrective_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_CabToSteeringCorrective_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_CabToSteeringCorrective_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_CabToSteeringCorrective_cPlugin_delete(struct PRESTypePlugin *);

#define IndyDS_VehicleOutput_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IndyDS_VehicleOutput_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndyDS_VehicleOutput_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define IndyDS_VehicleOutput_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndyDS_VehicleOutput_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndyDS_VehicleOutput_c*
IndyDS_VehicleOutput_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndyDS_VehicleOutput_c*
IndyDS_VehicleOutput_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndyDS_VehicleOutput_c*
IndyDS_VehicleOutput_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPluginSupport_copy_data(
    IndyDS_VehicleOutput_c *out,
    const IndyDS_VehicleOutput_c *in);

NDDSUSERDllExport extern void 
IndyDS_VehicleOutput_cPluginSupport_destroy_data_w_params(
    IndyDS_VehicleOutput_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndyDS_VehicleOutput_cPluginSupport_destroy_data_ex(
    IndyDS_VehicleOutput_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndyDS_VehicleOutput_cPluginSupport_destroy_data(
    IndyDS_VehicleOutput_c *sample);

NDDSUSERDllExport extern void 
IndyDS_VehicleOutput_cPluginSupport_print_data(
    const IndyDS_VehicleOutput_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IndyDS_VehicleOutput_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IndyDS_VehicleOutput_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IndyDS_VehicleOutput_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IndyDS_VehicleOutput_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IndyDS_VehicleOutput_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *out,
    const IndyDS_VehicleOutput_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_VehicleOutput_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_VehicleOutput_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IndyDS_VehicleOutput_c *sample); 

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_VehicleOutput_cPlugin_deserialize_from_cdr_buffer(
    IndyDS_VehicleOutput_c *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
IndyDS_VehicleOutput_cPlugin_data_to_string(
    const IndyDS_VehicleOutput_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
IndyDS_VehicleOutput_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndyDS_VehicleOutput_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndyDS_VehicleOutput_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndyDS_VehicleOutput_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndyDS_VehicleOutput_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndyDS_VehicleOutput_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndyDS_VehicleOutput_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IndyDS_VehicleOutput_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndyDS_VehicleOutput_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IndyDS_VehicleOutput_cPlugin_new(void);

NDDSUSERDllExport extern void
IndyDS_VehicleOutput_cPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RtiSCADE_DS_ControllerImplPlugin_1459192143_h */

