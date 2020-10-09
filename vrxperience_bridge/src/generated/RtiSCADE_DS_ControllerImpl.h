

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RtiSCADE_DS_ControllerImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RtiSCADE_DS_ControllerImpl_1459192143_h
#define RtiSCADE_DS_ControllerImpl_1459192143_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern const char *IndyDS_RoadLinePolynom_cTYPENAME;

typedef struct IndyDS_RoadLinePolynom_c {

    DDS_Short   lineId ;
    DDS_Double   c0 ;
    DDS_Double   c1 ;
    DDS_Double   c2 ;
    DDS_Double   c3 ;
    DDS_Double   curvatureRadius ;
    DDS_Double   estimatedCurvatureRadius ;

    IndyDS_RoadLinePolynom_c() {}

} IndyDS_RoadLinePolynom_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_RoadLinePolynom_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_RoadLinePolynom_cSeq, IndyDS_RoadLinePolynom_c);

NDDSUSERDllExport
RTIBool IndyDS_RoadLinePolynom_c_initialize(
    IndyDS_RoadLinePolynom_c* self);

NDDSUSERDllExport
RTIBool IndyDS_RoadLinePolynom_c_initialize_ex(
    IndyDS_RoadLinePolynom_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_RoadLinePolynom_c_initialize_w_params(
    IndyDS_RoadLinePolynom_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_RoadLinePolynom_c_finalize(
    IndyDS_RoadLinePolynom_c* self);

NDDSUSERDllExport
void IndyDS_RoadLinePolynom_c_finalize_ex(
    IndyDS_RoadLinePolynom_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_RoadLinePolynom_c_finalize_w_params(
    IndyDS_RoadLinePolynom_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_RoadLinePolynom_c_finalize_optional_members(
    IndyDS_RoadLinePolynom_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_RoadLinePolynom_c_copy(
    IndyDS_RoadLinePolynom_c* dst,
    const IndyDS_RoadLinePolynom_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_RoadLinesPolynoms_cTYPENAME;

typedef struct IndyDS_RoadLinesPolynoms_c {

    DDS_Short   egoVhlId ;
    DDS_Long   globalId ;
    DDS_Octet   isNoisy ;
    DDS_Short   referenceFrame ;
    struct    IndyDS_RoadLinePolynom_cSeq  roadLinesPolynomsArray ;
    DDS_Double   timeOfUpdate ;

    IndyDS_RoadLinesPolynoms_c() {}

} IndyDS_RoadLinesPolynoms_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_RoadLinesPolynoms_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_RoadLinesPolynoms_cSeq, IndyDS_RoadLinesPolynoms_c);

NDDSUSERDllExport
RTIBool IndyDS_RoadLinesPolynoms_c_initialize(
    IndyDS_RoadLinesPolynoms_c* self);

NDDSUSERDllExport
RTIBool IndyDS_RoadLinesPolynoms_c_initialize_ex(
    IndyDS_RoadLinesPolynoms_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_RoadLinesPolynoms_c_initialize_w_params(
    IndyDS_RoadLinesPolynoms_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_RoadLinesPolynoms_c_finalize(
    IndyDS_RoadLinesPolynoms_c* self);

NDDSUSERDllExport
void IndyDS_RoadLinesPolynoms_c_finalize_ex(
    IndyDS_RoadLinesPolynoms_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_RoadLinesPolynoms_c_finalize_w_params(
    IndyDS_RoadLinesPolynoms_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_RoadLinesPolynoms_c_finalize_optional_members(
    IndyDS_RoadLinesPolynoms_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_RoadLinesPolynoms_c_copy(
    IndyDS_RoadLinesPolynoms_c* dst,
    const IndyDS_RoadLinesPolynoms_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_SensorTargetBBox_cTYPENAME;

typedef struct IndyDS_SensorTargetBBox_c {

    DDS_Short   id ;
    DDS_Short   referenceFrame ;
    DDS_Double   rearBottomRightX ;
    DDS_Double   rearBottomRightY ;
    DDS_Double   rearBottomRightZ ;
    DDS_Double   rearTopRightX ;
    DDS_Double   rearTopRightY ;
    DDS_Double   rearTopRightZ ;
    DDS_Double   rearbottomLeftX ;
    DDS_Double   rearbottomLeftY ;
    DDS_Double   rearbottomLeftZ ;
    DDS_Double   rearTopLeftX ;
    DDS_Double   rearTopLeftY ;
    DDS_Double   rearTopLeftZ ;
    DDS_Double   frontBottomRightX ;
    DDS_Double   frontBottomRightY ;
    DDS_Double   frontBottomRightZ ;
    DDS_Double   frontTopRightX ;
    DDS_Double   frontTopRightY ;
    DDS_Double   frontTopRightZ ;
    DDS_Double   frontbottomLeftX ;
    DDS_Double   frontbottomLeftY ;
    DDS_Double   frontbottomLeftZ ;
    DDS_Double   frontTopLeftX ;
    DDS_Double   frontTopLeftY ;
    DDS_Double   frontTopLeftZ ;

    IndyDS_SensorTargetBBox_c() {}

} IndyDS_SensorTargetBBox_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_SensorTargetBBox_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_SensorTargetBBox_cSeq, IndyDS_SensorTargetBBox_c);

NDDSUSERDllExport
RTIBool IndyDS_SensorTargetBBox_c_initialize(
    IndyDS_SensorTargetBBox_c* self);

NDDSUSERDllExport
RTIBool IndyDS_SensorTargetBBox_c_initialize_ex(
    IndyDS_SensorTargetBBox_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_SensorTargetBBox_c_initialize_w_params(
    IndyDS_SensorTargetBBox_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_SensorTargetBBox_c_finalize(
    IndyDS_SensorTargetBBox_c* self);

NDDSUSERDllExport
void IndyDS_SensorTargetBBox_c_finalize_ex(
    IndyDS_SensorTargetBBox_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_SensorTargetBBox_c_finalize_w_params(
    IndyDS_SensorTargetBBox_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_SensorTargetBBox_c_finalize_optional_members(
    IndyDS_SensorTargetBBox_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_SensorTargetBBox_c_copy(
    IndyDS_SensorTargetBBox_c* dst,
    const IndyDS_SensorTargetBBox_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_SensorMovableTargetsBoundingBoxes_cTYPENAME;

typedef struct IndyDS_SensorMovableTargetsBoundingBoxes_c {

    struct    IndyDS_SensorTargetBBox_cSeq  boundingBoxesArray ;
    DDS_Long   globalId ;
    DDS_Double   timeOfUpdate ;
    DDS_Short   vhlId ;

    IndyDS_SensorMovableTargetsBoundingBoxes_c() {}

} IndyDS_SensorMovableTargetsBoundingBoxes_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_SensorMovableTargetsBoundingBoxes_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_SensorMovableTargetsBoundingBoxes_cSeq, IndyDS_SensorMovableTargetsBoundingBoxes_c);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* self);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_ex(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_w_params(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* self);

NDDSUSERDllExport
void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_ex(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_w_params(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_optional_members(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargetsBoundingBoxes_c_copy(
    IndyDS_SensorMovableTargetsBoundingBoxes_c* dst,
    const IndyDS_SensorMovableTargetsBoundingBoxes_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_GPS_cTYPENAME;

typedef struct IndyDS_GPS_c {

    DDS_Double   altitude ;
    DDS_Long   globalId ;
    DDS_Float   hdop ;
    DDS_Double   lastUpdate ;
    DDS_Double   latitude ;
    DDS_Double   longitude ;
    DDS_Short   satellites ;
    DDS_Short   sensorId ;
    DDS_Short   vhlId ;

    IndyDS_GPS_c() {}

} IndyDS_GPS_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_GPS_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_GPS_cSeq, IndyDS_GPS_c);

NDDSUSERDllExport
RTIBool IndyDS_GPS_c_initialize(
    IndyDS_GPS_c* self);

NDDSUSERDllExport
RTIBool IndyDS_GPS_c_initialize_ex(
    IndyDS_GPS_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_GPS_c_initialize_w_params(
    IndyDS_GPS_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_GPS_c_finalize(
    IndyDS_GPS_c* self);

NDDSUSERDllExport
void IndyDS_GPS_c_finalize_ex(
    IndyDS_GPS_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_GPS_c_finalize_w_params(
    IndyDS_GPS_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_GPS_c_finalize_optional_members(
    IndyDS_GPS_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_GPS_c_copy(
    IndyDS_GPS_c* dst,
    const IndyDS_GPS_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_LaserMeterPoint_cTYPENAME;

typedef struct IndyDS_LaserMeterPoint_c {

    DDS_Octet   hit ;
    DDS_Float   Hangle ;
    DDS_Float   Vangle ;
    DDS_Double   absposx ;
    DDS_Double   absposy ;
    DDS_Double   absposz ;
    DDS_Float   relposx ;
    DDS_Float   relposy ;
    DDS_Float   relposz ;
    DDS_Float   distance ;

    IndyDS_LaserMeterPoint_c() {}

} IndyDS_LaserMeterPoint_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_LaserMeterPoint_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_LaserMeterPoint_cSeq, IndyDS_LaserMeterPoint_c);

NDDSUSERDllExport
RTIBool IndyDS_LaserMeterPoint_c_initialize(
    IndyDS_LaserMeterPoint_c* self);

NDDSUSERDllExport
RTIBool IndyDS_LaserMeterPoint_c_initialize_ex(
    IndyDS_LaserMeterPoint_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_LaserMeterPoint_c_initialize_w_params(
    IndyDS_LaserMeterPoint_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_LaserMeterPoint_c_finalize(
    IndyDS_LaserMeterPoint_c* self);

NDDSUSERDllExport
void IndyDS_LaserMeterPoint_c_finalize_ex(
    IndyDS_LaserMeterPoint_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_LaserMeterPoint_c_finalize_w_params(
    IndyDS_LaserMeterPoint_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_LaserMeterPoint_c_finalize_optional_members(
    IndyDS_LaserMeterPoint_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_LaserMeterPoint_c_copy(
    IndyDS_LaserMeterPoint_c* dst,
    const IndyDS_LaserMeterPoint_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_LaserMeter_cTYPENAME;

typedef struct IndyDS_LaserMeter_c {

    DDS_Short   frameCount ;
    DDS_Long   globalId ;
    DDS_Double   lastUpdate ;
    DDS_Short   nearestPoint ;
    struct    IndyDS_LaserMeterPoint_cSeq  resultArray ;
    DDS_Short   sensorId ;
    DDS_Short   vhlId ;

    IndyDS_LaserMeter_c() {}

} IndyDS_LaserMeter_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_LaserMeter_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_LaserMeter_cSeq, IndyDS_LaserMeter_c);

NDDSUSERDllExport
RTIBool IndyDS_LaserMeter_c_initialize(
    IndyDS_LaserMeter_c* self);

NDDSUSERDllExport
RTIBool IndyDS_LaserMeter_c_initialize_ex(
    IndyDS_LaserMeter_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_LaserMeter_c_initialize_w_params(
    IndyDS_LaserMeter_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_LaserMeter_c_finalize(
    IndyDS_LaserMeter_c* self);

NDDSUSERDllExport
void IndyDS_LaserMeter_c_finalize_ex(
    IndyDS_LaserMeter_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_LaserMeter_c_finalize_w_params(
    IndyDS_LaserMeter_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_LaserMeter_c_finalize_optional_members(
    IndyDS_LaserMeter_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_LaserMeter_c_copy(
    IndyDS_LaserMeter_c* dst,
    const IndyDS_LaserMeter_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_SensorMovableTarget_cTYPENAME;

typedef struct IndyDS_SensorMovableTarget_c {

    DDS_Short   id ;
    DDS_Short   scanerId ;
    DDS_Short   detectionStatus ;
    DDS_Short   type_ ;
    DDS_Short   beamIndex ;
    DDS_Double   existenceTime ;
    DDS_Short   anchorPoint ;
    DDS_Short   referenceFrame ;
    DDS_Double   posXInChosenRef ;
    DDS_Double   posYInChosenRef ;
    DDS_Double   posZInChosenRef ;
    DDS_Float   posHeadingInChosenRef ;
    DDS_Float   posPitchInChosenRef ;
    DDS_Float   posRollInChosenRef ;
    DDS_Float   distanceToCollision ;
    DDS_Float   azimuthInSensor ;
    DDS_Float   elevationInSensor ;
    DDS_Float   azimuthInVehicle ;
    DDS_Float   elevationInVehicle ;
    DDS_Float   absoluteSpeedX ;
    DDS_Float   absoluteSpeedY ;
    DDS_Float   absoluteSpeedZ ;
    DDS_Float   absoluteAngularSpeedH ;
    DDS_Float   absoluteAngularSpeedP ;
    DDS_Float   absoluteAngularSpeedR ;
    DDS_Float   relativeSpeedX ;
    DDS_Float   relativeSpeedY ;
    DDS_Float   relativeSpeedZ ;
    DDS_Float   relativeAngularSpeedH ;
    DDS_Float   relativeAngularSpeedP ;
    DDS_Float   relativeAngularSpeedR ;
    DDS_Float   absoluteAccelX ;
    DDS_Float   absoluteAccelY ;
    DDS_Float   absoluteAccelZ ;
    DDS_Float   relativeAccelX ;
    DDS_Float   relativeAccelY ;
    DDS_Float   relativeAccelZ ;
    DDS_Float   length ;
    DDS_Float   width ;
    DDS_Float   height ;
    DDS_Float   visibility ;

    IndyDS_SensorMovableTarget_c() {}

} IndyDS_SensorMovableTarget_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_SensorMovableTarget_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_SensorMovableTarget_cSeq, IndyDS_SensorMovableTarget_c);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTarget_c_initialize(
    IndyDS_SensorMovableTarget_c* self);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTarget_c_initialize_ex(
    IndyDS_SensorMovableTarget_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTarget_c_initialize_w_params(
    IndyDS_SensorMovableTarget_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_SensorMovableTarget_c_finalize(
    IndyDS_SensorMovableTarget_c* self);

NDDSUSERDllExport
void IndyDS_SensorMovableTarget_c_finalize_ex(
    IndyDS_SensorMovableTarget_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_SensorMovableTarget_c_finalize_w_params(
    IndyDS_SensorMovableTarget_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_SensorMovableTarget_c_finalize_optional_members(
    IndyDS_SensorMovableTarget_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTarget_c_copy(
    IndyDS_SensorMovableTarget_c* dst,
    const IndyDS_SensorMovableTarget_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_SensorMovableTargets_cTYPENAME;

typedef struct IndyDS_SensorMovableTargets_c {

    DDS_Short   egoVhlId ;
    DDS_Long   globalId ;
    DDS_Short   nearestTarget ;
    struct    IndyDS_SensorMovableTarget_cSeq  targetsArray ;
    DDS_Double   timeOfUpdate ;

    IndyDS_SensorMovableTargets_c() {}

} IndyDS_SensorMovableTargets_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_SensorMovableTargets_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_SensorMovableTargets_cSeq, IndyDS_SensorMovableTargets_c);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargets_c_initialize(
    IndyDS_SensorMovableTargets_c* self);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargets_c_initialize_ex(
    IndyDS_SensorMovableTargets_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargets_c_initialize_w_params(
    IndyDS_SensorMovableTargets_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_SensorMovableTargets_c_finalize(
    IndyDS_SensorMovableTargets_c* self);

NDDSUSERDllExport
void IndyDS_SensorMovableTargets_c_finalize_ex(
    IndyDS_SensorMovableTargets_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_SensorMovableTargets_c_finalize_w_params(
    IndyDS_SensorMovableTargets_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_SensorMovableTargets_c_finalize_optional_members(
    IndyDS_SensorMovableTargets_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_SensorMovableTargets_c_copy(
    IndyDS_SensorMovableTargets_c* dst,
    const IndyDS_SensorMovableTargets_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_CabToModelCorrective_cTYPENAME;

typedef struct IndyDS_CabToModelCorrective_c {

    DDS_Double   AcceleratorAdditive ;
    DDS_Double   AcceleratorMultiplicative ;
    DDS_Double   BrakeAdditive ;
    DDS_Double   BrakeMultiplicative ;
    DDS_Double   ClutchAdditive ;
    DDS_Double   ClutchMultiplicative ;
    DDS_Short   GearboxAutoMode ;
    DDS_Octet   GearboxTakeOver ;
    DDS_Octet   IsRatioLimit ;
    DDS_Short   MaxRatio ;
    DDS_Short   MinRatio ;
    DDS_Double   ParkingBrakeAdditive ;
    DDS_Double   ParkingBrakeMultiplicative ;
    DDS_Octet   ShiftDown ;
    DDS_Octet   ShiftUp ;
    DDS_Double   TimeOfUpdate ;
    DDS_Short   WantedGear ;

    IndyDS_CabToModelCorrective_c() {}

} IndyDS_CabToModelCorrective_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_CabToModelCorrective_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_CabToModelCorrective_cSeq, IndyDS_CabToModelCorrective_c);

NDDSUSERDllExport
RTIBool IndyDS_CabToModelCorrective_c_initialize(
    IndyDS_CabToModelCorrective_c* self);

NDDSUSERDllExport
RTIBool IndyDS_CabToModelCorrective_c_initialize_ex(
    IndyDS_CabToModelCorrective_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_CabToModelCorrective_c_initialize_w_params(
    IndyDS_CabToModelCorrective_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_CabToModelCorrective_c_finalize(
    IndyDS_CabToModelCorrective_c* self);

NDDSUSERDllExport
void IndyDS_CabToModelCorrective_c_finalize_ex(
    IndyDS_CabToModelCorrective_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_CabToModelCorrective_c_finalize_w_params(
    IndyDS_CabToModelCorrective_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_CabToModelCorrective_c_finalize_optional_members(
    IndyDS_CabToModelCorrective_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_CabToModelCorrective_c_copy(
    IndyDS_CabToModelCorrective_c* dst,
    const IndyDS_CabToModelCorrective_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_CabToSteeringCorrective_cTYPENAME;

typedef struct IndyDS_CabToSteeringCorrective_c {

    DDS_Double   AdditiveSteeringWheelAccel ;
    DDS_Double   AdditiveSteeringWheelAngle ;
    DDS_Double   AdditiveSteeringWheelSpeed ;
    DDS_Double   AdditiveSteeringWheelTorque ;
    DDS_Double   MultiplicativeSteeringWheelAccel ;
    DDS_Double   MultiplicativeSteeringWheelAngle ;
    DDS_Double   MultiplicativeSteeringWheelSpeed ;
    DDS_Double   MultiplicativeSteeringWheelTorque ;
    DDS_Double   TimeOfUpdate ;

    IndyDS_CabToSteeringCorrective_c() {}

} IndyDS_CabToSteeringCorrective_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_CabToSteeringCorrective_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_CabToSteeringCorrective_cSeq, IndyDS_CabToSteeringCorrective_c);

NDDSUSERDllExport
RTIBool IndyDS_CabToSteeringCorrective_c_initialize(
    IndyDS_CabToSteeringCorrective_c* self);

NDDSUSERDllExport
RTIBool IndyDS_CabToSteeringCorrective_c_initialize_ex(
    IndyDS_CabToSteeringCorrective_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_CabToSteeringCorrective_c_initialize_w_params(
    IndyDS_CabToSteeringCorrective_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_CabToSteeringCorrective_c_finalize(
    IndyDS_CabToSteeringCorrective_c* self);

NDDSUSERDllExport
void IndyDS_CabToSteeringCorrective_c_finalize_ex(
    IndyDS_CabToSteeringCorrective_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_CabToSteeringCorrective_c_finalize_w_params(
    IndyDS_CabToSteeringCorrective_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_CabToSteeringCorrective_c_finalize_optional_members(
    IndyDS_CabToSteeringCorrective_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_CabToSteeringCorrective_c_copy(
    IndyDS_CabToSteeringCorrective_c* dst,
    const IndyDS_CabToSteeringCorrective_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *IndyDS_VehicleOutput_cTYPENAME;

typedef struct IndyDS_VehicleOutput_c {

    DDS_Double   CustomOutput [512];
    DDS_Double   EngineSpeed ;
    DDS_Octet   EngineState ;
    DDS_Long   GearBoxMode ;
    DDS_Long   GearEngaged ;
    DDS_Long   GroundIndex [4];
    DDS_Double   LSR [4];
    DDS_Double   SteeringWheelAccel ;
    DDS_Double   SteeringWheelAngle ;
    DDS_Double   SteeringWheelSpeed ;
    DDS_Double   SteeringWheelTorque ;
    DDS_Double   TimeOfUpdate ;
    DDS_Double   TraveledDistance ;
    DDS_Octet   absIsActive [4];
    DDS_Long   auxiliaryLights ;
    DDS_Double   brakePedal ;
    DDS_Double   brakeRetarderNotch ;
    DDS_Double   brakeTemperature [4];
    DDS_Double   cdgAccel_heading ;
    DDS_Double   cdgAccel_pitch ;
    DDS_Double   cdgAccel_roll ;
    DDS_Double   cdgAccel_x ;
    DDS_Double   cdgAccel_y ;
    DDS_Double   cdgAccel_z ;
    DDS_Double   cdgPos_heading ;
    DDS_Double   cdgPos_pitch ;
    DDS_Double   cdgPos_roll ;
    DDS_Double   cdgPos_x ;
    DDS_Double   cdgPos_y ;
    DDS_Double   cdgPos_z ;
    DDS_Double   cdgSpeed_heading ;
    DDS_Double   cdgSpeed_pitch ;
    DDS_Double   cdgSpeed_roll ;
    DDS_Double   cdgSpeed_x ;
    DDS_Double   cdgSpeed_y ;
    DDS_Double   cdgSpeed_z ;
    DDS_Double   clutchPedal ;
    DDS_Double   consumption ;
    DDS_Double   contactPoint_x [4];
    DDS_Double   contactPoint_y [4];
    DDS_Double   contactPoint_z [4];
    DDS_Long   effectiveIgnitionKeyPosition ;
    DDS_Octet   forceLockup ;
    DDS_Double   gasPedal ;
    DDS_Double   grip [4];
    DDS_Double   groundNormal_x [4];
    DDS_Double   groundNormal_y [4];
    DDS_Double   groundNormal_z [4];
    DDS_Long   groundType [4];
    DDS_Double   handBrake ;
    DDS_Double   hubPosition_heading [4];
    DDS_Double   hubPosition_pitch [4];
    DDS_Double   hubPosition_roll [4];
    DDS_Double   hubPosition_x [4];
    DDS_Double   hubPosition_y [4];
    DDS_Double   hubPosition_z [4];
    DDS_Octet   isEngineRetarder ;
    DDS_Octet   isInContact [4];
    DDS_Long   laneType [4];
    DDS_Long   lights ;
    DDS_Long   lockDiffMode ;
    DDS_Long   plowMode ;
    DDS_Double   pollution ;
    DDS_Double   roughnessHeight [4];
    DDS_Double   roughnessHeightStdDeviation [4];
    DDS_Double   roughnessLength [4];
    DDS_Double   roughnessLengthStdDeviation [4];
    DDS_Long   sirens ;
    DDS_Double   slipAngle [4];
    DDS_Double   tireForce_x [4];
    DDS_Double   tireForce_y [4];
    DDS_Double   tireForce_z [4];
    DDS_Double   trailerBrake ;
    DDS_Long   transferChoice ;
    DDS_Double   waterHeight [4];
    DDS_Double   wheelRotation [4];
    DDS_Double   wheelRotationSpeed [4];

    IndyDS_VehicleOutput_c() {}

} IndyDS_VehicleOutput_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* IndyDS_VehicleOutput_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(IndyDS_VehicleOutput_cSeq, IndyDS_VehicleOutput_c);

NDDSUSERDllExport
RTIBool IndyDS_VehicleOutput_c_initialize(
    IndyDS_VehicleOutput_c* self);

NDDSUSERDllExport
RTIBool IndyDS_VehicleOutput_c_initialize_ex(
    IndyDS_VehicleOutput_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndyDS_VehicleOutput_c_initialize_w_params(
    IndyDS_VehicleOutput_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void IndyDS_VehicleOutput_c_finalize(
    IndyDS_VehicleOutput_c* self);

NDDSUSERDllExport
void IndyDS_VehicleOutput_c_finalize_ex(
    IndyDS_VehicleOutput_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndyDS_VehicleOutput_c_finalize_w_params(
    IndyDS_VehicleOutput_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndyDS_VehicleOutput_c_finalize_optional_members(
    IndyDS_VehicleOutput_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IndyDS_VehicleOutput_c_copy(
    IndyDS_VehicleOutput_c* dst,
    const IndyDS_VehicleOutput_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RtiSCADE_DS_ControllerImpl */

