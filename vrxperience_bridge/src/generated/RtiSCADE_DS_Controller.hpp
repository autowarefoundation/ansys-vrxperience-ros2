

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RtiSCADE_DS_Controller.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RtiSCADE_DS_Controller_1459192143_hpp
#define RtiSCADE_DS_Controller_1459192143_hpp

#include <iosfwd>
#include "RtiSCADE_DS_ControllerImpl.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace IndyDS {

    class NDDSUSERDllExport RoadLinePolynom {

      public:
        RoadLinePolynom();

        RoadLinePolynom(
            int16_t lineId_param,
            double c0_param,
            double c1_param,
            double c2_param,
            double c3_param,
            double curvatureRadius_param,
            double estimatedCurvatureRadius_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        RoadLinePolynom (RoadLinePolynom&&) = default;
        RoadLinePolynom& operator=(RoadLinePolynom&&) = default;
        RoadLinePolynom& operator=(const RoadLinePolynom&) = default;
        RoadLinePolynom(const RoadLinePolynom&) = default;
        #else
        RoadLinePolynom(RoadLinePolynom&& other_) OMG_NOEXCEPT;  
        RoadLinePolynom& operator=(RoadLinePolynom&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int16_t lineId() const OMG_NOEXCEPT;
        void lineId(int16_t value);

        double c0() const OMG_NOEXCEPT;
        void c0(double value);

        double c1() const OMG_NOEXCEPT;
        void c1(double value);

        double c2() const OMG_NOEXCEPT;
        void c2(double value);

        double c3() const OMG_NOEXCEPT;
        void c3(double value);

        double curvatureRadius() const OMG_NOEXCEPT;
        void curvatureRadius(double value);

        double estimatedCurvatureRadius() const OMG_NOEXCEPT;
        void estimatedCurvatureRadius(double value);

        bool operator == (const RoadLinePolynom& other_) const;
        bool operator != (const RoadLinePolynom& other_) const;

        void swap(RoadLinePolynom& other_) OMG_NOEXCEPT;

      private:

        int16_t m_lineId_;
        double m_c0_;
        double m_c1_;
        double m_c2_;
        double m_c3_;
        double m_curvatureRadius_;
        double m_estimatedCurvatureRadius_;

    };

    inline void swap(RoadLinePolynom& a, RoadLinePolynom& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const RoadLinePolynom& sample);

    class NDDSUSERDllExport RoadLinesPolynoms {

      public:
        RoadLinesPolynoms();

        RoadLinesPolynoms(
            int16_t egoVhlId_param,
            int32_t globalId_param,
            uint8_t isNoisy_param,
            int16_t referenceFrame_param,
            const dds::core::vector<IndyDS::RoadLinePolynom>& roadLinesPolynomsArray_param,
            double timeOfUpdate_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        RoadLinesPolynoms (RoadLinesPolynoms&&) = default;
        RoadLinesPolynoms& operator=(RoadLinesPolynoms&&) = default;
        RoadLinesPolynoms& operator=(const RoadLinesPolynoms&) = default;
        RoadLinesPolynoms(const RoadLinesPolynoms&) = default;
        #else
        RoadLinesPolynoms(RoadLinesPolynoms&& other_) OMG_NOEXCEPT;  
        RoadLinesPolynoms& operator=(RoadLinesPolynoms&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int16_t egoVhlId() const OMG_NOEXCEPT;
        void egoVhlId(int16_t value);

        int32_t globalId() const OMG_NOEXCEPT;
        void globalId(int32_t value);

        uint8_t isNoisy() const OMG_NOEXCEPT;
        void isNoisy(uint8_t value);

        int16_t referenceFrame() const OMG_NOEXCEPT;
        void referenceFrame(int16_t value);

        dds::core::vector<IndyDS::RoadLinePolynom>& roadLinesPolynomsArray() OMG_NOEXCEPT; 
        const dds::core::vector<IndyDS::RoadLinePolynom>& roadLinesPolynomsArray() const OMG_NOEXCEPT;
        void roadLinesPolynomsArray(const dds::core::vector<IndyDS::RoadLinePolynom>& value);

        double timeOfUpdate() const OMG_NOEXCEPT;
        void timeOfUpdate(double value);

        bool operator == (const RoadLinesPolynoms& other_) const;
        bool operator != (const RoadLinesPolynoms& other_) const;

        void swap(RoadLinesPolynoms& other_) OMG_NOEXCEPT;

      private:

        int16_t m_egoVhlId_;
        int32_t m_globalId_;
        uint8_t m_isNoisy_;
        int16_t m_referenceFrame_;
        dds::core::vector<IndyDS::RoadLinePolynom> m_roadLinesPolynomsArray_;
        double m_timeOfUpdate_;

    };

    inline void swap(RoadLinesPolynoms& a, RoadLinesPolynoms& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const RoadLinesPolynoms& sample);

    class NDDSUSERDllExport SensorTargetBBox {

      public:
        SensorTargetBBox();

        SensorTargetBBox(
            int16_t id_param,
            int16_t referenceFrame_param,
            double rearBottomRightX_param,
            double rearBottomRightY_param,
            double rearBottomRightZ_param,
            double rearTopRightX_param,
            double rearTopRightY_param,
            double rearTopRightZ_param,
            double rearbottomLeftX_param,
            double rearbottomLeftY_param,
            double rearbottomLeftZ_param,
            double rearTopLeftX_param,
            double rearTopLeftY_param,
            double rearTopLeftZ_param,
            double frontBottomRightX_param,
            double frontBottomRightY_param,
            double frontBottomRightZ_param,
            double frontTopRightX_param,
            double frontTopRightY_param,
            double frontTopRightZ_param,
            double frontbottomLeftX_param,
            double frontbottomLeftY_param,
            double frontbottomLeftZ_param,
            double frontTopLeftX_param,
            double frontTopLeftY_param,
            double frontTopLeftZ_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        SensorTargetBBox (SensorTargetBBox&&) = default;
        SensorTargetBBox& operator=(SensorTargetBBox&&) = default;
        SensorTargetBBox& operator=(const SensorTargetBBox&) = default;
        SensorTargetBBox(const SensorTargetBBox&) = default;
        #else
        SensorTargetBBox(SensorTargetBBox&& other_) OMG_NOEXCEPT;  
        SensorTargetBBox& operator=(SensorTargetBBox&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int16_t id() const OMG_NOEXCEPT;
        void id(int16_t value);

        int16_t referenceFrame() const OMG_NOEXCEPT;
        void referenceFrame(int16_t value);

        double rearBottomRightX() const OMG_NOEXCEPT;
        void rearBottomRightX(double value);

        double rearBottomRightY() const OMG_NOEXCEPT;
        void rearBottomRightY(double value);

        double rearBottomRightZ() const OMG_NOEXCEPT;
        void rearBottomRightZ(double value);

        double rearTopRightX() const OMG_NOEXCEPT;
        void rearTopRightX(double value);

        double rearTopRightY() const OMG_NOEXCEPT;
        void rearTopRightY(double value);

        double rearTopRightZ() const OMG_NOEXCEPT;
        void rearTopRightZ(double value);

        double rearbottomLeftX() const OMG_NOEXCEPT;
        void rearbottomLeftX(double value);

        double rearbottomLeftY() const OMG_NOEXCEPT;
        void rearbottomLeftY(double value);

        double rearbottomLeftZ() const OMG_NOEXCEPT;
        void rearbottomLeftZ(double value);

        double rearTopLeftX() const OMG_NOEXCEPT;
        void rearTopLeftX(double value);

        double rearTopLeftY() const OMG_NOEXCEPT;
        void rearTopLeftY(double value);

        double rearTopLeftZ() const OMG_NOEXCEPT;
        void rearTopLeftZ(double value);

        double frontBottomRightX() const OMG_NOEXCEPT;
        void frontBottomRightX(double value);

        double frontBottomRightY() const OMG_NOEXCEPT;
        void frontBottomRightY(double value);

        double frontBottomRightZ() const OMG_NOEXCEPT;
        void frontBottomRightZ(double value);

        double frontTopRightX() const OMG_NOEXCEPT;
        void frontTopRightX(double value);

        double frontTopRightY() const OMG_NOEXCEPT;
        void frontTopRightY(double value);

        double frontTopRightZ() const OMG_NOEXCEPT;
        void frontTopRightZ(double value);

        double frontbottomLeftX() const OMG_NOEXCEPT;
        void frontbottomLeftX(double value);

        double frontbottomLeftY() const OMG_NOEXCEPT;
        void frontbottomLeftY(double value);

        double frontbottomLeftZ() const OMG_NOEXCEPT;
        void frontbottomLeftZ(double value);

        double frontTopLeftX() const OMG_NOEXCEPT;
        void frontTopLeftX(double value);

        double frontTopLeftY() const OMG_NOEXCEPT;
        void frontTopLeftY(double value);

        double frontTopLeftZ() const OMG_NOEXCEPT;
        void frontTopLeftZ(double value);

        bool operator == (const SensorTargetBBox& other_) const;
        bool operator != (const SensorTargetBBox& other_) const;

        void swap(SensorTargetBBox& other_) OMG_NOEXCEPT;

      private:

        int16_t m_id_;
        int16_t m_referenceFrame_;
        double m_rearBottomRightX_;
        double m_rearBottomRightY_;
        double m_rearBottomRightZ_;
        double m_rearTopRightX_;
        double m_rearTopRightY_;
        double m_rearTopRightZ_;
        double m_rearbottomLeftX_;
        double m_rearbottomLeftY_;
        double m_rearbottomLeftZ_;
        double m_rearTopLeftX_;
        double m_rearTopLeftY_;
        double m_rearTopLeftZ_;
        double m_frontBottomRightX_;
        double m_frontBottomRightY_;
        double m_frontBottomRightZ_;
        double m_frontTopRightX_;
        double m_frontTopRightY_;
        double m_frontTopRightZ_;
        double m_frontbottomLeftX_;
        double m_frontbottomLeftY_;
        double m_frontbottomLeftZ_;
        double m_frontTopLeftX_;
        double m_frontTopLeftY_;
        double m_frontTopLeftZ_;

    };

    inline void swap(SensorTargetBBox& a, SensorTargetBBox& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const SensorTargetBBox& sample);

    class NDDSUSERDllExport SensorMovableTargetsBoundingBoxes {

      public:
        SensorMovableTargetsBoundingBoxes();

        SensorMovableTargetsBoundingBoxes(
            const dds::core::vector<IndyDS::SensorTargetBBox>& boundingBoxesArray_param,
            int32_t globalId_param,
            double timeOfUpdate_param,
            int16_t vhlId_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        SensorMovableTargetsBoundingBoxes (SensorMovableTargetsBoundingBoxes&&) = default;
        SensorMovableTargetsBoundingBoxes& operator=(SensorMovableTargetsBoundingBoxes&&) = default;
        SensorMovableTargetsBoundingBoxes& operator=(const SensorMovableTargetsBoundingBoxes&) = default;
        SensorMovableTargetsBoundingBoxes(const SensorMovableTargetsBoundingBoxes&) = default;
        #else
        SensorMovableTargetsBoundingBoxes(SensorMovableTargetsBoundingBoxes&& other_) OMG_NOEXCEPT;  
        SensorMovableTargetsBoundingBoxes& operator=(SensorMovableTargetsBoundingBoxes&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        dds::core::vector<IndyDS::SensorTargetBBox>& boundingBoxesArray() OMG_NOEXCEPT; 
        const dds::core::vector<IndyDS::SensorTargetBBox>& boundingBoxesArray() const OMG_NOEXCEPT;
        void boundingBoxesArray(const dds::core::vector<IndyDS::SensorTargetBBox>& value);

        int32_t globalId() const OMG_NOEXCEPT;
        void globalId(int32_t value);

        double timeOfUpdate() const OMG_NOEXCEPT;
        void timeOfUpdate(double value);

        int16_t vhlId() const OMG_NOEXCEPT;
        void vhlId(int16_t value);

        bool operator == (const SensorMovableTargetsBoundingBoxes& other_) const;
        bool operator != (const SensorMovableTargetsBoundingBoxes& other_) const;

        void swap(SensorMovableTargetsBoundingBoxes& other_) OMG_NOEXCEPT;

      private:

        dds::core::vector<IndyDS::SensorTargetBBox> m_boundingBoxesArray_;
        int32_t m_globalId_;
        double m_timeOfUpdate_;
        int16_t m_vhlId_;

    };

    inline void swap(SensorMovableTargetsBoundingBoxes& a, SensorMovableTargetsBoundingBoxes& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const SensorMovableTargetsBoundingBoxes& sample);

    class NDDSUSERDllExport GPS {

      public:
        GPS();

        GPS(
            double altitude_param,
            int32_t globalId_param,
            float hdop_param,
            double lastUpdate_param,
            double latitude_param,
            double longitude_param,
            int16_t satellites_param,
            int16_t sensorId_param,
            int16_t vhlId_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        GPS (GPS&&) = default;
        GPS& operator=(GPS&&) = default;
        GPS& operator=(const GPS&) = default;
        GPS(const GPS&) = default;
        #else
        GPS(GPS&& other_) OMG_NOEXCEPT;  
        GPS& operator=(GPS&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        double altitude() const OMG_NOEXCEPT;
        void altitude(double value);

        int32_t globalId() const OMG_NOEXCEPT;
        void globalId(int32_t value);

        float hdop() const OMG_NOEXCEPT;
        void hdop(float value);

        double lastUpdate() const OMG_NOEXCEPT;
        void lastUpdate(double value);

        double latitude() const OMG_NOEXCEPT;
        void latitude(double value);

        double longitude() const OMG_NOEXCEPT;
        void longitude(double value);

        int16_t satellites() const OMG_NOEXCEPT;
        void satellites(int16_t value);

        int16_t sensorId() const OMG_NOEXCEPT;
        void sensorId(int16_t value);

        int16_t vhlId() const OMG_NOEXCEPT;
        void vhlId(int16_t value);

        bool operator == (const GPS& other_) const;
        bool operator != (const GPS& other_) const;

        void swap(GPS& other_) OMG_NOEXCEPT;

      private:

        double m_altitude_;
        int32_t m_globalId_;
        float m_hdop_;
        double m_lastUpdate_;
        double m_latitude_;
        double m_longitude_;
        int16_t m_satellites_;
        int16_t m_sensorId_;
        int16_t m_vhlId_;

    };

    inline void swap(GPS& a, GPS& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const GPS& sample);

    class NDDSUSERDllExport LaserMeterPoint {

      public:
        LaserMeterPoint();

        LaserMeterPoint(
            uint8_t hit_param,
            float Hangle_param,
            float Vangle_param,
            double absposx_param,
            double absposy_param,
            double absposz_param,
            float relposx_param,
            float relposy_param,
            float relposz_param,
            float distance_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        LaserMeterPoint (LaserMeterPoint&&) = default;
        LaserMeterPoint& operator=(LaserMeterPoint&&) = default;
        LaserMeterPoint& operator=(const LaserMeterPoint&) = default;
        LaserMeterPoint(const LaserMeterPoint&) = default;
        #else
        LaserMeterPoint(LaserMeterPoint&& other_) OMG_NOEXCEPT;  
        LaserMeterPoint& operator=(LaserMeterPoint&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        uint8_t hit() const OMG_NOEXCEPT;
        void hit(uint8_t value);

        float Hangle() const OMG_NOEXCEPT;
        void Hangle(float value);

        float Vangle() const OMG_NOEXCEPT;
        void Vangle(float value);

        double absposx() const OMG_NOEXCEPT;
        void absposx(double value);

        double absposy() const OMG_NOEXCEPT;
        void absposy(double value);

        double absposz() const OMG_NOEXCEPT;
        void absposz(double value);

        float relposx() const OMG_NOEXCEPT;
        void relposx(float value);

        float relposy() const OMG_NOEXCEPT;
        void relposy(float value);

        float relposz() const OMG_NOEXCEPT;
        void relposz(float value);

        float distance() const OMG_NOEXCEPT;
        void distance(float value);

        bool operator == (const LaserMeterPoint& other_) const;
        bool operator != (const LaserMeterPoint& other_) const;

        void swap(LaserMeterPoint& other_) OMG_NOEXCEPT;

      private:

        uint8_t m_hit_;
        float m_Hangle_;
        float m_Vangle_;
        double m_absposx_;
        double m_absposy_;
        double m_absposz_;
        float m_relposx_;
        float m_relposy_;
        float m_relposz_;
        float m_distance_;

    };

    inline void swap(LaserMeterPoint& a, LaserMeterPoint& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const LaserMeterPoint& sample);

    class NDDSUSERDllExport LaserMeter {

      public:
        LaserMeter();

        LaserMeter(
            int16_t frameCount_param,
            int32_t globalId_param,
            double lastUpdate_param,
            int16_t nearestPoint_param,
            const dds::core::vector<IndyDS::LaserMeterPoint>& resultArray_param,
            int16_t sensorId_param,
            int16_t vhlId_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        LaserMeter (LaserMeter&&) = default;
        LaserMeter& operator=(LaserMeter&&) = default;
        LaserMeter& operator=(const LaserMeter&) = default;
        LaserMeter(const LaserMeter&) = default;
        #else
        LaserMeter(LaserMeter&& other_) OMG_NOEXCEPT;  
        LaserMeter& operator=(LaserMeter&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int16_t frameCount() const OMG_NOEXCEPT;
        void frameCount(int16_t value);

        int32_t globalId() const OMG_NOEXCEPT;
        void globalId(int32_t value);

        double lastUpdate() const OMG_NOEXCEPT;
        void lastUpdate(double value);

        int16_t nearestPoint() const OMG_NOEXCEPT;
        void nearestPoint(int16_t value);

        dds::core::vector<IndyDS::LaserMeterPoint>& resultArray() OMG_NOEXCEPT; 
        const dds::core::vector<IndyDS::LaserMeterPoint>& resultArray() const OMG_NOEXCEPT;
        void resultArray(const dds::core::vector<IndyDS::LaserMeterPoint>& value);

        int16_t sensorId() const OMG_NOEXCEPT;
        void sensorId(int16_t value);

        int16_t vhlId() const OMG_NOEXCEPT;
        void vhlId(int16_t value);

        bool operator == (const LaserMeter& other_) const;
        bool operator != (const LaserMeter& other_) const;

        void swap(LaserMeter& other_) OMG_NOEXCEPT;

      private:

        int16_t m_frameCount_;
        int32_t m_globalId_;
        double m_lastUpdate_;
        int16_t m_nearestPoint_;
        dds::core::vector<IndyDS::LaserMeterPoint> m_resultArray_;
        int16_t m_sensorId_;
        int16_t m_vhlId_;

    };

    inline void swap(LaserMeter& a, LaserMeter& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const LaserMeter& sample);

    class NDDSUSERDllExport SensorMovableTarget {

      public:
        SensorMovableTarget();

        SensorMovableTarget(
            int16_t id_param,
            int16_t scanerId_param,
            int16_t detectionStatus_param,
            int16_t type__param,
            int16_t beamIndex_param,
            double existenceTime_param,
            int16_t anchorPoint_param,
            int16_t referenceFrame_param,
            double posXInChosenRef_param,
            double posYInChosenRef_param,
            double posZInChosenRef_param,
            float posHeadingInChosenRef_param,
            float posPitchInChosenRef_param,
            float posRollInChosenRef_param,
            float distanceToCollision_param,
            float azimuthInSensor_param,
            float elevationInSensor_param,
            float azimuthInVehicle_param,
            float elevationInVehicle_param,
            float absoluteSpeedX_param,
            float absoluteSpeedY_param,
            float absoluteSpeedZ_param,
            float absoluteAngularSpeedH_param,
            float absoluteAngularSpeedP_param,
            float absoluteAngularSpeedR_param,
            float relativeSpeedX_param,
            float relativeSpeedY_param,
            float relativeSpeedZ_param,
            float relativeAngularSpeedH_param,
            float relativeAngularSpeedP_param,
            float relativeAngularSpeedR_param,
            float absoluteAccelX_param,
            float absoluteAccelY_param,
            float absoluteAccelZ_param,
            float relativeAccelX_param,
            float relativeAccelY_param,
            float relativeAccelZ_param,
            float length_param,
            float width_param,
            float height_param,
            float visibility_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        SensorMovableTarget (SensorMovableTarget&&) = default;
        SensorMovableTarget& operator=(SensorMovableTarget&&) = default;
        SensorMovableTarget& operator=(const SensorMovableTarget&) = default;
        SensorMovableTarget(const SensorMovableTarget&) = default;
        #else
        SensorMovableTarget(SensorMovableTarget&& other_) OMG_NOEXCEPT;  
        SensorMovableTarget& operator=(SensorMovableTarget&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int16_t id() const OMG_NOEXCEPT;
        void id(int16_t value);

        int16_t scanerId() const OMG_NOEXCEPT;
        void scanerId(int16_t value);

        int16_t detectionStatus() const OMG_NOEXCEPT;
        void detectionStatus(int16_t value);

        int16_t type_() const OMG_NOEXCEPT;
        void type_(int16_t value);

        int16_t beamIndex() const OMG_NOEXCEPT;
        void beamIndex(int16_t value);

        double existenceTime() const OMG_NOEXCEPT;
        void existenceTime(double value);

        int16_t anchorPoint() const OMG_NOEXCEPT;
        void anchorPoint(int16_t value);

        int16_t referenceFrame() const OMG_NOEXCEPT;
        void referenceFrame(int16_t value);

        double posXInChosenRef() const OMG_NOEXCEPT;
        void posXInChosenRef(double value);

        double posYInChosenRef() const OMG_NOEXCEPT;
        void posYInChosenRef(double value);

        double posZInChosenRef() const OMG_NOEXCEPT;
        void posZInChosenRef(double value);

        float posHeadingInChosenRef() const OMG_NOEXCEPT;
        void posHeadingInChosenRef(float value);

        float posPitchInChosenRef() const OMG_NOEXCEPT;
        void posPitchInChosenRef(float value);

        float posRollInChosenRef() const OMG_NOEXCEPT;
        void posRollInChosenRef(float value);

        float distanceToCollision() const OMG_NOEXCEPT;
        void distanceToCollision(float value);

        float azimuthInSensor() const OMG_NOEXCEPT;
        void azimuthInSensor(float value);

        float elevationInSensor() const OMG_NOEXCEPT;
        void elevationInSensor(float value);

        float azimuthInVehicle() const OMG_NOEXCEPT;
        void azimuthInVehicle(float value);

        float elevationInVehicle() const OMG_NOEXCEPT;
        void elevationInVehicle(float value);

        float absoluteSpeedX() const OMG_NOEXCEPT;
        void absoluteSpeedX(float value);

        float absoluteSpeedY() const OMG_NOEXCEPT;
        void absoluteSpeedY(float value);

        float absoluteSpeedZ() const OMG_NOEXCEPT;
        void absoluteSpeedZ(float value);

        float absoluteAngularSpeedH() const OMG_NOEXCEPT;
        void absoluteAngularSpeedH(float value);

        float absoluteAngularSpeedP() const OMG_NOEXCEPT;
        void absoluteAngularSpeedP(float value);

        float absoluteAngularSpeedR() const OMG_NOEXCEPT;
        void absoluteAngularSpeedR(float value);

        float relativeSpeedX() const OMG_NOEXCEPT;
        void relativeSpeedX(float value);

        float relativeSpeedY() const OMG_NOEXCEPT;
        void relativeSpeedY(float value);

        float relativeSpeedZ() const OMG_NOEXCEPT;
        void relativeSpeedZ(float value);

        float relativeAngularSpeedH() const OMG_NOEXCEPT;
        void relativeAngularSpeedH(float value);

        float relativeAngularSpeedP() const OMG_NOEXCEPT;
        void relativeAngularSpeedP(float value);

        float relativeAngularSpeedR() const OMG_NOEXCEPT;
        void relativeAngularSpeedR(float value);

        float absoluteAccelX() const OMG_NOEXCEPT;
        void absoluteAccelX(float value);

        float absoluteAccelY() const OMG_NOEXCEPT;
        void absoluteAccelY(float value);

        float absoluteAccelZ() const OMG_NOEXCEPT;
        void absoluteAccelZ(float value);

        float relativeAccelX() const OMG_NOEXCEPT;
        void relativeAccelX(float value);

        float relativeAccelY() const OMG_NOEXCEPT;
        void relativeAccelY(float value);

        float relativeAccelZ() const OMG_NOEXCEPT;
        void relativeAccelZ(float value);

        float length() const OMG_NOEXCEPT;
        void length(float value);

        float width() const OMG_NOEXCEPT;
        void width(float value);

        float height() const OMG_NOEXCEPT;
        void height(float value);

        float visibility() const OMG_NOEXCEPT;
        void visibility(float value);

        bool operator == (const SensorMovableTarget& other_) const;
        bool operator != (const SensorMovableTarget& other_) const;

        void swap(SensorMovableTarget& other_) OMG_NOEXCEPT;

      private:

        int16_t m_id_;
        int16_t m_scanerId_;
        int16_t m_detectionStatus_;
        int16_t m_type__;
        int16_t m_beamIndex_;
        double m_existenceTime_;
        int16_t m_anchorPoint_;
        int16_t m_referenceFrame_;
        double m_posXInChosenRef_;
        double m_posYInChosenRef_;
        double m_posZInChosenRef_;
        float m_posHeadingInChosenRef_;
        float m_posPitchInChosenRef_;
        float m_posRollInChosenRef_;
        float m_distanceToCollision_;
        float m_azimuthInSensor_;
        float m_elevationInSensor_;
        float m_azimuthInVehicle_;
        float m_elevationInVehicle_;
        float m_absoluteSpeedX_;
        float m_absoluteSpeedY_;
        float m_absoluteSpeedZ_;
        float m_absoluteAngularSpeedH_;
        float m_absoluteAngularSpeedP_;
        float m_absoluteAngularSpeedR_;
        float m_relativeSpeedX_;
        float m_relativeSpeedY_;
        float m_relativeSpeedZ_;
        float m_relativeAngularSpeedH_;
        float m_relativeAngularSpeedP_;
        float m_relativeAngularSpeedR_;
        float m_absoluteAccelX_;
        float m_absoluteAccelY_;
        float m_absoluteAccelZ_;
        float m_relativeAccelX_;
        float m_relativeAccelY_;
        float m_relativeAccelZ_;
        float m_length_;
        float m_width_;
        float m_height_;
        float m_visibility_;

    };

    inline void swap(SensorMovableTarget& a, SensorMovableTarget& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const SensorMovableTarget& sample);

    class NDDSUSERDllExport SensorMovableTargets {

      public:
        SensorMovableTargets();

        SensorMovableTargets(
            int16_t egoVhlId_param,
            int32_t globalId_param,
            int16_t nearestTarget_param,
            const dds::core::vector<IndyDS::SensorMovableTarget>& targetsArray_param,
            double timeOfUpdate_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        SensorMovableTargets (SensorMovableTargets&&) = default;
        SensorMovableTargets& operator=(SensorMovableTargets&&) = default;
        SensorMovableTargets& operator=(const SensorMovableTargets&) = default;
        SensorMovableTargets(const SensorMovableTargets&) = default;
        #else
        SensorMovableTargets(SensorMovableTargets&& other_) OMG_NOEXCEPT;  
        SensorMovableTargets& operator=(SensorMovableTargets&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int16_t egoVhlId() const OMG_NOEXCEPT;
        void egoVhlId(int16_t value);

        int32_t globalId() const OMG_NOEXCEPT;
        void globalId(int32_t value);

        int16_t nearestTarget() const OMG_NOEXCEPT;
        void nearestTarget(int16_t value);

        dds::core::vector<IndyDS::SensorMovableTarget>& targetsArray() OMG_NOEXCEPT; 
        const dds::core::vector<IndyDS::SensorMovableTarget>& targetsArray() const OMG_NOEXCEPT;
        void targetsArray(const dds::core::vector<IndyDS::SensorMovableTarget>& value);

        double timeOfUpdate() const OMG_NOEXCEPT;
        void timeOfUpdate(double value);

        bool operator == (const SensorMovableTargets& other_) const;
        bool operator != (const SensorMovableTargets& other_) const;

        void swap(SensorMovableTargets& other_) OMG_NOEXCEPT;

      private:

        int16_t m_egoVhlId_;
        int32_t m_globalId_;
        int16_t m_nearestTarget_;
        dds::core::vector<IndyDS::SensorMovableTarget> m_targetsArray_;
        double m_timeOfUpdate_;

    };

    inline void swap(SensorMovableTargets& a, SensorMovableTargets& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const SensorMovableTargets& sample);

    class NDDSUSERDllExport CabToModelCorrective {

      public:
        CabToModelCorrective();

        CabToModelCorrective(
            double AcceleratorAdditive_param,
            double AcceleratorMultiplicative_param,
            double BrakeAdditive_param,
            double BrakeMultiplicative_param,
            double ClutchAdditive_param,
            double ClutchMultiplicative_param,
            int16_t GearboxAutoMode_param,
            uint8_t GearboxTakeOver_param,
            uint8_t IsRatioLimit_param,
            int16_t MaxRatio_param,
            int16_t MinRatio_param,
            double ParkingBrakeAdditive_param,
            double ParkingBrakeMultiplicative_param,
            uint8_t ShiftDown_param,
            uint8_t ShiftUp_param,
            double TimeOfUpdate_param,
            int16_t WantedGear_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        CabToModelCorrective (CabToModelCorrective&&) = default;
        CabToModelCorrective& operator=(CabToModelCorrective&&) = default;
        CabToModelCorrective& operator=(const CabToModelCorrective&) = default;
        CabToModelCorrective(const CabToModelCorrective&) = default;
        #else
        CabToModelCorrective(CabToModelCorrective&& other_) OMG_NOEXCEPT;  
        CabToModelCorrective& operator=(CabToModelCorrective&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        double AcceleratorAdditive() const OMG_NOEXCEPT;
        void AcceleratorAdditive(double value);

        double AcceleratorMultiplicative() const OMG_NOEXCEPT;
        void AcceleratorMultiplicative(double value);

        double BrakeAdditive() const OMG_NOEXCEPT;
        void BrakeAdditive(double value);

        double BrakeMultiplicative() const OMG_NOEXCEPT;
        void BrakeMultiplicative(double value);

        double ClutchAdditive() const OMG_NOEXCEPT;
        void ClutchAdditive(double value);

        double ClutchMultiplicative() const OMG_NOEXCEPT;
        void ClutchMultiplicative(double value);

        int16_t GearboxAutoMode() const OMG_NOEXCEPT;
        void GearboxAutoMode(int16_t value);

        uint8_t GearboxTakeOver() const OMG_NOEXCEPT;
        void GearboxTakeOver(uint8_t value);

        uint8_t IsRatioLimit() const OMG_NOEXCEPT;
        void IsRatioLimit(uint8_t value);

        int16_t MaxRatio() const OMG_NOEXCEPT;
        void MaxRatio(int16_t value);

        int16_t MinRatio() const OMG_NOEXCEPT;
        void MinRatio(int16_t value);

        double ParkingBrakeAdditive() const OMG_NOEXCEPT;
        void ParkingBrakeAdditive(double value);

        double ParkingBrakeMultiplicative() const OMG_NOEXCEPT;
        void ParkingBrakeMultiplicative(double value);

        uint8_t ShiftDown() const OMG_NOEXCEPT;
        void ShiftDown(uint8_t value);

        uint8_t ShiftUp() const OMG_NOEXCEPT;
        void ShiftUp(uint8_t value);

        double TimeOfUpdate() const OMG_NOEXCEPT;
        void TimeOfUpdate(double value);

        int16_t WantedGear() const OMG_NOEXCEPT;
        void WantedGear(int16_t value);

        bool operator == (const CabToModelCorrective& other_) const;
        bool operator != (const CabToModelCorrective& other_) const;

        void swap(CabToModelCorrective& other_) OMG_NOEXCEPT;

      private:

        double m_AcceleratorAdditive_;
        double m_AcceleratorMultiplicative_;
        double m_BrakeAdditive_;
        double m_BrakeMultiplicative_;
        double m_ClutchAdditive_;
        double m_ClutchMultiplicative_;
        int16_t m_GearboxAutoMode_;
        uint8_t m_GearboxTakeOver_;
        uint8_t m_IsRatioLimit_;
        int16_t m_MaxRatio_;
        int16_t m_MinRatio_;
        double m_ParkingBrakeAdditive_;
        double m_ParkingBrakeMultiplicative_;
        uint8_t m_ShiftDown_;
        uint8_t m_ShiftUp_;
        double m_TimeOfUpdate_;
        int16_t m_WantedGear_;

    };

    inline void swap(CabToModelCorrective& a, CabToModelCorrective& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const CabToModelCorrective& sample);

    class NDDSUSERDllExport CabToSteeringCorrective {

      public:
        CabToSteeringCorrective();

        CabToSteeringCorrective(
            double AdditiveSteeringWheelAccel_param,
            double AdditiveSteeringWheelAngle_param,
            double AdditiveSteeringWheelSpeed_param,
            double AdditiveSteeringWheelTorque_param,
            double MultiplicativeSteeringWheelAccel_param,
            double MultiplicativeSteeringWheelAngle_param,
            double MultiplicativeSteeringWheelSpeed_param,
            double MultiplicativeSteeringWheelTorque_param,
            double TimeOfUpdate_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        CabToSteeringCorrective (CabToSteeringCorrective&&) = default;
        CabToSteeringCorrective& operator=(CabToSteeringCorrective&&) = default;
        CabToSteeringCorrective& operator=(const CabToSteeringCorrective&) = default;
        CabToSteeringCorrective(const CabToSteeringCorrective&) = default;
        #else
        CabToSteeringCorrective(CabToSteeringCorrective&& other_) OMG_NOEXCEPT;  
        CabToSteeringCorrective& operator=(CabToSteeringCorrective&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        double AdditiveSteeringWheelAccel() const OMG_NOEXCEPT;
        void AdditiveSteeringWheelAccel(double value);

        double AdditiveSteeringWheelAngle() const OMG_NOEXCEPT;
        void AdditiveSteeringWheelAngle(double value);

        double AdditiveSteeringWheelSpeed() const OMG_NOEXCEPT;
        void AdditiveSteeringWheelSpeed(double value);

        double AdditiveSteeringWheelTorque() const OMG_NOEXCEPT;
        void AdditiveSteeringWheelTorque(double value);

        double MultiplicativeSteeringWheelAccel() const OMG_NOEXCEPT;
        void MultiplicativeSteeringWheelAccel(double value);

        double MultiplicativeSteeringWheelAngle() const OMG_NOEXCEPT;
        void MultiplicativeSteeringWheelAngle(double value);

        double MultiplicativeSteeringWheelSpeed() const OMG_NOEXCEPT;
        void MultiplicativeSteeringWheelSpeed(double value);

        double MultiplicativeSteeringWheelTorque() const OMG_NOEXCEPT;
        void MultiplicativeSteeringWheelTorque(double value);

        double TimeOfUpdate() const OMG_NOEXCEPT;
        void TimeOfUpdate(double value);

        bool operator == (const CabToSteeringCorrective& other_) const;
        bool operator != (const CabToSteeringCorrective& other_) const;

        void swap(CabToSteeringCorrective& other_) OMG_NOEXCEPT;

      private:

        double m_AdditiveSteeringWheelAccel_;
        double m_AdditiveSteeringWheelAngle_;
        double m_AdditiveSteeringWheelSpeed_;
        double m_AdditiveSteeringWheelTorque_;
        double m_MultiplicativeSteeringWheelAccel_;
        double m_MultiplicativeSteeringWheelAngle_;
        double m_MultiplicativeSteeringWheelSpeed_;
        double m_MultiplicativeSteeringWheelTorque_;
        double m_TimeOfUpdate_;

    };

    inline void swap(CabToSteeringCorrective& a, CabToSteeringCorrective& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const CabToSteeringCorrective& sample);

    class NDDSUSERDllExport VehicleOutput {

      public:
        VehicleOutput();

        VehicleOutput(
            const dds::core::array<double, 512>& CustomOutput_param,
            double EngineSpeed_param,
            uint8_t EngineState_param,
            int32_t GearBoxMode_param,
            int32_t GearEngaged_param,
            const dds::core::array<int32_t, 4>& GroundIndex_param,
            const dds::core::array<double, 4>& LSR_param,
            double SteeringWheelAccel_param,
            double SteeringWheelAngle_param,
            double SteeringWheelSpeed_param,
            double SteeringWheelTorque_param,
            double TimeOfUpdate_param,
            double TraveledDistance_param,
            const dds::core::array<uint8_t, 4>& absIsActive_param,
            int32_t auxiliaryLights_param,
            double brakePedal_param,
            double brakeRetarderNotch_param,
            const dds::core::array<double, 4>& brakeTemperature_param,
            double cdgAccel_heading_param,
            double cdgAccel_pitch_param,
            double cdgAccel_roll_param,
            double cdgAccel_x_param,
            double cdgAccel_y_param,
            double cdgAccel_z_param,
            double cdgPos_heading_param,
            double cdgPos_pitch_param,
            double cdgPos_roll_param,
            double cdgPos_x_param,
            double cdgPos_y_param,
            double cdgPos_z_param,
            double cdgSpeed_heading_param,
            double cdgSpeed_pitch_param,
            double cdgSpeed_roll_param,
            double cdgSpeed_x_param,
            double cdgSpeed_y_param,
            double cdgSpeed_z_param,
            double clutchPedal_param,
            double consumption_param,
            const dds::core::array<double, 4>& contactPoint_x_param,
            const dds::core::array<double, 4>& contactPoint_y_param,
            const dds::core::array<double, 4>& contactPoint_z_param,
            int32_t effectiveIgnitionKeyPosition_param,
            uint8_t forceLockup_param,
            double gasPedal_param,
            const dds::core::array<double, 4>& grip_param,
            const dds::core::array<double, 4>& groundNormal_x_param,
            const dds::core::array<double, 4>& groundNormal_y_param,
            const dds::core::array<double, 4>& groundNormal_z_param,
            const dds::core::array<int32_t, 4>& groundType_param,
            double handBrake_param,
            const dds::core::array<double, 4>& hubPosition_heading_param,
            const dds::core::array<double, 4>& hubPosition_pitch_param,
            const dds::core::array<double, 4>& hubPosition_roll_param,
            const dds::core::array<double, 4>& hubPosition_x_param,
            const dds::core::array<double, 4>& hubPosition_y_param,
            const dds::core::array<double, 4>& hubPosition_z_param,
            uint8_t isEngineRetarder_param,
            const dds::core::array<uint8_t, 4>& isInContact_param,
            const dds::core::array<int32_t, 4>& laneType_param,
            int32_t lights_param,
            int32_t lockDiffMode_param,
            int32_t plowMode_param,
            double pollution_param,
            const dds::core::array<double, 4>& roughnessHeight_param,
            const dds::core::array<double, 4>& roughnessHeightStdDeviation_param,
            const dds::core::array<double, 4>& roughnessLength_param,
            const dds::core::array<double, 4>& roughnessLengthStdDeviation_param,
            int32_t sirens_param,
            const dds::core::array<double, 4>& slipAngle_param,
            const dds::core::array<double, 4>& tireForce_x_param,
            const dds::core::array<double, 4>& tireForce_y_param,
            const dds::core::array<double, 4>& tireForce_z_param,
            double trailerBrake_param,
            int32_t transferChoice_param,
            const dds::core::array<double, 4>& waterHeight_param,
            const dds::core::array<double, 4>& wheelRotation_param,
            const dds::core::array<double, 4>& wheelRotationSpeed_param);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        VehicleOutput (VehicleOutput&&) = default;
        VehicleOutput& operator=(VehicleOutput&&) = default;
        VehicleOutput& operator=(const VehicleOutput&) = default;
        VehicleOutput(const VehicleOutput&) = default;
        #else
        VehicleOutput(VehicleOutput&& other_) OMG_NOEXCEPT;  
        VehicleOutput& operator=(VehicleOutput&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        dds::core::array<double, 512>& CustomOutput() OMG_NOEXCEPT; 
        const dds::core::array<double, 512>& CustomOutput() const OMG_NOEXCEPT;
        void CustomOutput(const dds::core::array<double, 512>& value);

        double EngineSpeed() const OMG_NOEXCEPT;
        void EngineSpeed(double value);

        uint8_t EngineState() const OMG_NOEXCEPT;
        void EngineState(uint8_t value);

        int32_t GearBoxMode() const OMG_NOEXCEPT;
        void GearBoxMode(int32_t value);

        int32_t GearEngaged() const OMG_NOEXCEPT;
        void GearEngaged(int32_t value);

        dds::core::array<int32_t, 4>& GroundIndex() OMG_NOEXCEPT; 
        const dds::core::array<int32_t, 4>& GroundIndex() const OMG_NOEXCEPT;
        void GroundIndex(const dds::core::array<int32_t, 4>& value);

        dds::core::array<double, 4>& LSR() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& LSR() const OMG_NOEXCEPT;
        void LSR(const dds::core::array<double, 4>& value);

        double SteeringWheelAccel() const OMG_NOEXCEPT;
        void SteeringWheelAccel(double value);

        double SteeringWheelAngle() const OMG_NOEXCEPT;
        void SteeringWheelAngle(double value);

        double SteeringWheelSpeed() const OMG_NOEXCEPT;
        void SteeringWheelSpeed(double value);

        double SteeringWheelTorque() const OMG_NOEXCEPT;
        void SteeringWheelTorque(double value);

        double TimeOfUpdate() const OMG_NOEXCEPT;
        void TimeOfUpdate(double value);

        double TraveledDistance() const OMG_NOEXCEPT;
        void TraveledDistance(double value);

        dds::core::array<uint8_t, 4>& absIsActive() OMG_NOEXCEPT; 
        const dds::core::array<uint8_t, 4>& absIsActive() const OMG_NOEXCEPT;
        void absIsActive(const dds::core::array<uint8_t, 4>& value);

        int32_t auxiliaryLights() const OMG_NOEXCEPT;
        void auxiliaryLights(int32_t value);

        double brakePedal() const OMG_NOEXCEPT;
        void brakePedal(double value);

        double brakeRetarderNotch() const OMG_NOEXCEPT;
        void brakeRetarderNotch(double value);

        dds::core::array<double, 4>& brakeTemperature() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& brakeTemperature() const OMG_NOEXCEPT;
        void brakeTemperature(const dds::core::array<double, 4>& value);

        double cdgAccel_heading() const OMG_NOEXCEPT;
        void cdgAccel_heading(double value);

        double cdgAccel_pitch() const OMG_NOEXCEPT;
        void cdgAccel_pitch(double value);

        double cdgAccel_roll() const OMG_NOEXCEPT;
        void cdgAccel_roll(double value);

        double cdgAccel_x() const OMG_NOEXCEPT;
        void cdgAccel_x(double value);

        double cdgAccel_y() const OMG_NOEXCEPT;
        void cdgAccel_y(double value);

        double cdgAccel_z() const OMG_NOEXCEPT;
        void cdgAccel_z(double value);

        double cdgPos_heading() const OMG_NOEXCEPT;
        void cdgPos_heading(double value);

        double cdgPos_pitch() const OMG_NOEXCEPT;
        void cdgPos_pitch(double value);

        double cdgPos_roll() const OMG_NOEXCEPT;
        void cdgPos_roll(double value);

        double cdgPos_x() const OMG_NOEXCEPT;
        void cdgPos_x(double value);

        double cdgPos_y() const OMG_NOEXCEPT;
        void cdgPos_y(double value);

        double cdgPos_z() const OMG_NOEXCEPT;
        void cdgPos_z(double value);

        double cdgSpeed_heading() const OMG_NOEXCEPT;
        void cdgSpeed_heading(double value);

        double cdgSpeed_pitch() const OMG_NOEXCEPT;
        void cdgSpeed_pitch(double value);

        double cdgSpeed_roll() const OMG_NOEXCEPT;
        void cdgSpeed_roll(double value);

        double cdgSpeed_x() const OMG_NOEXCEPT;
        void cdgSpeed_x(double value);

        double cdgSpeed_y() const OMG_NOEXCEPT;
        void cdgSpeed_y(double value);

        double cdgSpeed_z() const OMG_NOEXCEPT;
        void cdgSpeed_z(double value);

        double clutchPedal() const OMG_NOEXCEPT;
        void clutchPedal(double value);

        double consumption() const OMG_NOEXCEPT;
        void consumption(double value);

        dds::core::array<double, 4>& contactPoint_x() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& contactPoint_x() const OMG_NOEXCEPT;
        void contactPoint_x(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& contactPoint_y() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& contactPoint_y() const OMG_NOEXCEPT;
        void contactPoint_y(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& contactPoint_z() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& contactPoint_z() const OMG_NOEXCEPT;
        void contactPoint_z(const dds::core::array<double, 4>& value);

        int32_t effectiveIgnitionKeyPosition() const OMG_NOEXCEPT;
        void effectiveIgnitionKeyPosition(int32_t value);

        uint8_t forceLockup() const OMG_NOEXCEPT;
        void forceLockup(uint8_t value);

        double gasPedal() const OMG_NOEXCEPT;
        void gasPedal(double value);

        dds::core::array<double, 4>& grip() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& grip() const OMG_NOEXCEPT;
        void grip(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& groundNormal_x() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& groundNormal_x() const OMG_NOEXCEPT;
        void groundNormal_x(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& groundNormal_y() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& groundNormal_y() const OMG_NOEXCEPT;
        void groundNormal_y(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& groundNormal_z() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& groundNormal_z() const OMG_NOEXCEPT;
        void groundNormal_z(const dds::core::array<double, 4>& value);

        dds::core::array<int32_t, 4>& groundType() OMG_NOEXCEPT; 
        const dds::core::array<int32_t, 4>& groundType() const OMG_NOEXCEPT;
        void groundType(const dds::core::array<int32_t, 4>& value);

        double handBrake() const OMG_NOEXCEPT;
        void handBrake(double value);

        dds::core::array<double, 4>& hubPosition_heading() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& hubPosition_heading() const OMG_NOEXCEPT;
        void hubPosition_heading(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& hubPosition_pitch() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& hubPosition_pitch() const OMG_NOEXCEPT;
        void hubPosition_pitch(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& hubPosition_roll() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& hubPosition_roll() const OMG_NOEXCEPT;
        void hubPosition_roll(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& hubPosition_x() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& hubPosition_x() const OMG_NOEXCEPT;
        void hubPosition_x(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& hubPosition_y() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& hubPosition_y() const OMG_NOEXCEPT;
        void hubPosition_y(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& hubPosition_z() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& hubPosition_z() const OMG_NOEXCEPT;
        void hubPosition_z(const dds::core::array<double, 4>& value);

        uint8_t isEngineRetarder() const OMG_NOEXCEPT;
        void isEngineRetarder(uint8_t value);

        dds::core::array<uint8_t, 4>& isInContact() OMG_NOEXCEPT; 
        const dds::core::array<uint8_t, 4>& isInContact() const OMG_NOEXCEPT;
        void isInContact(const dds::core::array<uint8_t, 4>& value);

        dds::core::array<int32_t, 4>& laneType() OMG_NOEXCEPT; 
        const dds::core::array<int32_t, 4>& laneType() const OMG_NOEXCEPT;
        void laneType(const dds::core::array<int32_t, 4>& value);

        int32_t lights() const OMG_NOEXCEPT;
        void lights(int32_t value);

        int32_t lockDiffMode() const OMG_NOEXCEPT;
        void lockDiffMode(int32_t value);

        int32_t plowMode() const OMG_NOEXCEPT;
        void plowMode(int32_t value);

        double pollution() const OMG_NOEXCEPT;
        void pollution(double value);

        dds::core::array<double, 4>& roughnessHeight() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& roughnessHeight() const OMG_NOEXCEPT;
        void roughnessHeight(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& roughnessHeightStdDeviation() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& roughnessHeightStdDeviation() const OMG_NOEXCEPT;
        void roughnessHeightStdDeviation(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& roughnessLength() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& roughnessLength() const OMG_NOEXCEPT;
        void roughnessLength(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& roughnessLengthStdDeviation() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& roughnessLengthStdDeviation() const OMG_NOEXCEPT;
        void roughnessLengthStdDeviation(const dds::core::array<double, 4>& value);

        int32_t sirens() const OMG_NOEXCEPT;
        void sirens(int32_t value);

        dds::core::array<double, 4>& slipAngle() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& slipAngle() const OMG_NOEXCEPT;
        void slipAngle(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& tireForce_x() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& tireForce_x() const OMG_NOEXCEPT;
        void tireForce_x(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& tireForce_y() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& tireForce_y() const OMG_NOEXCEPT;
        void tireForce_y(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& tireForce_z() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& tireForce_z() const OMG_NOEXCEPT;
        void tireForce_z(const dds::core::array<double, 4>& value);

        double trailerBrake() const OMG_NOEXCEPT;
        void trailerBrake(double value);

        int32_t transferChoice() const OMG_NOEXCEPT;
        void transferChoice(int32_t value);

        dds::core::array<double, 4>& waterHeight() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& waterHeight() const OMG_NOEXCEPT;
        void waterHeight(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& wheelRotation() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& wheelRotation() const OMG_NOEXCEPT;
        void wheelRotation(const dds::core::array<double, 4>& value);

        dds::core::array<double, 4>& wheelRotationSpeed() OMG_NOEXCEPT; 
        const dds::core::array<double, 4>& wheelRotationSpeed() const OMG_NOEXCEPT;
        void wheelRotationSpeed(const dds::core::array<double, 4>& value);

        bool operator == (const VehicleOutput& other_) const;
        bool operator != (const VehicleOutput& other_) const;

        void swap(VehicleOutput& other_) OMG_NOEXCEPT;

      private:

        dds::core::array<double, 512> m_CustomOutput_;
        double m_EngineSpeed_;
        uint8_t m_EngineState_;
        int32_t m_GearBoxMode_;
        int32_t m_GearEngaged_;
        dds::core::array<int32_t, 4> m_GroundIndex_;
        dds::core::array<double, 4> m_LSR_;
        double m_SteeringWheelAccel_;
        double m_SteeringWheelAngle_;
        double m_SteeringWheelSpeed_;
        double m_SteeringWheelTorque_;
        double m_TimeOfUpdate_;
        double m_TraveledDistance_;
        dds::core::array<uint8_t, 4> m_absIsActive_;
        int32_t m_auxiliaryLights_;
        double m_brakePedal_;
        double m_brakeRetarderNotch_;
        dds::core::array<double, 4> m_brakeTemperature_;
        double m_cdgAccel_heading_;
        double m_cdgAccel_pitch_;
        double m_cdgAccel_roll_;
        double m_cdgAccel_x_;
        double m_cdgAccel_y_;
        double m_cdgAccel_z_;
        double m_cdgPos_heading_;
        double m_cdgPos_pitch_;
        double m_cdgPos_roll_;
        double m_cdgPos_x_;
        double m_cdgPos_y_;
        double m_cdgPos_z_;
        double m_cdgSpeed_heading_;
        double m_cdgSpeed_pitch_;
        double m_cdgSpeed_roll_;
        double m_cdgSpeed_x_;
        double m_cdgSpeed_y_;
        double m_cdgSpeed_z_;
        double m_clutchPedal_;
        double m_consumption_;
        dds::core::array<double, 4> m_contactPoint_x_;
        dds::core::array<double, 4> m_contactPoint_y_;
        dds::core::array<double, 4> m_contactPoint_z_;
        int32_t m_effectiveIgnitionKeyPosition_;
        uint8_t m_forceLockup_;
        double m_gasPedal_;
        dds::core::array<double, 4> m_grip_;
        dds::core::array<double, 4> m_groundNormal_x_;
        dds::core::array<double, 4> m_groundNormal_y_;
        dds::core::array<double, 4> m_groundNormal_z_;
        dds::core::array<int32_t, 4> m_groundType_;
        double m_handBrake_;
        dds::core::array<double, 4> m_hubPosition_heading_;
        dds::core::array<double, 4> m_hubPosition_pitch_;
        dds::core::array<double, 4> m_hubPosition_roll_;
        dds::core::array<double, 4> m_hubPosition_x_;
        dds::core::array<double, 4> m_hubPosition_y_;
        dds::core::array<double, 4> m_hubPosition_z_;
        uint8_t m_isEngineRetarder_;
        dds::core::array<uint8_t, 4> m_isInContact_;
        dds::core::array<int32_t, 4> m_laneType_;
        int32_t m_lights_;
        int32_t m_lockDiffMode_;
        int32_t m_plowMode_;
        double m_pollution_;
        dds::core::array<double, 4> m_roughnessHeight_;
        dds::core::array<double, 4> m_roughnessHeightStdDeviation_;
        dds::core::array<double, 4> m_roughnessLength_;
        dds::core::array<double, 4> m_roughnessLengthStdDeviation_;
        int32_t m_sirens_;
        dds::core::array<double, 4> m_slipAngle_;
        dds::core::array<double, 4> m_tireForce_x_;
        dds::core::array<double, 4> m_tireForce_y_;
        dds::core::array<double, 4> m_tireForce_z_;
        double m_trailerBrake_;
        int32_t m_transferChoice_;
        dds::core::array<double, 4> m_waterHeight_;
        dds::core::array<double, 4> m_wheelRotation_;
        dds::core::array<double, 4> m_wheelRotationSpeed_;

    };

    inline void swap(VehicleOutput& a, VehicleOutput& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const VehicleOutput& sample);

} // namespace IndyDS  
namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<IndyDS::RoadLinePolynom> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::RoadLinePolynom";
            }
        };

        template<>
        struct is_topic_type<IndyDS::RoadLinePolynom> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::RoadLinePolynom> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::RoadLinePolynom& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::RoadLinePolynom& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::RoadLinePolynom& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::RoadLinesPolynoms> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::RoadLinesPolynoms";
            }
        };

        template<>
        struct is_topic_type<IndyDS::RoadLinesPolynoms> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::RoadLinesPolynoms> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::RoadLinesPolynoms& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::RoadLinesPolynoms& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::RoadLinesPolynoms& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::SensorTargetBBox> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::SensorTargetBBox";
            }
        };

        template<>
        struct is_topic_type<IndyDS::SensorTargetBBox> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::SensorTargetBBox> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::SensorTargetBBox& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::SensorTargetBBox& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::SensorTargetBBox& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::SensorMovableTargetsBoundingBoxes> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::SensorMovableTargetsBoundingBoxes";
            }
        };

        template<>
        struct is_topic_type<IndyDS::SensorMovableTargetsBoundingBoxes> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::SensorMovableTargetsBoundingBoxes> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::SensorMovableTargetsBoundingBoxes& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::SensorMovableTargetsBoundingBoxes& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::SensorMovableTargetsBoundingBoxes& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::GPS> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::GPS";
            }
        };

        template<>
        struct is_topic_type<IndyDS::GPS> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::GPS> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::GPS& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::GPS& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::GPS& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::LaserMeterPoint> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::LaserMeterPoint";
            }
        };

        template<>
        struct is_topic_type<IndyDS::LaserMeterPoint> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::LaserMeterPoint> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::LaserMeterPoint& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::LaserMeterPoint& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::LaserMeterPoint& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::LaserMeter> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::LaserMeter";
            }
        };

        template<>
        struct is_topic_type<IndyDS::LaserMeter> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::LaserMeter> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::LaserMeter& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::LaserMeter& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::LaserMeter& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::SensorMovableTarget> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::SensorMovableTarget";
            }
        };

        template<>
        struct is_topic_type<IndyDS::SensorMovableTarget> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::SensorMovableTarget> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::SensorMovableTarget& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::SensorMovableTarget& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::SensorMovableTarget& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::SensorMovableTargets> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::SensorMovableTargets";
            }
        };

        template<>
        struct is_topic_type<IndyDS::SensorMovableTargets> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::SensorMovableTargets> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::SensorMovableTargets& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::SensorMovableTargets& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::SensorMovableTargets& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::CabToModelCorrective> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::CabToModelCorrective";
            }
        };

        template<>
        struct is_topic_type<IndyDS::CabToModelCorrective> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::CabToModelCorrective> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::CabToModelCorrective& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::CabToModelCorrective& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::CabToModelCorrective& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::CabToSteeringCorrective> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::CabToSteeringCorrective";
            }
        };

        template<>
        struct is_topic_type<IndyDS::CabToSteeringCorrective> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::CabToSteeringCorrective> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::CabToSteeringCorrective& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::CabToSteeringCorrective& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::CabToSteeringCorrective& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

        template<>
        struct topic_type_name<IndyDS::VehicleOutput> {
            NDDSUSERDllExport static std::string value() {
                return "IndyDS::VehicleOutput";
            }
        };

        template<>
        struct is_topic_type<IndyDS::VehicleOutput> : public dds::core::true_type {};

        template<>
        struct topic_type_support<IndyDS::VehicleOutput> {

            NDDSUSERDllExport static void initialize_sample(IndyDS::VehicleOutput& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const IndyDS::VehicleOutput& sample);

            NDDSUSERDllExport static void from_cdr_buffer(IndyDS::VehicleOutput& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<IndyDS::RoadLinePolynom> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::RoadLinePolynom> {
            typedef IndyDS_RoadLinePolynom_c type;
        };

        template<>
        struct dynamic_type<IndyDS::RoadLinesPolynoms> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::RoadLinesPolynoms> {
            typedef IndyDS_RoadLinesPolynoms_c type;
        };

        template<>
        struct dynamic_type<IndyDS::SensorTargetBBox> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::SensorTargetBBox> {
            typedef IndyDS_SensorTargetBBox_c type;
        };

        template<>
        struct dynamic_type<IndyDS::SensorMovableTargetsBoundingBoxes> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::SensorMovableTargetsBoundingBoxes> {
            typedef IndyDS_SensorMovableTargetsBoundingBoxes_c type;
        };

        template<>
        struct dynamic_type<IndyDS::GPS> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::GPS> {
            typedef IndyDS_GPS_c type;
        };

        template<>
        struct dynamic_type<IndyDS::LaserMeterPoint> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::LaserMeterPoint> {
            typedef IndyDS_LaserMeterPoint_c type;
        };

        template<>
        struct dynamic_type<IndyDS::LaserMeter> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::LaserMeter> {
            typedef IndyDS_LaserMeter_c type;
        };

        template<>
        struct dynamic_type<IndyDS::SensorMovableTarget> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::SensorMovableTarget> {
            typedef IndyDS_SensorMovableTarget_c type;
        };

        template<>
        struct dynamic_type<IndyDS::SensorMovableTargets> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::SensorMovableTargets> {
            typedef IndyDS_SensorMovableTargets_c type;
        };

        template<>
        struct dynamic_type<IndyDS::CabToModelCorrective> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::CabToModelCorrective> {
            typedef IndyDS_CabToModelCorrective_c type;
        };

        template<>
        struct dynamic_type<IndyDS::CabToSteeringCorrective> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::CabToSteeringCorrective> {
            typedef IndyDS_CabToSteeringCorrective_c type;
        };

        template<>
        struct dynamic_type<IndyDS::VehicleOutput> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<IndyDS::VehicleOutput> {
            typedef IndyDS_VehicleOutput_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // RtiSCADE_DS_Controller_1459192143_hpp

