
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AgentState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AgentStatePlugin_4797555_h
#define AgentStatePlugin_4797555_h

#include "AgentState.h"

#include "MessagePlugin.h"




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


namespace rapid{

/**

 * AgentState message sends low-frequency updates of the state

 * of a specific Agent.

 */

/* The type used to store keys for instances of type struct
 * AgentState.
 *
 * By default, this type is struct AgentState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AgentState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AgentState, the
 * following restriction applies: the key of struct
 * AgentState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AgentState.
*/
typedef  class AgentState AgentStateKeyHolder;


#define AgentStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define AgentStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AgentStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AgentStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AgentStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AgentStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AgentStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AgentState*
AgentStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern AgentState*
AgentStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AgentState*
AgentStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AgentStatePluginSupport_copy_data(
    AgentState *out,
    const AgentState *in);

NDDSUSERDllExport extern void 
AgentStatePluginSupport_destroy_data_w_params(
    AgentState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
AgentStatePluginSupport_destroy_data_ex(
    AgentState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AgentStatePluginSupport_destroy_data(
    AgentState *sample);

NDDSUSERDllExport extern void 
AgentStatePluginSupport_print_data(
    const AgentState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AgentState*
AgentStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AgentState*
AgentStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AgentStatePluginSupport_destroy_key_ex(
    AgentStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AgentStatePluginSupport_destroy_key(
    AgentStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AgentStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AgentStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AgentStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AgentStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
AgentStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentState *out,
    const AgentState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AgentState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AgentState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
AgentStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AgentStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AgentStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AgentStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AgentState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AgentStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AgentStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AgentState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AgentState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AgentStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AgentState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AgentStateKeyHolder *key, 
    const AgentState *instance);

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AgentState *instance, 
    const AgentStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AgentState *instance);

NDDSUSERDllExport extern RTIBool 
AgentStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AgentStatePlugin_new(void);

NDDSUSERDllExport extern void
AgentStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* AgentStatePlugin_4797555_h */
