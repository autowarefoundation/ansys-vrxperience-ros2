

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RtiSCADE_DS_Controller.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>
#include "RtiSCADE_DS_Controller.hpp"
#include "RtiSCADE_DS_ControllerImplPlugin.h"

#include <rti/util/ostream_operators.hpp>

namespace IndyDS {

    // ---- RoadLinePolynom: 

    RoadLinePolynom::RoadLinePolynom() :
        m_lineId_ (0) ,
        m_c0_ (0.0) ,
        m_c1_ (0.0) ,
        m_c2_ (0.0) ,
        m_c3_ (0.0) ,
        m_curvatureRadius_ (0.0) ,
        m_estimatedCurvatureRadius_ (0.0) {
    }   

    RoadLinePolynom::RoadLinePolynom (
        int16_t lineId_param,
        double c0_param,
        double c1_param,
        double c2_param,
        double c3_param,
        double curvatureRadius_param,
        double estimatedCurvatureRadius_param)
        :
            m_lineId_( lineId_param ),
            m_c0_( c0_param ),
            m_c1_( c1_param ),
            m_c2_( c2_param ),
            m_c3_( c3_param ),
            m_curvatureRadius_( curvatureRadius_param ),
            m_estimatedCurvatureRadius_( estimatedCurvatureRadius_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RoadLinePolynom::RoadLinePolynom(RoadLinePolynom&& other_) OMG_NOEXCEPT  :m_lineId_ (std::move(other_.m_lineId_))
    ,
    m_c0_ (std::move(other_.m_c0_))
    ,
    m_c1_ (std::move(other_.m_c1_))
    ,
    m_c2_ (std::move(other_.m_c2_))
    ,
    m_c3_ (std::move(other_.m_c3_))
    ,
    m_curvatureRadius_ (std::move(other_.m_curvatureRadius_))
    ,
    m_estimatedCurvatureRadius_ (std::move(other_.m_estimatedCurvatureRadius_))
    {
    } 

    RoadLinePolynom& RoadLinePolynom::operator=(RoadLinePolynom&&  other_) OMG_NOEXCEPT {
        RoadLinePolynom tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void RoadLinePolynom::swap(RoadLinePolynom& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_lineId_, other_.m_lineId_);
        swap(m_c0_, other_.m_c0_);
        swap(m_c1_, other_.m_c1_);
        swap(m_c2_, other_.m_c2_);
        swap(m_c3_, other_.m_c3_);
        swap(m_curvatureRadius_, other_.m_curvatureRadius_);
        swap(m_estimatedCurvatureRadius_, other_.m_estimatedCurvatureRadius_);
    }  

    bool RoadLinePolynom::operator == (const RoadLinePolynom& other_) const {
        if (m_lineId_ != other_.m_lineId_) {
            return false;
        }
        if (m_c0_ != other_.m_c0_) {
            return false;
        }
        if (m_c1_ != other_.m_c1_) {
            return false;
        }
        if (m_c2_ != other_.m_c2_) {
            return false;
        }
        if (m_c3_ != other_.m_c3_) {
            return false;
        }
        if (m_curvatureRadius_ != other_.m_curvatureRadius_) {
            return false;
        }
        if (m_estimatedCurvatureRadius_ != other_.m_estimatedCurvatureRadius_) {
            return false;
        }
        return true;
    }
    bool RoadLinePolynom::operator != (const RoadLinePolynom& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    int16_t IndyDS::RoadLinePolynom::lineId() const OMG_NOEXCEPT{
        return m_lineId_;
    }

    void IndyDS::RoadLinePolynom::lineId(int16_t value) {
        m_lineId_ = value;
    }

    double IndyDS::RoadLinePolynom::c0() const OMG_NOEXCEPT{
        return m_c0_;
    }

    void IndyDS::RoadLinePolynom::c0(double value) {
        m_c0_ = value;
    }

    double IndyDS::RoadLinePolynom::c1() const OMG_NOEXCEPT{
        return m_c1_;
    }

    void IndyDS::RoadLinePolynom::c1(double value) {
        m_c1_ = value;
    }

    double IndyDS::RoadLinePolynom::c2() const OMG_NOEXCEPT{
        return m_c2_;
    }

    void IndyDS::RoadLinePolynom::c2(double value) {
        m_c2_ = value;
    }

    double IndyDS::RoadLinePolynom::c3() const OMG_NOEXCEPT{
        return m_c3_;
    }

    void IndyDS::RoadLinePolynom::c3(double value) {
        m_c3_ = value;
    }

    double IndyDS::RoadLinePolynom::curvatureRadius() const OMG_NOEXCEPT{
        return m_curvatureRadius_;
    }

    void IndyDS::RoadLinePolynom::curvatureRadius(double value) {
        m_curvatureRadius_ = value;
    }

    double IndyDS::RoadLinePolynom::estimatedCurvatureRadius() const OMG_NOEXCEPT{
        return m_estimatedCurvatureRadius_;
    }

    void IndyDS::RoadLinePolynom::estimatedCurvatureRadius(double value) {
        m_estimatedCurvatureRadius_ = value;
    }

    std::ostream& operator << (std::ostream& o,const RoadLinePolynom& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "lineId: " << sample.lineId()<<", ";
        o << "c0: " << std::setprecision(15) <<sample.c0()<<", ";
        o << "c1: " << std::setprecision(15) <<sample.c1()<<", ";
        o << "c2: " << std::setprecision(15) <<sample.c2()<<", ";
        o << "c3: " << std::setprecision(15) <<sample.c3()<<", ";
        o << "curvatureRadius: " << std::setprecision(15) <<sample.curvatureRadius()<<", ";
        o << "estimatedCurvatureRadius: " << std::setprecision(15) <<sample.estimatedCurvatureRadius() ;
        o <<"]";
        return o;
    }

    // ---- RoadLinesPolynoms: 

    RoadLinesPolynoms::RoadLinesPolynoms() :
        m_egoVhlId_ (0) ,
        m_globalId_ (0) ,
        m_isNoisy_ (0) ,
        m_referenceFrame_ (0) ,
        m_timeOfUpdate_ (0.0) {
    }   

    RoadLinesPolynoms::RoadLinesPolynoms (
        int16_t egoVhlId_param,
        int32_t globalId_param,
        uint8_t isNoisy_param,
        int16_t referenceFrame_param,
        const dds::core::vector<IndyDS::RoadLinePolynom>& roadLinesPolynomsArray_param,
        double timeOfUpdate_param)
        :
            m_egoVhlId_( egoVhlId_param ),
            m_globalId_( globalId_param ),
            m_isNoisy_( isNoisy_param ),
            m_referenceFrame_( referenceFrame_param ),
            m_roadLinesPolynomsArray_( roadLinesPolynomsArray_param ),
            m_timeOfUpdate_( timeOfUpdate_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RoadLinesPolynoms::RoadLinesPolynoms(RoadLinesPolynoms&& other_) OMG_NOEXCEPT  :m_egoVhlId_ (std::move(other_.m_egoVhlId_))
    ,
    m_globalId_ (std::move(other_.m_globalId_))
    ,
    m_isNoisy_ (std::move(other_.m_isNoisy_))
    ,
    m_referenceFrame_ (std::move(other_.m_referenceFrame_))
    ,
    m_roadLinesPolynomsArray_ (std::move(other_.m_roadLinesPolynomsArray_))
    ,
    m_timeOfUpdate_ (std::move(other_.m_timeOfUpdate_))
    {
    } 

    RoadLinesPolynoms& RoadLinesPolynoms::operator=(RoadLinesPolynoms&&  other_) OMG_NOEXCEPT {
        RoadLinesPolynoms tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void RoadLinesPolynoms::swap(RoadLinesPolynoms& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_egoVhlId_, other_.m_egoVhlId_);
        swap(m_globalId_, other_.m_globalId_);
        swap(m_isNoisy_, other_.m_isNoisy_);
        swap(m_referenceFrame_, other_.m_referenceFrame_);
        swap(m_roadLinesPolynomsArray_, other_.m_roadLinesPolynomsArray_);
        swap(m_timeOfUpdate_, other_.m_timeOfUpdate_);
    }  

    bool RoadLinesPolynoms::operator == (const RoadLinesPolynoms& other_) const {
        if (m_egoVhlId_ != other_.m_egoVhlId_) {
            return false;
        }
        if (m_globalId_ != other_.m_globalId_) {
            return false;
        }
        if (m_isNoisy_ != other_.m_isNoisy_) {
            return false;
        }
        if (m_referenceFrame_ != other_.m_referenceFrame_) {
            return false;
        }
        if (m_roadLinesPolynomsArray_ != other_.m_roadLinesPolynomsArray_) {
            return false;
        }
        if (m_timeOfUpdate_ != other_.m_timeOfUpdate_) {
            return false;
        }
        return true;
    }
    bool RoadLinesPolynoms::operator != (const RoadLinesPolynoms& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    int16_t IndyDS::RoadLinesPolynoms::egoVhlId() const OMG_NOEXCEPT{
        return m_egoVhlId_;
    }

    void IndyDS::RoadLinesPolynoms::egoVhlId(int16_t value) {
        m_egoVhlId_ = value;
    }

    int32_t IndyDS::RoadLinesPolynoms::globalId() const OMG_NOEXCEPT{
        return m_globalId_;
    }

    void IndyDS::RoadLinesPolynoms::globalId(int32_t value) {
        m_globalId_ = value;
    }

    uint8_t IndyDS::RoadLinesPolynoms::isNoisy() const OMG_NOEXCEPT{
        return m_isNoisy_;
    }

    void IndyDS::RoadLinesPolynoms::isNoisy(uint8_t value) {
        m_isNoisy_ = value;
    }

    int16_t IndyDS::RoadLinesPolynoms::referenceFrame() const OMG_NOEXCEPT{
        return m_referenceFrame_;
    }

    void IndyDS::RoadLinesPolynoms::referenceFrame(int16_t value) {
        m_referenceFrame_ = value;
    }

    dds::core::vector<IndyDS::RoadLinePolynom>& IndyDS::RoadLinesPolynoms::roadLinesPolynomsArray() OMG_NOEXCEPT {
        return m_roadLinesPolynomsArray_;
    }

    const dds::core::vector<IndyDS::RoadLinePolynom>& IndyDS::RoadLinesPolynoms::roadLinesPolynomsArray() const OMG_NOEXCEPT {
        return m_roadLinesPolynomsArray_;
    }

    void IndyDS::RoadLinesPolynoms::roadLinesPolynomsArray(const dds::core::vector<IndyDS::RoadLinePolynom>& value) {
        m_roadLinesPolynomsArray_ = value;
    }

    double IndyDS::RoadLinesPolynoms::timeOfUpdate() const OMG_NOEXCEPT{
        return m_timeOfUpdate_;
    }

    void IndyDS::RoadLinesPolynoms::timeOfUpdate(double value) {
        m_timeOfUpdate_ = value;
    }

    std::ostream& operator << (std::ostream& o,const RoadLinesPolynoms& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "egoVhlId: " << sample.egoVhlId()<<", ";
        o << "globalId: " << sample.globalId()<<", ";
        o << "isNoisy: <" << std::hex<<(int)sample.isNoisy() <<", ";
        o << "referenceFrame: " << sample.referenceFrame()<<", ";
        o << "roadLinesPolynomsArray: " << sample.roadLinesPolynomsArray()<<", ";
        o << "timeOfUpdate: " << std::setprecision(15) <<sample.timeOfUpdate() ;
        o <<"]";
        return o;
    }

    // ---- SensorTargetBBox: 

    SensorTargetBBox::SensorTargetBBox() :
        m_id_ (0) ,
        m_referenceFrame_ (0) ,
        m_rearBottomRightX_ (0.0) ,
        m_rearBottomRightY_ (0.0) ,
        m_rearBottomRightZ_ (0.0) ,
        m_rearTopRightX_ (0.0) ,
        m_rearTopRightY_ (0.0) ,
        m_rearTopRightZ_ (0.0) ,
        m_rearbottomLeftX_ (0.0) ,
        m_rearbottomLeftY_ (0.0) ,
        m_rearbottomLeftZ_ (0.0) ,
        m_rearTopLeftX_ (0.0) ,
        m_rearTopLeftY_ (0.0) ,
        m_rearTopLeftZ_ (0.0) ,
        m_frontBottomRightX_ (0.0) ,
        m_frontBottomRightY_ (0.0) ,
        m_frontBottomRightZ_ (0.0) ,
        m_frontTopRightX_ (0.0) ,
        m_frontTopRightY_ (0.0) ,
        m_frontTopRightZ_ (0.0) ,
        m_frontbottomLeftX_ (0.0) ,
        m_frontbottomLeftY_ (0.0) ,
        m_frontbottomLeftZ_ (0.0) ,
        m_frontTopLeftX_ (0.0) ,
        m_frontTopLeftY_ (0.0) ,
        m_frontTopLeftZ_ (0.0) {
    }   

    SensorTargetBBox::SensorTargetBBox (
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
        double frontTopLeftZ_param)
        :
            m_id_( id_param ),
            m_referenceFrame_( referenceFrame_param ),
            m_rearBottomRightX_( rearBottomRightX_param ),
            m_rearBottomRightY_( rearBottomRightY_param ),
            m_rearBottomRightZ_( rearBottomRightZ_param ),
            m_rearTopRightX_( rearTopRightX_param ),
            m_rearTopRightY_( rearTopRightY_param ),
            m_rearTopRightZ_( rearTopRightZ_param ),
            m_rearbottomLeftX_( rearbottomLeftX_param ),
            m_rearbottomLeftY_( rearbottomLeftY_param ),
            m_rearbottomLeftZ_( rearbottomLeftZ_param ),
            m_rearTopLeftX_( rearTopLeftX_param ),
            m_rearTopLeftY_( rearTopLeftY_param ),
            m_rearTopLeftZ_( rearTopLeftZ_param ),
            m_frontBottomRightX_( frontBottomRightX_param ),
            m_frontBottomRightY_( frontBottomRightY_param ),
            m_frontBottomRightZ_( frontBottomRightZ_param ),
            m_frontTopRightX_( frontTopRightX_param ),
            m_frontTopRightY_( frontTopRightY_param ),
            m_frontTopRightZ_( frontTopRightZ_param ),
            m_frontbottomLeftX_( frontbottomLeftX_param ),
            m_frontbottomLeftY_( frontbottomLeftY_param ),
            m_frontbottomLeftZ_( frontbottomLeftZ_param ),
            m_frontTopLeftX_( frontTopLeftX_param ),
            m_frontTopLeftY_( frontTopLeftY_param ),
            m_frontTopLeftZ_( frontTopLeftZ_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SensorTargetBBox::SensorTargetBBox(SensorTargetBBox&& other_) OMG_NOEXCEPT  :m_id_ (std::move(other_.m_id_))
    ,
    m_referenceFrame_ (std::move(other_.m_referenceFrame_))
    ,
    m_rearBottomRightX_ (std::move(other_.m_rearBottomRightX_))
    ,
    m_rearBottomRightY_ (std::move(other_.m_rearBottomRightY_))
    ,
    m_rearBottomRightZ_ (std::move(other_.m_rearBottomRightZ_))
    ,
    m_rearTopRightX_ (std::move(other_.m_rearTopRightX_))
    ,
    m_rearTopRightY_ (std::move(other_.m_rearTopRightY_))
    ,
    m_rearTopRightZ_ (std::move(other_.m_rearTopRightZ_))
    ,
    m_rearbottomLeftX_ (std::move(other_.m_rearbottomLeftX_))
    ,
    m_rearbottomLeftY_ (std::move(other_.m_rearbottomLeftY_))
    ,
    m_rearbottomLeftZ_ (std::move(other_.m_rearbottomLeftZ_))
    ,
    m_rearTopLeftX_ (std::move(other_.m_rearTopLeftX_))
    ,
    m_rearTopLeftY_ (std::move(other_.m_rearTopLeftY_))
    ,
    m_rearTopLeftZ_ (std::move(other_.m_rearTopLeftZ_))
    ,
    m_frontBottomRightX_ (std::move(other_.m_frontBottomRightX_))
    ,
    m_frontBottomRightY_ (std::move(other_.m_frontBottomRightY_))
    ,
    m_frontBottomRightZ_ (std::move(other_.m_frontBottomRightZ_))
    ,
    m_frontTopRightX_ (std::move(other_.m_frontTopRightX_))
    ,
    m_frontTopRightY_ (std::move(other_.m_frontTopRightY_))
    ,
    m_frontTopRightZ_ (std::move(other_.m_frontTopRightZ_))
    ,
    m_frontbottomLeftX_ (std::move(other_.m_frontbottomLeftX_))
    ,
    m_frontbottomLeftY_ (std::move(other_.m_frontbottomLeftY_))
    ,
    m_frontbottomLeftZ_ (std::move(other_.m_frontbottomLeftZ_))
    ,
    m_frontTopLeftX_ (std::move(other_.m_frontTopLeftX_))
    ,
    m_frontTopLeftY_ (std::move(other_.m_frontTopLeftY_))
    ,
    m_frontTopLeftZ_ (std::move(other_.m_frontTopLeftZ_))
    {
    } 

    SensorTargetBBox& SensorTargetBBox::operator=(SensorTargetBBox&&  other_) OMG_NOEXCEPT {
        SensorTargetBBox tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void SensorTargetBBox::swap(SensorTargetBBox& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_id_, other_.m_id_);
        swap(m_referenceFrame_, other_.m_referenceFrame_);
        swap(m_rearBottomRightX_, other_.m_rearBottomRightX_);
        swap(m_rearBottomRightY_, other_.m_rearBottomRightY_);
        swap(m_rearBottomRightZ_, other_.m_rearBottomRightZ_);
        swap(m_rearTopRightX_, other_.m_rearTopRightX_);
        swap(m_rearTopRightY_, other_.m_rearTopRightY_);
        swap(m_rearTopRightZ_, other_.m_rearTopRightZ_);
        swap(m_rearbottomLeftX_, other_.m_rearbottomLeftX_);
        swap(m_rearbottomLeftY_, other_.m_rearbottomLeftY_);
        swap(m_rearbottomLeftZ_, other_.m_rearbottomLeftZ_);
        swap(m_rearTopLeftX_, other_.m_rearTopLeftX_);
        swap(m_rearTopLeftY_, other_.m_rearTopLeftY_);
        swap(m_rearTopLeftZ_, other_.m_rearTopLeftZ_);
        swap(m_frontBottomRightX_, other_.m_frontBottomRightX_);
        swap(m_frontBottomRightY_, other_.m_frontBottomRightY_);
        swap(m_frontBottomRightZ_, other_.m_frontBottomRightZ_);
        swap(m_frontTopRightX_, other_.m_frontTopRightX_);
        swap(m_frontTopRightY_, other_.m_frontTopRightY_);
        swap(m_frontTopRightZ_, other_.m_frontTopRightZ_);
        swap(m_frontbottomLeftX_, other_.m_frontbottomLeftX_);
        swap(m_frontbottomLeftY_, other_.m_frontbottomLeftY_);
        swap(m_frontbottomLeftZ_, other_.m_frontbottomLeftZ_);
        swap(m_frontTopLeftX_, other_.m_frontTopLeftX_);
        swap(m_frontTopLeftY_, other_.m_frontTopLeftY_);
        swap(m_frontTopLeftZ_, other_.m_frontTopLeftZ_);
    }  

    bool SensorTargetBBox::operator == (const SensorTargetBBox& other_) const {
        if (m_id_ != other_.m_id_) {
            return false;
        }
        if (m_referenceFrame_ != other_.m_referenceFrame_) {
            return false;
        }
        if (m_rearBottomRightX_ != other_.m_rearBottomRightX_) {
            return false;
        }
        if (m_rearBottomRightY_ != other_.m_rearBottomRightY_) {
            return false;
        }
        if (m_rearBottomRightZ_ != other_.m_rearBottomRightZ_) {
            return false;
        }
        if (m_rearTopRightX_ != other_.m_rearTopRightX_) {
            return false;
        }
        if (m_rearTopRightY_ != other_.m_rearTopRightY_) {
            return false;
        }
        if (m_rearTopRightZ_ != other_.m_rearTopRightZ_) {
            return false;
        }
        if (m_rearbottomLeftX_ != other_.m_rearbottomLeftX_) {
            return false;
        }
        if (m_rearbottomLeftY_ != other_.m_rearbottomLeftY_) {
            return false;
        }
        if (m_rearbottomLeftZ_ != other_.m_rearbottomLeftZ_) {
            return false;
        }
        if (m_rearTopLeftX_ != other_.m_rearTopLeftX_) {
            return false;
        }
        if (m_rearTopLeftY_ != other_.m_rearTopLeftY_) {
            return false;
        }
        if (m_rearTopLeftZ_ != other_.m_rearTopLeftZ_) {
            return false;
        }
        if (m_frontBottomRightX_ != other_.m_frontBottomRightX_) {
            return false;
        }
        if (m_frontBottomRightY_ != other_.m_frontBottomRightY_) {
            return false;
        }
        if (m_frontBottomRightZ_ != other_.m_frontBottomRightZ_) {
            return false;
        }
        if (m_frontTopRightX_ != other_.m_frontTopRightX_) {
            return false;
        }
        if (m_frontTopRightY_ != other_.m_frontTopRightY_) {
            return false;
        }
        if (m_frontTopRightZ_ != other_.m_frontTopRightZ_) {
            return false;
        }
        if (m_frontbottomLeftX_ != other_.m_frontbottomLeftX_) {
            return false;
        }
        if (m_frontbottomLeftY_ != other_.m_frontbottomLeftY_) {
            return false;
        }
        if (m_frontbottomLeftZ_ != other_.m_frontbottomLeftZ_) {
            return false;
        }
        if (m_frontTopLeftX_ != other_.m_frontTopLeftX_) {
            return false;
        }
        if (m_frontTopLeftY_ != other_.m_frontTopLeftY_) {
            return false;
        }
        if (m_frontTopLeftZ_ != other_.m_frontTopLeftZ_) {
            return false;
        }
        return true;
    }
    bool SensorTargetBBox::operator != (const SensorTargetBBox& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    int16_t IndyDS::SensorTargetBBox::id() const OMG_NOEXCEPT{
        return m_id_;
    }

    void IndyDS::SensorTargetBBox::id(int16_t value) {
        m_id_ = value;
    }

    int16_t IndyDS::SensorTargetBBox::referenceFrame() const OMG_NOEXCEPT{
        return m_referenceFrame_;
    }

    void IndyDS::SensorTargetBBox::referenceFrame(int16_t value) {
        m_referenceFrame_ = value;
    }

    double IndyDS::SensorTargetBBox::rearBottomRightX() const OMG_NOEXCEPT{
        return m_rearBottomRightX_;
    }

    void IndyDS::SensorTargetBBox::rearBottomRightX(double value) {
        m_rearBottomRightX_ = value;
    }

    double IndyDS::SensorTargetBBox::rearBottomRightY() const OMG_NOEXCEPT{
        return m_rearBottomRightY_;
    }

    void IndyDS::SensorTargetBBox::rearBottomRightY(double value) {
        m_rearBottomRightY_ = value;
    }

    double IndyDS::SensorTargetBBox::rearBottomRightZ() const OMG_NOEXCEPT{
        return m_rearBottomRightZ_;
    }

    void IndyDS::SensorTargetBBox::rearBottomRightZ(double value) {
        m_rearBottomRightZ_ = value;
    }

    double IndyDS::SensorTargetBBox::rearTopRightX() const OMG_NOEXCEPT{
        return m_rearTopRightX_;
    }

    void IndyDS::SensorTargetBBox::rearTopRightX(double value) {
        m_rearTopRightX_ = value;
    }

    double IndyDS::SensorTargetBBox::rearTopRightY() const OMG_NOEXCEPT{
        return m_rearTopRightY_;
    }

    void IndyDS::SensorTargetBBox::rearTopRightY(double value) {
        m_rearTopRightY_ = value;
    }

    double IndyDS::SensorTargetBBox::rearTopRightZ() const OMG_NOEXCEPT{
        return m_rearTopRightZ_;
    }

    void IndyDS::SensorTargetBBox::rearTopRightZ(double value) {
        m_rearTopRightZ_ = value;
    }

    double IndyDS::SensorTargetBBox::rearbottomLeftX() const OMG_NOEXCEPT{
        return m_rearbottomLeftX_;
    }

    void IndyDS::SensorTargetBBox::rearbottomLeftX(double value) {
        m_rearbottomLeftX_ = value;
    }

    double IndyDS::SensorTargetBBox::rearbottomLeftY() const OMG_NOEXCEPT{
        return m_rearbottomLeftY_;
    }

    void IndyDS::SensorTargetBBox::rearbottomLeftY(double value) {
        m_rearbottomLeftY_ = value;
    }

    double IndyDS::SensorTargetBBox::rearbottomLeftZ() const OMG_NOEXCEPT{
        return m_rearbottomLeftZ_;
    }

    void IndyDS::SensorTargetBBox::rearbottomLeftZ(double value) {
        m_rearbottomLeftZ_ = value;
    }

    double IndyDS::SensorTargetBBox::rearTopLeftX() const OMG_NOEXCEPT{
        return m_rearTopLeftX_;
    }

    void IndyDS::SensorTargetBBox::rearTopLeftX(double value) {
        m_rearTopLeftX_ = value;
    }

    double IndyDS::SensorTargetBBox::rearTopLeftY() const OMG_NOEXCEPT{
        return m_rearTopLeftY_;
    }

    void IndyDS::SensorTargetBBox::rearTopLeftY(double value) {
        m_rearTopLeftY_ = value;
    }

    double IndyDS::SensorTargetBBox::rearTopLeftZ() const OMG_NOEXCEPT{
        return m_rearTopLeftZ_;
    }

    void IndyDS::SensorTargetBBox::rearTopLeftZ(double value) {
        m_rearTopLeftZ_ = value;
    }

    double IndyDS::SensorTargetBBox::frontBottomRightX() const OMG_NOEXCEPT{
        return m_frontBottomRightX_;
    }

    void IndyDS::SensorTargetBBox::frontBottomRightX(double value) {
        m_frontBottomRightX_ = value;
    }

    double IndyDS::SensorTargetBBox::frontBottomRightY() const OMG_NOEXCEPT{
        return m_frontBottomRightY_;
    }

    void IndyDS::SensorTargetBBox::frontBottomRightY(double value) {
        m_frontBottomRightY_ = value;
    }

    double IndyDS::SensorTargetBBox::frontBottomRightZ() const OMG_NOEXCEPT{
        return m_frontBottomRightZ_;
    }

    void IndyDS::SensorTargetBBox::frontBottomRightZ(double value) {
        m_frontBottomRightZ_ = value;
    }

    double IndyDS::SensorTargetBBox::frontTopRightX() const OMG_NOEXCEPT{
        return m_frontTopRightX_;
    }

    void IndyDS::SensorTargetBBox::frontTopRightX(double value) {
        m_frontTopRightX_ = value;
    }

    double IndyDS::SensorTargetBBox::frontTopRightY() const OMG_NOEXCEPT{
        return m_frontTopRightY_;
    }

    void IndyDS::SensorTargetBBox::frontTopRightY(double value) {
        m_frontTopRightY_ = value;
    }

    double IndyDS::SensorTargetBBox::frontTopRightZ() const OMG_NOEXCEPT{
        return m_frontTopRightZ_;
    }

    void IndyDS::SensorTargetBBox::frontTopRightZ(double value) {
        m_frontTopRightZ_ = value;
    }

    double IndyDS::SensorTargetBBox::frontbottomLeftX() const OMG_NOEXCEPT{
        return m_frontbottomLeftX_;
    }

    void IndyDS::SensorTargetBBox::frontbottomLeftX(double value) {
        m_frontbottomLeftX_ = value;
    }

    double IndyDS::SensorTargetBBox::frontbottomLeftY() const OMG_NOEXCEPT{
        return m_frontbottomLeftY_;
    }

    void IndyDS::SensorTargetBBox::frontbottomLeftY(double value) {
        m_frontbottomLeftY_ = value;
    }

    double IndyDS::SensorTargetBBox::frontbottomLeftZ() const OMG_NOEXCEPT{
        return m_frontbottomLeftZ_;
    }

    void IndyDS::SensorTargetBBox::frontbottomLeftZ(double value) {
        m_frontbottomLeftZ_ = value;
    }

    double IndyDS::SensorTargetBBox::frontTopLeftX() const OMG_NOEXCEPT{
        return m_frontTopLeftX_;
    }

    void IndyDS::SensorTargetBBox::frontTopLeftX(double value) {
        m_frontTopLeftX_ = value;
    }

    double IndyDS::SensorTargetBBox::frontTopLeftY() const OMG_NOEXCEPT{
        return m_frontTopLeftY_;
    }

    void IndyDS::SensorTargetBBox::frontTopLeftY(double value) {
        m_frontTopLeftY_ = value;
    }

    double IndyDS::SensorTargetBBox::frontTopLeftZ() const OMG_NOEXCEPT{
        return m_frontTopLeftZ_;
    }

    void IndyDS::SensorTargetBBox::frontTopLeftZ(double value) {
        m_frontTopLeftZ_ = value;
    }

    std::ostream& operator << (std::ostream& o,const SensorTargetBBox& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "id: " << sample.id()<<", ";
        o << "referenceFrame: " << sample.referenceFrame()<<", ";
        o << "rearBottomRightX: " << std::setprecision(15) <<sample.rearBottomRightX()<<", ";
        o << "rearBottomRightY: " << std::setprecision(15) <<sample.rearBottomRightY()<<", ";
        o << "rearBottomRightZ: " << std::setprecision(15) <<sample.rearBottomRightZ()<<", ";
        o << "rearTopRightX: " << std::setprecision(15) <<sample.rearTopRightX()<<", ";
        o << "rearTopRightY: " << std::setprecision(15) <<sample.rearTopRightY()<<", ";
        o << "rearTopRightZ: " << std::setprecision(15) <<sample.rearTopRightZ()<<", ";
        o << "rearbottomLeftX: " << std::setprecision(15) <<sample.rearbottomLeftX()<<", ";
        o << "rearbottomLeftY: " << std::setprecision(15) <<sample.rearbottomLeftY()<<", ";
        o << "rearbottomLeftZ: " << std::setprecision(15) <<sample.rearbottomLeftZ()<<", ";
        o << "rearTopLeftX: " << std::setprecision(15) <<sample.rearTopLeftX()<<", ";
        o << "rearTopLeftY: " << std::setprecision(15) <<sample.rearTopLeftY()<<", ";
        o << "rearTopLeftZ: " << std::setprecision(15) <<sample.rearTopLeftZ()<<", ";
        o << "frontBottomRightX: " << std::setprecision(15) <<sample.frontBottomRightX()<<", ";
        o << "frontBottomRightY: " << std::setprecision(15) <<sample.frontBottomRightY()<<", ";
        o << "frontBottomRightZ: " << std::setprecision(15) <<sample.frontBottomRightZ()<<", ";
        o << "frontTopRightX: " << std::setprecision(15) <<sample.frontTopRightX()<<", ";
        o << "frontTopRightY: " << std::setprecision(15) <<sample.frontTopRightY()<<", ";
        o << "frontTopRightZ: " << std::setprecision(15) <<sample.frontTopRightZ()<<", ";
        o << "frontbottomLeftX: " << std::setprecision(15) <<sample.frontbottomLeftX()<<", ";
        o << "frontbottomLeftY: " << std::setprecision(15) <<sample.frontbottomLeftY()<<", ";
        o << "frontbottomLeftZ: " << std::setprecision(15) <<sample.frontbottomLeftZ()<<", ";
        o << "frontTopLeftX: " << std::setprecision(15) <<sample.frontTopLeftX()<<", ";
        o << "frontTopLeftY: " << std::setprecision(15) <<sample.frontTopLeftY()<<", ";
        o << "frontTopLeftZ: " << std::setprecision(15) <<sample.frontTopLeftZ() ;
        o <<"]";
        return o;
    }

    // ---- SensorMovableTargetsBoundingBoxes: 

    SensorMovableTargetsBoundingBoxes::SensorMovableTargetsBoundingBoxes() :
        m_globalId_ (0) ,
        m_timeOfUpdate_ (0.0) ,
        m_vhlId_ (0) {
    }   

    SensorMovableTargetsBoundingBoxes::SensorMovableTargetsBoundingBoxes (
        const dds::core::vector<IndyDS::SensorTargetBBox>& boundingBoxesArray_param,
        int32_t globalId_param,
        double timeOfUpdate_param,
        int16_t vhlId_param)
        :
            m_boundingBoxesArray_( boundingBoxesArray_param ),
            m_globalId_( globalId_param ),
            m_timeOfUpdate_( timeOfUpdate_param ),
            m_vhlId_( vhlId_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SensorMovableTargetsBoundingBoxes::SensorMovableTargetsBoundingBoxes(SensorMovableTargetsBoundingBoxes&& other_) OMG_NOEXCEPT  :m_boundingBoxesArray_ (std::move(other_.m_boundingBoxesArray_))
    ,
    m_globalId_ (std::move(other_.m_globalId_))
    ,
    m_timeOfUpdate_ (std::move(other_.m_timeOfUpdate_))
    ,
    m_vhlId_ (std::move(other_.m_vhlId_))
    {
    } 

    SensorMovableTargetsBoundingBoxes& SensorMovableTargetsBoundingBoxes::operator=(SensorMovableTargetsBoundingBoxes&&  other_) OMG_NOEXCEPT {
        SensorMovableTargetsBoundingBoxes tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void SensorMovableTargetsBoundingBoxes::swap(SensorMovableTargetsBoundingBoxes& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_boundingBoxesArray_, other_.m_boundingBoxesArray_);
        swap(m_globalId_, other_.m_globalId_);
        swap(m_timeOfUpdate_, other_.m_timeOfUpdate_);
        swap(m_vhlId_, other_.m_vhlId_);
    }  

    bool SensorMovableTargetsBoundingBoxes::operator == (const SensorMovableTargetsBoundingBoxes& other_) const {
        if (m_boundingBoxesArray_ != other_.m_boundingBoxesArray_) {
            return false;
        }
        if (m_globalId_ != other_.m_globalId_) {
            return false;
        }
        if (m_timeOfUpdate_ != other_.m_timeOfUpdate_) {
            return false;
        }
        if (m_vhlId_ != other_.m_vhlId_) {
            return false;
        }
        return true;
    }
    bool SensorMovableTargetsBoundingBoxes::operator != (const SensorMovableTargetsBoundingBoxes& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    dds::core::vector<IndyDS::SensorTargetBBox>& IndyDS::SensorMovableTargetsBoundingBoxes::boundingBoxesArray() OMG_NOEXCEPT {
        return m_boundingBoxesArray_;
    }

    const dds::core::vector<IndyDS::SensorTargetBBox>& IndyDS::SensorMovableTargetsBoundingBoxes::boundingBoxesArray() const OMG_NOEXCEPT {
        return m_boundingBoxesArray_;
    }

    void IndyDS::SensorMovableTargetsBoundingBoxes::boundingBoxesArray(const dds::core::vector<IndyDS::SensorTargetBBox>& value) {
        m_boundingBoxesArray_ = value;
    }

    int32_t IndyDS::SensorMovableTargetsBoundingBoxes::globalId() const OMG_NOEXCEPT{
        return m_globalId_;
    }

    void IndyDS::SensorMovableTargetsBoundingBoxes::globalId(int32_t value) {
        m_globalId_ = value;
    }

    double IndyDS::SensorMovableTargetsBoundingBoxes::timeOfUpdate() const OMG_NOEXCEPT{
        return m_timeOfUpdate_;
    }

    void IndyDS::SensorMovableTargetsBoundingBoxes::timeOfUpdate(double value) {
        m_timeOfUpdate_ = value;
    }

    int16_t IndyDS::SensorMovableTargetsBoundingBoxes::vhlId() const OMG_NOEXCEPT{
        return m_vhlId_;
    }

    void IndyDS::SensorMovableTargetsBoundingBoxes::vhlId(int16_t value) {
        m_vhlId_ = value;
    }

    std::ostream& operator << (std::ostream& o,const SensorMovableTargetsBoundingBoxes& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "boundingBoxesArray: " << sample.boundingBoxesArray()<<", ";
        o << "globalId: " << sample.globalId()<<", ";
        o << "timeOfUpdate: " << std::setprecision(15) <<sample.timeOfUpdate()<<", ";
        o << "vhlId: " << sample.vhlId() ;
        o <<"]";
        return o;
    }

    // ---- GPS: 

    GPS::GPS() :
        m_altitude_ (0.0) ,
        m_globalId_ (0) ,
        m_hdop_ (0.0f) ,
        m_lastUpdate_ (0.0) ,
        m_latitude_ (0.0) ,
        m_longitude_ (0.0) ,
        m_satellites_ (0) ,
        m_sensorId_ (0) ,
        m_vhlId_ (0) {
    }   

    GPS::GPS (
        double altitude_param,
        int32_t globalId_param,
        float hdop_param,
        double lastUpdate_param,
        double latitude_param,
        double longitude_param,
        int16_t satellites_param,
        int16_t sensorId_param,
        int16_t vhlId_param)
        :
            m_altitude_( altitude_param ),
            m_globalId_( globalId_param ),
            m_hdop_( hdop_param ),
            m_lastUpdate_( lastUpdate_param ),
            m_latitude_( latitude_param ),
            m_longitude_( longitude_param ),
            m_satellites_( satellites_param ),
            m_sensorId_( sensorId_param ),
            m_vhlId_( vhlId_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    GPS::GPS(GPS&& other_) OMG_NOEXCEPT  :m_altitude_ (std::move(other_.m_altitude_))
    ,
    m_globalId_ (std::move(other_.m_globalId_))
    ,
    m_hdop_ (std::move(other_.m_hdop_))
    ,
    m_lastUpdate_ (std::move(other_.m_lastUpdate_))
    ,
    m_latitude_ (std::move(other_.m_latitude_))
    ,
    m_longitude_ (std::move(other_.m_longitude_))
    ,
    m_satellites_ (std::move(other_.m_satellites_))
    ,
    m_sensorId_ (std::move(other_.m_sensorId_))
    ,
    m_vhlId_ (std::move(other_.m_vhlId_))
    {
    } 

    GPS& GPS::operator=(GPS&&  other_) OMG_NOEXCEPT {
        GPS tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void GPS::swap(GPS& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_altitude_, other_.m_altitude_);
        swap(m_globalId_, other_.m_globalId_);
        swap(m_hdop_, other_.m_hdop_);
        swap(m_lastUpdate_, other_.m_lastUpdate_);
        swap(m_latitude_, other_.m_latitude_);
        swap(m_longitude_, other_.m_longitude_);
        swap(m_satellites_, other_.m_satellites_);
        swap(m_sensorId_, other_.m_sensorId_);
        swap(m_vhlId_, other_.m_vhlId_);
    }  

    bool GPS::operator == (const GPS& other_) const {
        if (m_altitude_ != other_.m_altitude_) {
            return false;
        }
        if (m_globalId_ != other_.m_globalId_) {
            return false;
        }
        if (m_hdop_ != other_.m_hdop_) {
            return false;
        }
        if (m_lastUpdate_ != other_.m_lastUpdate_) {
            return false;
        }
        if (m_latitude_ != other_.m_latitude_) {
            return false;
        }
        if (m_longitude_ != other_.m_longitude_) {
            return false;
        }
        if (m_satellites_ != other_.m_satellites_) {
            return false;
        }
        if (m_sensorId_ != other_.m_sensorId_) {
            return false;
        }
        if (m_vhlId_ != other_.m_vhlId_) {
            return false;
        }
        return true;
    }
    bool GPS::operator != (const GPS& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    double IndyDS::GPS::altitude() const OMG_NOEXCEPT{
        return m_altitude_;
    }

    void IndyDS::GPS::altitude(double value) {
        m_altitude_ = value;
    }

    int32_t IndyDS::GPS::globalId() const OMG_NOEXCEPT{
        return m_globalId_;
    }

    void IndyDS::GPS::globalId(int32_t value) {
        m_globalId_ = value;
    }

    float IndyDS::GPS::hdop() const OMG_NOEXCEPT{
        return m_hdop_;
    }

    void IndyDS::GPS::hdop(float value) {
        m_hdop_ = value;
    }

    double IndyDS::GPS::lastUpdate() const OMG_NOEXCEPT{
        return m_lastUpdate_;
    }

    void IndyDS::GPS::lastUpdate(double value) {
        m_lastUpdate_ = value;
    }

    double IndyDS::GPS::latitude() const OMG_NOEXCEPT{
        return m_latitude_;
    }

    void IndyDS::GPS::latitude(double value) {
        m_latitude_ = value;
    }

    double IndyDS::GPS::longitude() const OMG_NOEXCEPT{
        return m_longitude_;
    }

    void IndyDS::GPS::longitude(double value) {
        m_longitude_ = value;
    }

    int16_t IndyDS::GPS::satellites() const OMG_NOEXCEPT{
        return m_satellites_;
    }

    void IndyDS::GPS::satellites(int16_t value) {
        m_satellites_ = value;
    }

    int16_t IndyDS::GPS::sensorId() const OMG_NOEXCEPT{
        return m_sensorId_;
    }

    void IndyDS::GPS::sensorId(int16_t value) {
        m_sensorId_ = value;
    }

    int16_t IndyDS::GPS::vhlId() const OMG_NOEXCEPT{
        return m_vhlId_;
    }

    void IndyDS::GPS::vhlId(int16_t value) {
        m_vhlId_ = value;
    }

    std::ostream& operator << (std::ostream& o,const GPS& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "altitude: " << std::setprecision(15) <<sample.altitude()<<", ";
        o << "globalId: " << sample.globalId()<<", ";
        o << "hdop: " << std::setprecision(9) <<sample.hdop()<<", ";
        o << "lastUpdate: " << std::setprecision(15) <<sample.lastUpdate()<<", ";
        o << "latitude: " << std::setprecision(15) <<sample.latitude()<<", ";
        o << "longitude: " << std::setprecision(15) <<sample.longitude()<<", ";
        o << "satellites: " << sample.satellites()<<", ";
        o << "sensorId: " << sample.sensorId()<<", ";
        o << "vhlId: " << sample.vhlId() ;
        o <<"]";
        return o;
    }

    // ---- LaserMeterPoint: 

    LaserMeterPoint::LaserMeterPoint() :
        m_hit_ (0) ,
        m_Hangle_ (0.0f) ,
        m_Vangle_ (0.0f) ,
        m_absposx_ (0.0) ,
        m_absposy_ (0.0) ,
        m_absposz_ (0.0) ,
        m_relposx_ (0.0f) ,
        m_relposy_ (0.0f) ,
        m_relposz_ (0.0f) ,
        m_distance_ (0.0f) {
    }   

    LaserMeterPoint::LaserMeterPoint (
        uint8_t hit_param,
        float Hangle_param,
        float Vangle_param,
        double absposx_param,
        double absposy_param,
        double absposz_param,
        float relposx_param,
        float relposy_param,
        float relposz_param,
        float distance_param)
        :
            m_hit_( hit_param ),
            m_Hangle_( Hangle_param ),
            m_Vangle_( Vangle_param ),
            m_absposx_( absposx_param ),
            m_absposy_( absposy_param ),
            m_absposz_( absposz_param ),
            m_relposx_( relposx_param ),
            m_relposy_( relposy_param ),
            m_relposz_( relposz_param ),
            m_distance_( distance_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    LaserMeterPoint::LaserMeterPoint(LaserMeterPoint&& other_) OMG_NOEXCEPT  :m_hit_ (std::move(other_.m_hit_))
    ,
    m_Hangle_ (std::move(other_.m_Hangle_))
    ,
    m_Vangle_ (std::move(other_.m_Vangle_))
    ,
    m_absposx_ (std::move(other_.m_absposx_))
    ,
    m_absposy_ (std::move(other_.m_absposy_))
    ,
    m_absposz_ (std::move(other_.m_absposz_))
    ,
    m_relposx_ (std::move(other_.m_relposx_))
    ,
    m_relposy_ (std::move(other_.m_relposy_))
    ,
    m_relposz_ (std::move(other_.m_relposz_))
    ,
    m_distance_ (std::move(other_.m_distance_))
    {
    } 

    LaserMeterPoint& LaserMeterPoint::operator=(LaserMeterPoint&&  other_) OMG_NOEXCEPT {
        LaserMeterPoint tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void LaserMeterPoint::swap(LaserMeterPoint& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_hit_, other_.m_hit_);
        swap(m_Hangle_, other_.m_Hangle_);
        swap(m_Vangle_, other_.m_Vangle_);
        swap(m_absposx_, other_.m_absposx_);
        swap(m_absposy_, other_.m_absposy_);
        swap(m_absposz_, other_.m_absposz_);
        swap(m_relposx_, other_.m_relposx_);
        swap(m_relposy_, other_.m_relposy_);
        swap(m_relposz_, other_.m_relposz_);
        swap(m_distance_, other_.m_distance_);
    }  

    bool LaserMeterPoint::operator == (const LaserMeterPoint& other_) const {
        if (m_hit_ != other_.m_hit_) {
            return false;
        }
        if (m_Hangle_ != other_.m_Hangle_) {
            return false;
        }
        if (m_Vangle_ != other_.m_Vangle_) {
            return false;
        }
        if (m_absposx_ != other_.m_absposx_) {
            return false;
        }
        if (m_absposy_ != other_.m_absposy_) {
            return false;
        }
        if (m_absposz_ != other_.m_absposz_) {
            return false;
        }
        if (m_relposx_ != other_.m_relposx_) {
            return false;
        }
        if (m_relposy_ != other_.m_relposy_) {
            return false;
        }
        if (m_relposz_ != other_.m_relposz_) {
            return false;
        }
        if (m_distance_ != other_.m_distance_) {
            return false;
        }
        return true;
    }
    bool LaserMeterPoint::operator != (const LaserMeterPoint& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    uint8_t IndyDS::LaserMeterPoint::hit() const OMG_NOEXCEPT{
        return m_hit_;
    }

    void IndyDS::LaserMeterPoint::hit(uint8_t value) {
        m_hit_ = value;
    }

    float IndyDS::LaserMeterPoint::Hangle() const OMG_NOEXCEPT{
        return m_Hangle_;
    }

    void IndyDS::LaserMeterPoint::Hangle(float value) {
        m_Hangle_ = value;
    }

    float IndyDS::LaserMeterPoint::Vangle() const OMG_NOEXCEPT{
        return m_Vangle_;
    }

    void IndyDS::LaserMeterPoint::Vangle(float value) {
        m_Vangle_ = value;
    }

    double IndyDS::LaserMeterPoint::absposx() const OMG_NOEXCEPT{
        return m_absposx_;
    }

    void IndyDS::LaserMeterPoint::absposx(double value) {
        m_absposx_ = value;
    }

    double IndyDS::LaserMeterPoint::absposy() const OMG_NOEXCEPT{
        return m_absposy_;
    }

    void IndyDS::LaserMeterPoint::absposy(double value) {
        m_absposy_ = value;
    }

    double IndyDS::LaserMeterPoint::absposz() const OMG_NOEXCEPT{
        return m_absposz_;
    }

    void IndyDS::LaserMeterPoint::absposz(double value) {
        m_absposz_ = value;
    }

    float IndyDS::LaserMeterPoint::relposx() const OMG_NOEXCEPT{
        return m_relposx_;
    }

    void IndyDS::LaserMeterPoint::relposx(float value) {
        m_relposx_ = value;
    }

    float IndyDS::LaserMeterPoint::relposy() const OMG_NOEXCEPT{
        return m_relposy_;
    }

    void IndyDS::LaserMeterPoint::relposy(float value) {
        m_relposy_ = value;
    }

    float IndyDS::LaserMeterPoint::relposz() const OMG_NOEXCEPT{
        return m_relposz_;
    }

    void IndyDS::LaserMeterPoint::relposz(float value) {
        m_relposz_ = value;
    }

    float IndyDS::LaserMeterPoint::distance() const OMG_NOEXCEPT{
        return m_distance_;
    }

    void IndyDS::LaserMeterPoint::distance(float value) {
        m_distance_ = value;
    }

    std::ostream& operator << (std::ostream& o,const LaserMeterPoint& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "hit: <" << std::hex<<(int)sample.hit() <<", ";
        o << "Hangle: " << std::setprecision(9) <<sample.Hangle()<<", ";
        o << "Vangle: " << std::setprecision(9) <<sample.Vangle()<<", ";
        o << "absposx: " << std::setprecision(15) <<sample.absposx()<<", ";
        o << "absposy: " << std::setprecision(15) <<sample.absposy()<<", ";
        o << "absposz: " << std::setprecision(15) <<sample.absposz()<<", ";
        o << "relposx: " << std::setprecision(9) <<sample.relposx()<<", ";
        o << "relposy: " << std::setprecision(9) <<sample.relposy()<<", ";
        o << "relposz: " << std::setprecision(9) <<sample.relposz()<<", ";
        o << "distance: " << std::setprecision(9) <<sample.distance() ;
        o <<"]";
        return o;
    }

    // ---- LaserMeter: 

    LaserMeter::LaserMeter() :
        m_frameCount_ (0) ,
        m_globalId_ (0) ,
        m_lastUpdate_ (0.0) ,
        m_nearestPoint_ (0) ,
        m_sensorId_ (0) ,
        m_vhlId_ (0) {
    }   

    LaserMeter::LaserMeter (
        int16_t frameCount_param,
        int32_t globalId_param,
        double lastUpdate_param,
        int16_t nearestPoint_param,
        const dds::core::vector<IndyDS::LaserMeterPoint>& resultArray_param,
        int16_t sensorId_param,
        int16_t vhlId_param)
        :
            m_frameCount_( frameCount_param ),
            m_globalId_( globalId_param ),
            m_lastUpdate_( lastUpdate_param ),
            m_nearestPoint_( nearestPoint_param ),
            m_resultArray_( resultArray_param ),
            m_sensorId_( sensorId_param ),
            m_vhlId_( vhlId_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    LaserMeter::LaserMeter(LaserMeter&& other_) OMG_NOEXCEPT  :m_frameCount_ (std::move(other_.m_frameCount_))
    ,
    m_globalId_ (std::move(other_.m_globalId_))
    ,
    m_lastUpdate_ (std::move(other_.m_lastUpdate_))
    ,
    m_nearestPoint_ (std::move(other_.m_nearestPoint_))
    ,
    m_resultArray_ (std::move(other_.m_resultArray_))
    ,
    m_sensorId_ (std::move(other_.m_sensorId_))
    ,
    m_vhlId_ (std::move(other_.m_vhlId_))
    {
    } 

    LaserMeter& LaserMeter::operator=(LaserMeter&&  other_) OMG_NOEXCEPT {
        LaserMeter tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void LaserMeter::swap(LaserMeter& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_frameCount_, other_.m_frameCount_);
        swap(m_globalId_, other_.m_globalId_);
        swap(m_lastUpdate_, other_.m_lastUpdate_);
        swap(m_nearestPoint_, other_.m_nearestPoint_);
        swap(m_resultArray_, other_.m_resultArray_);
        swap(m_sensorId_, other_.m_sensorId_);
        swap(m_vhlId_, other_.m_vhlId_);
    }  

    bool LaserMeter::operator == (const LaserMeter& other_) const {
        if (m_frameCount_ != other_.m_frameCount_) {
            return false;
        }
        if (m_globalId_ != other_.m_globalId_) {
            return false;
        }
        if (m_lastUpdate_ != other_.m_lastUpdate_) {
            return false;
        }
        if (m_nearestPoint_ != other_.m_nearestPoint_) {
            return false;
        }
        if (m_resultArray_ != other_.m_resultArray_) {
            return false;
        }
        if (m_sensorId_ != other_.m_sensorId_) {
            return false;
        }
        if (m_vhlId_ != other_.m_vhlId_) {
            return false;
        }
        return true;
    }
    bool LaserMeter::operator != (const LaserMeter& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    int16_t IndyDS::LaserMeter::frameCount() const OMG_NOEXCEPT{
        return m_frameCount_;
    }

    void IndyDS::LaserMeter::frameCount(int16_t value) {
        m_frameCount_ = value;
    }

    int32_t IndyDS::LaserMeter::globalId() const OMG_NOEXCEPT{
        return m_globalId_;
    }

    void IndyDS::LaserMeter::globalId(int32_t value) {
        m_globalId_ = value;
    }

    double IndyDS::LaserMeter::lastUpdate() const OMG_NOEXCEPT{
        return m_lastUpdate_;
    }

    void IndyDS::LaserMeter::lastUpdate(double value) {
        m_lastUpdate_ = value;
    }

    int16_t IndyDS::LaserMeter::nearestPoint() const OMG_NOEXCEPT{
        return m_nearestPoint_;
    }

    void IndyDS::LaserMeter::nearestPoint(int16_t value) {
        m_nearestPoint_ = value;
    }

    dds::core::vector<IndyDS::LaserMeterPoint>& IndyDS::LaserMeter::resultArray() OMG_NOEXCEPT {
        return m_resultArray_;
    }

    const dds::core::vector<IndyDS::LaserMeterPoint>& IndyDS::LaserMeter::resultArray() const OMG_NOEXCEPT {
        return m_resultArray_;
    }

    void IndyDS::LaserMeter::resultArray(const dds::core::vector<IndyDS::LaserMeterPoint>& value) {
        m_resultArray_ = value;
    }

    int16_t IndyDS::LaserMeter::sensorId() const OMG_NOEXCEPT{
        return m_sensorId_;
    }

    void IndyDS::LaserMeter::sensorId(int16_t value) {
        m_sensorId_ = value;
    }

    int16_t IndyDS::LaserMeter::vhlId() const OMG_NOEXCEPT{
        return m_vhlId_;
    }

    void IndyDS::LaserMeter::vhlId(int16_t value) {
        m_vhlId_ = value;
    }

    std::ostream& operator << (std::ostream& o,const LaserMeter& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "frameCount: " << sample.frameCount()<<", ";
        o << "globalId: " << sample.globalId()<<", ";
        o << "lastUpdate: " << std::setprecision(15) <<sample.lastUpdate()<<", ";
        o << "nearestPoint: " << sample.nearestPoint()<<", ";
        o << "resultArray: " << sample.resultArray()<<", ";
        o << "sensorId: " << sample.sensorId()<<", ";
        o << "vhlId: " << sample.vhlId() ;
        o <<"]";
        return o;
    }

    // ---- SensorMovableTarget: 

    SensorMovableTarget::SensorMovableTarget() :
        m_id_ (0) ,
        m_scanerId_ (0) ,
        m_detectionStatus_ (0) ,
        m_type__ (0) ,
        m_beamIndex_ (0) ,
        m_existenceTime_ (0.0) ,
        m_anchorPoint_ (0) ,
        m_referenceFrame_ (0) ,
        m_posXInChosenRef_ (0.0) ,
        m_posYInChosenRef_ (0.0) ,
        m_posZInChosenRef_ (0.0) ,
        m_posHeadingInChosenRef_ (0.0f) ,
        m_posPitchInChosenRef_ (0.0f) ,
        m_posRollInChosenRef_ (0.0f) ,
        m_distanceToCollision_ (0.0f) ,
        m_azimuthInSensor_ (0.0f) ,
        m_elevationInSensor_ (0.0f) ,
        m_azimuthInVehicle_ (0.0f) ,
        m_elevationInVehicle_ (0.0f) ,
        m_absoluteSpeedX_ (0.0f) ,
        m_absoluteSpeedY_ (0.0f) ,
        m_absoluteSpeedZ_ (0.0f) ,
        m_absoluteAngularSpeedH_ (0.0f) ,
        m_absoluteAngularSpeedP_ (0.0f) ,
        m_absoluteAngularSpeedR_ (0.0f) ,
        m_relativeSpeedX_ (0.0f) ,
        m_relativeSpeedY_ (0.0f) ,
        m_relativeSpeedZ_ (0.0f) ,
        m_relativeAngularSpeedH_ (0.0f) ,
        m_relativeAngularSpeedP_ (0.0f) ,
        m_relativeAngularSpeedR_ (0.0f) ,
        m_absoluteAccelX_ (0.0f) ,
        m_absoluteAccelY_ (0.0f) ,
        m_absoluteAccelZ_ (0.0f) ,
        m_relativeAccelX_ (0.0f) ,
        m_relativeAccelY_ (0.0f) ,
        m_relativeAccelZ_ (0.0f) ,
        m_length_ (0.0f) ,
        m_width_ (0.0f) ,
        m_height_ (0.0f) ,
        m_visibility_ (0.0f) {
    }   

    SensorMovableTarget::SensorMovableTarget (
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
        float visibility_param)
        :
            m_id_( id_param ),
            m_scanerId_( scanerId_param ),
            m_detectionStatus_( detectionStatus_param ),
            m_type__( type__param ),
            m_beamIndex_( beamIndex_param ),
            m_existenceTime_( existenceTime_param ),
            m_anchorPoint_( anchorPoint_param ),
            m_referenceFrame_( referenceFrame_param ),
            m_posXInChosenRef_( posXInChosenRef_param ),
            m_posYInChosenRef_( posYInChosenRef_param ),
            m_posZInChosenRef_( posZInChosenRef_param ),
            m_posHeadingInChosenRef_( posHeadingInChosenRef_param ),
            m_posPitchInChosenRef_( posPitchInChosenRef_param ),
            m_posRollInChosenRef_( posRollInChosenRef_param ),
            m_distanceToCollision_( distanceToCollision_param ),
            m_azimuthInSensor_( azimuthInSensor_param ),
            m_elevationInSensor_( elevationInSensor_param ),
            m_azimuthInVehicle_( azimuthInVehicle_param ),
            m_elevationInVehicle_( elevationInVehicle_param ),
            m_absoluteSpeedX_( absoluteSpeedX_param ),
            m_absoluteSpeedY_( absoluteSpeedY_param ),
            m_absoluteSpeedZ_( absoluteSpeedZ_param ),
            m_absoluteAngularSpeedH_( absoluteAngularSpeedH_param ),
            m_absoluteAngularSpeedP_( absoluteAngularSpeedP_param ),
            m_absoluteAngularSpeedR_( absoluteAngularSpeedR_param ),
            m_relativeSpeedX_( relativeSpeedX_param ),
            m_relativeSpeedY_( relativeSpeedY_param ),
            m_relativeSpeedZ_( relativeSpeedZ_param ),
            m_relativeAngularSpeedH_( relativeAngularSpeedH_param ),
            m_relativeAngularSpeedP_( relativeAngularSpeedP_param ),
            m_relativeAngularSpeedR_( relativeAngularSpeedR_param ),
            m_absoluteAccelX_( absoluteAccelX_param ),
            m_absoluteAccelY_( absoluteAccelY_param ),
            m_absoluteAccelZ_( absoluteAccelZ_param ),
            m_relativeAccelX_( relativeAccelX_param ),
            m_relativeAccelY_( relativeAccelY_param ),
            m_relativeAccelZ_( relativeAccelZ_param ),
            m_length_( length_param ),
            m_width_( width_param ),
            m_height_( height_param ),
            m_visibility_( visibility_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SensorMovableTarget::SensorMovableTarget(SensorMovableTarget&& other_) OMG_NOEXCEPT  :m_id_ (std::move(other_.m_id_))
    ,
    m_scanerId_ (std::move(other_.m_scanerId_))
    ,
    m_detectionStatus_ (std::move(other_.m_detectionStatus_))
    ,
    m_type__ (std::move(other_.m_type__))
    ,
    m_beamIndex_ (std::move(other_.m_beamIndex_))
    ,
    m_existenceTime_ (std::move(other_.m_existenceTime_))
    ,
    m_anchorPoint_ (std::move(other_.m_anchorPoint_))
    ,
    m_referenceFrame_ (std::move(other_.m_referenceFrame_))
    ,
    m_posXInChosenRef_ (std::move(other_.m_posXInChosenRef_))
    ,
    m_posYInChosenRef_ (std::move(other_.m_posYInChosenRef_))
    ,
    m_posZInChosenRef_ (std::move(other_.m_posZInChosenRef_))
    ,
    m_posHeadingInChosenRef_ (std::move(other_.m_posHeadingInChosenRef_))
    ,
    m_posPitchInChosenRef_ (std::move(other_.m_posPitchInChosenRef_))
    ,
    m_posRollInChosenRef_ (std::move(other_.m_posRollInChosenRef_))
    ,
    m_distanceToCollision_ (std::move(other_.m_distanceToCollision_))
    ,
    m_azimuthInSensor_ (std::move(other_.m_azimuthInSensor_))
    ,
    m_elevationInSensor_ (std::move(other_.m_elevationInSensor_))
    ,
    m_azimuthInVehicle_ (std::move(other_.m_azimuthInVehicle_))
    ,
    m_elevationInVehicle_ (std::move(other_.m_elevationInVehicle_))
    ,
    m_absoluteSpeedX_ (std::move(other_.m_absoluteSpeedX_))
    ,
    m_absoluteSpeedY_ (std::move(other_.m_absoluteSpeedY_))
    ,
    m_absoluteSpeedZ_ (std::move(other_.m_absoluteSpeedZ_))
    ,
    m_absoluteAngularSpeedH_ (std::move(other_.m_absoluteAngularSpeedH_))
    ,
    m_absoluteAngularSpeedP_ (std::move(other_.m_absoluteAngularSpeedP_))
    ,
    m_absoluteAngularSpeedR_ (std::move(other_.m_absoluteAngularSpeedR_))
    ,
    m_relativeSpeedX_ (std::move(other_.m_relativeSpeedX_))
    ,
    m_relativeSpeedY_ (std::move(other_.m_relativeSpeedY_))
    ,
    m_relativeSpeedZ_ (std::move(other_.m_relativeSpeedZ_))
    ,
    m_relativeAngularSpeedH_ (std::move(other_.m_relativeAngularSpeedH_))
    ,
    m_relativeAngularSpeedP_ (std::move(other_.m_relativeAngularSpeedP_))
    ,
    m_relativeAngularSpeedR_ (std::move(other_.m_relativeAngularSpeedR_))
    ,
    m_absoluteAccelX_ (std::move(other_.m_absoluteAccelX_))
    ,
    m_absoluteAccelY_ (std::move(other_.m_absoluteAccelY_))
    ,
    m_absoluteAccelZ_ (std::move(other_.m_absoluteAccelZ_))
    ,
    m_relativeAccelX_ (std::move(other_.m_relativeAccelX_))
    ,
    m_relativeAccelY_ (std::move(other_.m_relativeAccelY_))
    ,
    m_relativeAccelZ_ (std::move(other_.m_relativeAccelZ_))
    ,
    m_length_ (std::move(other_.m_length_))
    ,
    m_width_ (std::move(other_.m_width_))
    ,
    m_height_ (std::move(other_.m_height_))
    ,
    m_visibility_ (std::move(other_.m_visibility_))
    {
    } 

    SensorMovableTarget& SensorMovableTarget::operator=(SensorMovableTarget&&  other_) OMG_NOEXCEPT {
        SensorMovableTarget tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void SensorMovableTarget::swap(SensorMovableTarget& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_id_, other_.m_id_);
        swap(m_scanerId_, other_.m_scanerId_);
        swap(m_detectionStatus_, other_.m_detectionStatus_);
        swap(m_type__, other_.m_type__);
        swap(m_beamIndex_, other_.m_beamIndex_);
        swap(m_existenceTime_, other_.m_existenceTime_);
        swap(m_anchorPoint_, other_.m_anchorPoint_);
        swap(m_referenceFrame_, other_.m_referenceFrame_);
        swap(m_posXInChosenRef_, other_.m_posXInChosenRef_);
        swap(m_posYInChosenRef_, other_.m_posYInChosenRef_);
        swap(m_posZInChosenRef_, other_.m_posZInChosenRef_);
        swap(m_posHeadingInChosenRef_, other_.m_posHeadingInChosenRef_);
        swap(m_posPitchInChosenRef_, other_.m_posPitchInChosenRef_);
        swap(m_posRollInChosenRef_, other_.m_posRollInChosenRef_);
        swap(m_distanceToCollision_, other_.m_distanceToCollision_);
        swap(m_azimuthInSensor_, other_.m_azimuthInSensor_);
        swap(m_elevationInSensor_, other_.m_elevationInSensor_);
        swap(m_azimuthInVehicle_, other_.m_azimuthInVehicle_);
        swap(m_elevationInVehicle_, other_.m_elevationInVehicle_);
        swap(m_absoluteSpeedX_, other_.m_absoluteSpeedX_);
        swap(m_absoluteSpeedY_, other_.m_absoluteSpeedY_);
        swap(m_absoluteSpeedZ_, other_.m_absoluteSpeedZ_);
        swap(m_absoluteAngularSpeedH_, other_.m_absoluteAngularSpeedH_);
        swap(m_absoluteAngularSpeedP_, other_.m_absoluteAngularSpeedP_);
        swap(m_absoluteAngularSpeedR_, other_.m_absoluteAngularSpeedR_);
        swap(m_relativeSpeedX_, other_.m_relativeSpeedX_);
        swap(m_relativeSpeedY_, other_.m_relativeSpeedY_);
        swap(m_relativeSpeedZ_, other_.m_relativeSpeedZ_);
        swap(m_relativeAngularSpeedH_, other_.m_relativeAngularSpeedH_);
        swap(m_relativeAngularSpeedP_, other_.m_relativeAngularSpeedP_);
        swap(m_relativeAngularSpeedR_, other_.m_relativeAngularSpeedR_);
        swap(m_absoluteAccelX_, other_.m_absoluteAccelX_);
        swap(m_absoluteAccelY_, other_.m_absoluteAccelY_);
        swap(m_absoluteAccelZ_, other_.m_absoluteAccelZ_);
        swap(m_relativeAccelX_, other_.m_relativeAccelX_);
        swap(m_relativeAccelY_, other_.m_relativeAccelY_);
        swap(m_relativeAccelZ_, other_.m_relativeAccelZ_);
        swap(m_length_, other_.m_length_);
        swap(m_width_, other_.m_width_);
        swap(m_height_, other_.m_height_);
        swap(m_visibility_, other_.m_visibility_);
    }  

    bool SensorMovableTarget::operator == (const SensorMovableTarget& other_) const {
        if (m_id_ != other_.m_id_) {
            return false;
        }
        if (m_scanerId_ != other_.m_scanerId_) {
            return false;
        }
        if (m_detectionStatus_ != other_.m_detectionStatus_) {
            return false;
        }
        if (m_type__ != other_.m_type__) {
            return false;
        }
        if (m_beamIndex_ != other_.m_beamIndex_) {
            return false;
        }
        if (m_existenceTime_ != other_.m_existenceTime_) {
            return false;
        }
        if (m_anchorPoint_ != other_.m_anchorPoint_) {
            return false;
        }
        if (m_referenceFrame_ != other_.m_referenceFrame_) {
            return false;
        }
        if (m_posXInChosenRef_ != other_.m_posXInChosenRef_) {
            return false;
        }
        if (m_posYInChosenRef_ != other_.m_posYInChosenRef_) {
            return false;
        }
        if (m_posZInChosenRef_ != other_.m_posZInChosenRef_) {
            return false;
        }
        if (m_posHeadingInChosenRef_ != other_.m_posHeadingInChosenRef_) {
            return false;
        }
        if (m_posPitchInChosenRef_ != other_.m_posPitchInChosenRef_) {
            return false;
        }
        if (m_posRollInChosenRef_ != other_.m_posRollInChosenRef_) {
            return false;
        }
        if (m_distanceToCollision_ != other_.m_distanceToCollision_) {
            return false;
        }
        if (m_azimuthInSensor_ != other_.m_azimuthInSensor_) {
            return false;
        }
        if (m_elevationInSensor_ != other_.m_elevationInSensor_) {
            return false;
        }
        if (m_azimuthInVehicle_ != other_.m_azimuthInVehicle_) {
            return false;
        }
        if (m_elevationInVehicle_ != other_.m_elevationInVehicle_) {
            return false;
        }
        if (m_absoluteSpeedX_ != other_.m_absoluteSpeedX_) {
            return false;
        }
        if (m_absoluteSpeedY_ != other_.m_absoluteSpeedY_) {
            return false;
        }
        if (m_absoluteSpeedZ_ != other_.m_absoluteSpeedZ_) {
            return false;
        }
        if (m_absoluteAngularSpeedH_ != other_.m_absoluteAngularSpeedH_) {
            return false;
        }
        if (m_absoluteAngularSpeedP_ != other_.m_absoluteAngularSpeedP_) {
            return false;
        }
        if (m_absoluteAngularSpeedR_ != other_.m_absoluteAngularSpeedR_) {
            return false;
        }
        if (m_relativeSpeedX_ != other_.m_relativeSpeedX_) {
            return false;
        }
        if (m_relativeSpeedY_ != other_.m_relativeSpeedY_) {
            return false;
        }
        if (m_relativeSpeedZ_ != other_.m_relativeSpeedZ_) {
            return false;
        }
        if (m_relativeAngularSpeedH_ != other_.m_relativeAngularSpeedH_) {
            return false;
        }
        if (m_relativeAngularSpeedP_ != other_.m_relativeAngularSpeedP_) {
            return false;
        }
        if (m_relativeAngularSpeedR_ != other_.m_relativeAngularSpeedR_) {
            return false;
        }
        if (m_absoluteAccelX_ != other_.m_absoluteAccelX_) {
            return false;
        }
        if (m_absoluteAccelY_ != other_.m_absoluteAccelY_) {
            return false;
        }
        if (m_absoluteAccelZ_ != other_.m_absoluteAccelZ_) {
            return false;
        }
        if (m_relativeAccelX_ != other_.m_relativeAccelX_) {
            return false;
        }
        if (m_relativeAccelY_ != other_.m_relativeAccelY_) {
            return false;
        }
        if (m_relativeAccelZ_ != other_.m_relativeAccelZ_) {
            return false;
        }
        if (m_length_ != other_.m_length_) {
            return false;
        }
        if (m_width_ != other_.m_width_) {
            return false;
        }
        if (m_height_ != other_.m_height_) {
            return false;
        }
        if (m_visibility_ != other_.m_visibility_) {
            return false;
        }
        return true;
    }
    bool SensorMovableTarget::operator != (const SensorMovableTarget& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    int16_t IndyDS::SensorMovableTarget::id() const OMG_NOEXCEPT{
        return m_id_;
    }

    void IndyDS::SensorMovableTarget::id(int16_t value) {
        m_id_ = value;
    }

    int16_t IndyDS::SensorMovableTarget::scanerId() const OMG_NOEXCEPT{
        return m_scanerId_;
    }

    void IndyDS::SensorMovableTarget::scanerId(int16_t value) {
        m_scanerId_ = value;
    }

    int16_t IndyDS::SensorMovableTarget::detectionStatus() const OMG_NOEXCEPT{
        return m_detectionStatus_;
    }

    void IndyDS::SensorMovableTarget::detectionStatus(int16_t value) {
        m_detectionStatus_ = value;
    }

    int16_t IndyDS::SensorMovableTarget::type_() const OMG_NOEXCEPT{
        return m_type__;
    }

    void IndyDS::SensorMovableTarget::type_(int16_t value) {
        m_type__ = value;
    }

    int16_t IndyDS::SensorMovableTarget::beamIndex() const OMG_NOEXCEPT{
        return m_beamIndex_;
    }

    void IndyDS::SensorMovableTarget::beamIndex(int16_t value) {
        m_beamIndex_ = value;
    }

    double IndyDS::SensorMovableTarget::existenceTime() const OMG_NOEXCEPT{
        return m_existenceTime_;
    }

    void IndyDS::SensorMovableTarget::existenceTime(double value) {
        m_existenceTime_ = value;
    }

    int16_t IndyDS::SensorMovableTarget::anchorPoint() const OMG_NOEXCEPT{
        return m_anchorPoint_;
    }

    void IndyDS::SensorMovableTarget::anchorPoint(int16_t value) {
        m_anchorPoint_ = value;
    }

    int16_t IndyDS::SensorMovableTarget::referenceFrame() const OMG_NOEXCEPT{
        return m_referenceFrame_;
    }

    void IndyDS::SensorMovableTarget::referenceFrame(int16_t value) {
        m_referenceFrame_ = value;
    }

    double IndyDS::SensorMovableTarget::posXInChosenRef() const OMG_NOEXCEPT{
        return m_posXInChosenRef_;
    }

    void IndyDS::SensorMovableTarget::posXInChosenRef(double value) {
        m_posXInChosenRef_ = value;
    }

    double IndyDS::SensorMovableTarget::posYInChosenRef() const OMG_NOEXCEPT{
        return m_posYInChosenRef_;
    }

    void IndyDS::SensorMovableTarget::posYInChosenRef(double value) {
        m_posYInChosenRef_ = value;
    }

    double IndyDS::SensorMovableTarget::posZInChosenRef() const OMG_NOEXCEPT{
        return m_posZInChosenRef_;
    }

    void IndyDS::SensorMovableTarget::posZInChosenRef(double value) {
        m_posZInChosenRef_ = value;
    }

    float IndyDS::SensorMovableTarget::posHeadingInChosenRef() const OMG_NOEXCEPT{
        return m_posHeadingInChosenRef_;
    }

    void IndyDS::SensorMovableTarget::posHeadingInChosenRef(float value) {
        m_posHeadingInChosenRef_ = value;
    }

    float IndyDS::SensorMovableTarget::posPitchInChosenRef() const OMG_NOEXCEPT{
        return m_posPitchInChosenRef_;
    }

    void IndyDS::SensorMovableTarget::posPitchInChosenRef(float value) {
        m_posPitchInChosenRef_ = value;
    }

    float IndyDS::SensorMovableTarget::posRollInChosenRef() const OMG_NOEXCEPT{
        return m_posRollInChosenRef_;
    }

    void IndyDS::SensorMovableTarget::posRollInChosenRef(float value) {
        m_posRollInChosenRef_ = value;
    }

    float IndyDS::SensorMovableTarget::distanceToCollision() const OMG_NOEXCEPT{
        return m_distanceToCollision_;
    }

    void IndyDS::SensorMovableTarget::distanceToCollision(float value) {
        m_distanceToCollision_ = value;
    }

    float IndyDS::SensorMovableTarget::azimuthInSensor() const OMG_NOEXCEPT{
        return m_azimuthInSensor_;
    }

    void IndyDS::SensorMovableTarget::azimuthInSensor(float value) {
        m_azimuthInSensor_ = value;
    }

    float IndyDS::SensorMovableTarget::elevationInSensor() const OMG_NOEXCEPT{
        return m_elevationInSensor_;
    }

    void IndyDS::SensorMovableTarget::elevationInSensor(float value) {
        m_elevationInSensor_ = value;
    }

    float IndyDS::SensorMovableTarget::azimuthInVehicle() const OMG_NOEXCEPT{
        return m_azimuthInVehicle_;
    }

    void IndyDS::SensorMovableTarget::azimuthInVehicle(float value) {
        m_azimuthInVehicle_ = value;
    }

    float IndyDS::SensorMovableTarget::elevationInVehicle() const OMG_NOEXCEPT{
        return m_elevationInVehicle_;
    }

    void IndyDS::SensorMovableTarget::elevationInVehicle(float value) {
        m_elevationInVehicle_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteSpeedX() const OMG_NOEXCEPT{
        return m_absoluteSpeedX_;
    }

    void IndyDS::SensorMovableTarget::absoluteSpeedX(float value) {
        m_absoluteSpeedX_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteSpeedY() const OMG_NOEXCEPT{
        return m_absoluteSpeedY_;
    }

    void IndyDS::SensorMovableTarget::absoluteSpeedY(float value) {
        m_absoluteSpeedY_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteSpeedZ() const OMG_NOEXCEPT{
        return m_absoluteSpeedZ_;
    }

    void IndyDS::SensorMovableTarget::absoluteSpeedZ(float value) {
        m_absoluteSpeedZ_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteAngularSpeedH() const OMG_NOEXCEPT{
        return m_absoluteAngularSpeedH_;
    }

    void IndyDS::SensorMovableTarget::absoluteAngularSpeedH(float value) {
        m_absoluteAngularSpeedH_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteAngularSpeedP() const OMG_NOEXCEPT{
        return m_absoluteAngularSpeedP_;
    }

    void IndyDS::SensorMovableTarget::absoluteAngularSpeedP(float value) {
        m_absoluteAngularSpeedP_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteAngularSpeedR() const OMG_NOEXCEPT{
        return m_absoluteAngularSpeedR_;
    }

    void IndyDS::SensorMovableTarget::absoluteAngularSpeedR(float value) {
        m_absoluteAngularSpeedR_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeSpeedX() const OMG_NOEXCEPT{
        return m_relativeSpeedX_;
    }

    void IndyDS::SensorMovableTarget::relativeSpeedX(float value) {
        m_relativeSpeedX_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeSpeedY() const OMG_NOEXCEPT{
        return m_relativeSpeedY_;
    }

    void IndyDS::SensorMovableTarget::relativeSpeedY(float value) {
        m_relativeSpeedY_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeSpeedZ() const OMG_NOEXCEPT{
        return m_relativeSpeedZ_;
    }

    void IndyDS::SensorMovableTarget::relativeSpeedZ(float value) {
        m_relativeSpeedZ_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeAngularSpeedH() const OMG_NOEXCEPT{
        return m_relativeAngularSpeedH_;
    }

    void IndyDS::SensorMovableTarget::relativeAngularSpeedH(float value) {
        m_relativeAngularSpeedH_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeAngularSpeedP() const OMG_NOEXCEPT{
        return m_relativeAngularSpeedP_;
    }

    void IndyDS::SensorMovableTarget::relativeAngularSpeedP(float value) {
        m_relativeAngularSpeedP_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeAngularSpeedR() const OMG_NOEXCEPT{
        return m_relativeAngularSpeedR_;
    }

    void IndyDS::SensorMovableTarget::relativeAngularSpeedR(float value) {
        m_relativeAngularSpeedR_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteAccelX() const OMG_NOEXCEPT{
        return m_absoluteAccelX_;
    }

    void IndyDS::SensorMovableTarget::absoluteAccelX(float value) {
        m_absoluteAccelX_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteAccelY() const OMG_NOEXCEPT{
        return m_absoluteAccelY_;
    }

    void IndyDS::SensorMovableTarget::absoluteAccelY(float value) {
        m_absoluteAccelY_ = value;
    }

    float IndyDS::SensorMovableTarget::absoluteAccelZ() const OMG_NOEXCEPT{
        return m_absoluteAccelZ_;
    }

    void IndyDS::SensorMovableTarget::absoluteAccelZ(float value) {
        m_absoluteAccelZ_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeAccelX() const OMG_NOEXCEPT{
        return m_relativeAccelX_;
    }

    void IndyDS::SensorMovableTarget::relativeAccelX(float value) {
        m_relativeAccelX_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeAccelY() const OMG_NOEXCEPT{
        return m_relativeAccelY_;
    }

    void IndyDS::SensorMovableTarget::relativeAccelY(float value) {
        m_relativeAccelY_ = value;
    }

    float IndyDS::SensorMovableTarget::relativeAccelZ() const OMG_NOEXCEPT{
        return m_relativeAccelZ_;
    }

    void IndyDS::SensorMovableTarget::relativeAccelZ(float value) {
        m_relativeAccelZ_ = value;
    }

    float IndyDS::SensorMovableTarget::length() const OMG_NOEXCEPT{
        return m_length_;
    }

    void IndyDS::SensorMovableTarget::length(float value) {
        m_length_ = value;
    }

    float IndyDS::SensorMovableTarget::width() const OMG_NOEXCEPT{
        return m_width_;
    }

    void IndyDS::SensorMovableTarget::width(float value) {
        m_width_ = value;
    }

    float IndyDS::SensorMovableTarget::height() const OMG_NOEXCEPT{
        return m_height_;
    }

    void IndyDS::SensorMovableTarget::height(float value) {
        m_height_ = value;
    }

    float IndyDS::SensorMovableTarget::visibility() const OMG_NOEXCEPT{
        return m_visibility_;
    }

    void IndyDS::SensorMovableTarget::visibility(float value) {
        m_visibility_ = value;
    }

    std::ostream& operator << (std::ostream& o,const SensorMovableTarget& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "id: " << sample.id()<<", ";
        o << "scanerId: " << sample.scanerId()<<", ";
        o << "detectionStatus: " << sample.detectionStatus()<<", ";
        o << "type_: " << sample.type_()<<", ";
        o << "beamIndex: " << sample.beamIndex()<<", ";
        o << "existenceTime: " << std::setprecision(15) <<sample.existenceTime()<<", ";
        o << "anchorPoint: " << sample.anchorPoint()<<", ";
        o << "referenceFrame: " << sample.referenceFrame()<<", ";
        o << "posXInChosenRef: " << std::setprecision(15) <<sample.posXInChosenRef()<<", ";
        o << "posYInChosenRef: " << std::setprecision(15) <<sample.posYInChosenRef()<<", ";
        o << "posZInChosenRef: " << std::setprecision(15) <<sample.posZInChosenRef()<<", ";
        o << "posHeadingInChosenRef: " << std::setprecision(9) <<sample.posHeadingInChosenRef()<<", ";
        o << "posPitchInChosenRef: " << std::setprecision(9) <<sample.posPitchInChosenRef()<<", ";
        o << "posRollInChosenRef: " << std::setprecision(9) <<sample.posRollInChosenRef()<<", ";
        o << "distanceToCollision: " << std::setprecision(9) <<sample.distanceToCollision()<<", ";
        o << "azimuthInSensor: " << std::setprecision(9) <<sample.azimuthInSensor()<<", ";
        o << "elevationInSensor: " << std::setprecision(9) <<sample.elevationInSensor()<<", ";
        o << "azimuthInVehicle: " << std::setprecision(9) <<sample.azimuthInVehicle()<<", ";
        o << "elevationInVehicle: " << std::setprecision(9) <<sample.elevationInVehicle()<<", ";
        o << "absoluteSpeedX: " << std::setprecision(9) <<sample.absoluteSpeedX()<<", ";
        o << "absoluteSpeedY: " << std::setprecision(9) <<sample.absoluteSpeedY()<<", ";
        o << "absoluteSpeedZ: " << std::setprecision(9) <<sample.absoluteSpeedZ()<<", ";
        o << "absoluteAngularSpeedH: " << std::setprecision(9) <<sample.absoluteAngularSpeedH()<<", ";
        o << "absoluteAngularSpeedP: " << std::setprecision(9) <<sample.absoluteAngularSpeedP()<<", ";
        o << "absoluteAngularSpeedR: " << std::setprecision(9) <<sample.absoluteAngularSpeedR()<<", ";
        o << "relativeSpeedX: " << std::setprecision(9) <<sample.relativeSpeedX()<<", ";
        o << "relativeSpeedY: " << std::setprecision(9) <<sample.relativeSpeedY()<<", ";
        o << "relativeSpeedZ: " << std::setprecision(9) <<sample.relativeSpeedZ()<<", ";
        o << "relativeAngularSpeedH: " << std::setprecision(9) <<sample.relativeAngularSpeedH()<<", ";
        o << "relativeAngularSpeedP: " << std::setprecision(9) <<sample.relativeAngularSpeedP()<<", ";
        o << "relativeAngularSpeedR: " << std::setprecision(9) <<sample.relativeAngularSpeedR()<<", ";
        o << "absoluteAccelX: " << std::setprecision(9) <<sample.absoluteAccelX()<<", ";
        o << "absoluteAccelY: " << std::setprecision(9) <<sample.absoluteAccelY()<<", ";
        o << "absoluteAccelZ: " << std::setprecision(9) <<sample.absoluteAccelZ()<<", ";
        o << "relativeAccelX: " << std::setprecision(9) <<sample.relativeAccelX()<<", ";
        o << "relativeAccelY: " << std::setprecision(9) <<sample.relativeAccelY()<<", ";
        o << "relativeAccelZ: " << std::setprecision(9) <<sample.relativeAccelZ()<<", ";
        o << "length: " << std::setprecision(9) <<sample.length()<<", ";
        o << "width: " << std::setprecision(9) <<sample.width()<<", ";
        o << "height: " << std::setprecision(9) <<sample.height()<<", ";
        o << "visibility: " << std::setprecision(9) <<sample.visibility() ;
        o <<"]";
        return o;
    }

    // ---- SensorMovableTargets: 

    SensorMovableTargets::SensorMovableTargets() :
        m_egoVhlId_ (0) ,
        m_globalId_ (0) ,
        m_nearestTarget_ (0) ,
        m_timeOfUpdate_ (0.0) {
    }   

    SensorMovableTargets::SensorMovableTargets (
        int16_t egoVhlId_param,
        int32_t globalId_param,
        int16_t nearestTarget_param,
        const dds::core::vector<IndyDS::SensorMovableTarget>& targetsArray_param,
        double timeOfUpdate_param)
        :
            m_egoVhlId_( egoVhlId_param ),
            m_globalId_( globalId_param ),
            m_nearestTarget_( nearestTarget_param ),
            m_targetsArray_( targetsArray_param ),
            m_timeOfUpdate_( timeOfUpdate_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SensorMovableTargets::SensorMovableTargets(SensorMovableTargets&& other_) OMG_NOEXCEPT  :m_egoVhlId_ (std::move(other_.m_egoVhlId_))
    ,
    m_globalId_ (std::move(other_.m_globalId_))
    ,
    m_nearestTarget_ (std::move(other_.m_nearestTarget_))
    ,
    m_targetsArray_ (std::move(other_.m_targetsArray_))
    ,
    m_timeOfUpdate_ (std::move(other_.m_timeOfUpdate_))
    {
    } 

    SensorMovableTargets& SensorMovableTargets::operator=(SensorMovableTargets&&  other_) OMG_NOEXCEPT {
        SensorMovableTargets tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void SensorMovableTargets::swap(SensorMovableTargets& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_egoVhlId_, other_.m_egoVhlId_);
        swap(m_globalId_, other_.m_globalId_);
        swap(m_nearestTarget_, other_.m_nearestTarget_);
        swap(m_targetsArray_, other_.m_targetsArray_);
        swap(m_timeOfUpdate_, other_.m_timeOfUpdate_);
    }  

    bool SensorMovableTargets::operator == (const SensorMovableTargets& other_) const {
        if (m_egoVhlId_ != other_.m_egoVhlId_) {
            return false;
        }
        if (m_globalId_ != other_.m_globalId_) {
            return false;
        }
        if (m_nearestTarget_ != other_.m_nearestTarget_) {
            return false;
        }
        if (m_targetsArray_ != other_.m_targetsArray_) {
            return false;
        }
        if (m_timeOfUpdate_ != other_.m_timeOfUpdate_) {
            return false;
        }
        return true;
    }
    bool SensorMovableTargets::operator != (const SensorMovableTargets& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    int16_t IndyDS::SensorMovableTargets::egoVhlId() const OMG_NOEXCEPT{
        return m_egoVhlId_;
    }

    void IndyDS::SensorMovableTargets::egoVhlId(int16_t value) {
        m_egoVhlId_ = value;
    }

    int32_t IndyDS::SensorMovableTargets::globalId() const OMG_NOEXCEPT{
        return m_globalId_;
    }

    void IndyDS::SensorMovableTargets::globalId(int32_t value) {
        m_globalId_ = value;
    }

    int16_t IndyDS::SensorMovableTargets::nearestTarget() const OMG_NOEXCEPT{
        return m_nearestTarget_;
    }

    void IndyDS::SensorMovableTargets::nearestTarget(int16_t value) {
        m_nearestTarget_ = value;
    }

    dds::core::vector<IndyDS::SensorMovableTarget>& IndyDS::SensorMovableTargets::targetsArray() OMG_NOEXCEPT {
        return m_targetsArray_;
    }

    const dds::core::vector<IndyDS::SensorMovableTarget>& IndyDS::SensorMovableTargets::targetsArray() const OMG_NOEXCEPT {
        return m_targetsArray_;
    }

    void IndyDS::SensorMovableTargets::targetsArray(const dds::core::vector<IndyDS::SensorMovableTarget>& value) {
        m_targetsArray_ = value;
    }

    double IndyDS::SensorMovableTargets::timeOfUpdate() const OMG_NOEXCEPT{
        return m_timeOfUpdate_;
    }

    void IndyDS::SensorMovableTargets::timeOfUpdate(double value) {
        m_timeOfUpdate_ = value;
    }

    std::ostream& operator << (std::ostream& o,const SensorMovableTargets& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "egoVhlId: " << sample.egoVhlId()<<", ";
        o << "globalId: " << sample.globalId()<<", ";
        o << "nearestTarget: " << sample.nearestTarget()<<", ";
        o << "targetsArray: " << sample.targetsArray()<<", ";
        o << "timeOfUpdate: " << std::setprecision(15) <<sample.timeOfUpdate() ;
        o <<"]";
        return o;
    }

    // ---- CabToModelCorrective: 

    CabToModelCorrective::CabToModelCorrective() :
        m_AcceleratorAdditive_ (0.0) ,
        m_AcceleratorMultiplicative_ (0.0) ,
        m_BrakeAdditive_ (0.0) ,
        m_BrakeMultiplicative_ (0.0) ,
        m_ClutchAdditive_ (0.0) ,
        m_ClutchMultiplicative_ (0.0) ,
        m_GearboxAutoMode_ (0) ,
        m_GearboxTakeOver_ (0) ,
        m_IsRatioLimit_ (0) ,
        m_MaxRatio_ (0) ,
        m_MinRatio_ (0) ,
        m_ParkingBrakeAdditive_ (0.0) ,
        m_ParkingBrakeMultiplicative_ (0.0) ,
        m_ShiftDown_ (0) ,
        m_ShiftUp_ (0) ,
        m_TimeOfUpdate_ (0.0) ,
        m_WantedGear_ (0) {
    }   

    CabToModelCorrective::CabToModelCorrective (
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
        int16_t WantedGear_param)
        :
            m_AcceleratorAdditive_( AcceleratorAdditive_param ),
            m_AcceleratorMultiplicative_( AcceleratorMultiplicative_param ),
            m_BrakeAdditive_( BrakeAdditive_param ),
            m_BrakeMultiplicative_( BrakeMultiplicative_param ),
            m_ClutchAdditive_( ClutchAdditive_param ),
            m_ClutchMultiplicative_( ClutchMultiplicative_param ),
            m_GearboxAutoMode_( GearboxAutoMode_param ),
            m_GearboxTakeOver_( GearboxTakeOver_param ),
            m_IsRatioLimit_( IsRatioLimit_param ),
            m_MaxRatio_( MaxRatio_param ),
            m_MinRatio_( MinRatio_param ),
            m_ParkingBrakeAdditive_( ParkingBrakeAdditive_param ),
            m_ParkingBrakeMultiplicative_( ParkingBrakeMultiplicative_param ),
            m_ShiftDown_( ShiftDown_param ),
            m_ShiftUp_( ShiftUp_param ),
            m_TimeOfUpdate_( TimeOfUpdate_param ),
            m_WantedGear_( WantedGear_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    CabToModelCorrective::CabToModelCorrective(CabToModelCorrective&& other_) OMG_NOEXCEPT  :m_AcceleratorAdditive_ (std::move(other_.m_AcceleratorAdditive_))
    ,
    m_AcceleratorMultiplicative_ (std::move(other_.m_AcceleratorMultiplicative_))
    ,
    m_BrakeAdditive_ (std::move(other_.m_BrakeAdditive_))
    ,
    m_BrakeMultiplicative_ (std::move(other_.m_BrakeMultiplicative_))
    ,
    m_ClutchAdditive_ (std::move(other_.m_ClutchAdditive_))
    ,
    m_ClutchMultiplicative_ (std::move(other_.m_ClutchMultiplicative_))
    ,
    m_GearboxAutoMode_ (std::move(other_.m_GearboxAutoMode_))
    ,
    m_GearboxTakeOver_ (std::move(other_.m_GearboxTakeOver_))
    ,
    m_IsRatioLimit_ (std::move(other_.m_IsRatioLimit_))
    ,
    m_MaxRatio_ (std::move(other_.m_MaxRatio_))
    ,
    m_MinRatio_ (std::move(other_.m_MinRatio_))
    ,
    m_ParkingBrakeAdditive_ (std::move(other_.m_ParkingBrakeAdditive_))
    ,
    m_ParkingBrakeMultiplicative_ (std::move(other_.m_ParkingBrakeMultiplicative_))
    ,
    m_ShiftDown_ (std::move(other_.m_ShiftDown_))
    ,
    m_ShiftUp_ (std::move(other_.m_ShiftUp_))
    ,
    m_TimeOfUpdate_ (std::move(other_.m_TimeOfUpdate_))
    ,
    m_WantedGear_ (std::move(other_.m_WantedGear_))
    {
    } 

    CabToModelCorrective& CabToModelCorrective::operator=(CabToModelCorrective&&  other_) OMG_NOEXCEPT {
        CabToModelCorrective tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void CabToModelCorrective::swap(CabToModelCorrective& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_AcceleratorAdditive_, other_.m_AcceleratorAdditive_);
        swap(m_AcceleratorMultiplicative_, other_.m_AcceleratorMultiplicative_);
        swap(m_BrakeAdditive_, other_.m_BrakeAdditive_);
        swap(m_BrakeMultiplicative_, other_.m_BrakeMultiplicative_);
        swap(m_ClutchAdditive_, other_.m_ClutchAdditive_);
        swap(m_ClutchMultiplicative_, other_.m_ClutchMultiplicative_);
        swap(m_GearboxAutoMode_, other_.m_GearboxAutoMode_);
        swap(m_GearboxTakeOver_, other_.m_GearboxTakeOver_);
        swap(m_IsRatioLimit_, other_.m_IsRatioLimit_);
        swap(m_MaxRatio_, other_.m_MaxRatio_);
        swap(m_MinRatio_, other_.m_MinRatio_);
        swap(m_ParkingBrakeAdditive_, other_.m_ParkingBrakeAdditive_);
        swap(m_ParkingBrakeMultiplicative_, other_.m_ParkingBrakeMultiplicative_);
        swap(m_ShiftDown_, other_.m_ShiftDown_);
        swap(m_ShiftUp_, other_.m_ShiftUp_);
        swap(m_TimeOfUpdate_, other_.m_TimeOfUpdate_);
        swap(m_WantedGear_, other_.m_WantedGear_);
    }  

    bool CabToModelCorrective::operator == (const CabToModelCorrective& other_) const {
        if (m_AcceleratorAdditive_ != other_.m_AcceleratorAdditive_) {
            return false;
        }
        if (m_AcceleratorMultiplicative_ != other_.m_AcceleratorMultiplicative_) {
            return false;
        }
        if (m_BrakeAdditive_ != other_.m_BrakeAdditive_) {
            return false;
        }
        if (m_BrakeMultiplicative_ != other_.m_BrakeMultiplicative_) {
            return false;
        }
        if (m_ClutchAdditive_ != other_.m_ClutchAdditive_) {
            return false;
        }
        if (m_ClutchMultiplicative_ != other_.m_ClutchMultiplicative_) {
            return false;
        }
        if (m_GearboxAutoMode_ != other_.m_GearboxAutoMode_) {
            return false;
        }
        if (m_GearboxTakeOver_ != other_.m_GearboxTakeOver_) {
            return false;
        }
        if (m_IsRatioLimit_ != other_.m_IsRatioLimit_) {
            return false;
        }
        if (m_MaxRatio_ != other_.m_MaxRatio_) {
            return false;
        }
        if (m_MinRatio_ != other_.m_MinRatio_) {
            return false;
        }
        if (m_ParkingBrakeAdditive_ != other_.m_ParkingBrakeAdditive_) {
            return false;
        }
        if (m_ParkingBrakeMultiplicative_ != other_.m_ParkingBrakeMultiplicative_) {
            return false;
        }
        if (m_ShiftDown_ != other_.m_ShiftDown_) {
            return false;
        }
        if (m_ShiftUp_ != other_.m_ShiftUp_) {
            return false;
        }
        if (m_TimeOfUpdate_ != other_.m_TimeOfUpdate_) {
            return false;
        }
        if (m_WantedGear_ != other_.m_WantedGear_) {
            return false;
        }
        return true;
    }
    bool CabToModelCorrective::operator != (const CabToModelCorrective& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    double IndyDS::CabToModelCorrective::AcceleratorAdditive() const OMG_NOEXCEPT{
        return m_AcceleratorAdditive_;
    }

    void IndyDS::CabToModelCorrective::AcceleratorAdditive(double value) {
        m_AcceleratorAdditive_ = value;
    }

    double IndyDS::CabToModelCorrective::AcceleratorMultiplicative() const OMG_NOEXCEPT{
        return m_AcceleratorMultiplicative_;
    }

    void IndyDS::CabToModelCorrective::AcceleratorMultiplicative(double value) {
        m_AcceleratorMultiplicative_ = value;
    }

    double IndyDS::CabToModelCorrective::BrakeAdditive() const OMG_NOEXCEPT{
        return m_BrakeAdditive_;
    }

    void IndyDS::CabToModelCorrective::BrakeAdditive(double value) {
        m_BrakeAdditive_ = value;
    }

    double IndyDS::CabToModelCorrective::BrakeMultiplicative() const OMG_NOEXCEPT{
        return m_BrakeMultiplicative_;
    }

    void IndyDS::CabToModelCorrective::BrakeMultiplicative(double value) {
        m_BrakeMultiplicative_ = value;
    }

    double IndyDS::CabToModelCorrective::ClutchAdditive() const OMG_NOEXCEPT{
        return m_ClutchAdditive_;
    }

    void IndyDS::CabToModelCorrective::ClutchAdditive(double value) {
        m_ClutchAdditive_ = value;
    }

    double IndyDS::CabToModelCorrective::ClutchMultiplicative() const OMG_NOEXCEPT{
        return m_ClutchMultiplicative_;
    }

    void IndyDS::CabToModelCorrective::ClutchMultiplicative(double value) {
        m_ClutchMultiplicative_ = value;
    }

    int16_t IndyDS::CabToModelCorrective::GearboxAutoMode() const OMG_NOEXCEPT{
        return m_GearboxAutoMode_;
    }

    void IndyDS::CabToModelCorrective::GearboxAutoMode(int16_t value) {
        m_GearboxAutoMode_ = value;
    }

    uint8_t IndyDS::CabToModelCorrective::GearboxTakeOver() const OMG_NOEXCEPT{
        return m_GearboxTakeOver_;
    }

    void IndyDS::CabToModelCorrective::GearboxTakeOver(uint8_t value) {
        m_GearboxTakeOver_ = value;
    }

    uint8_t IndyDS::CabToModelCorrective::IsRatioLimit() const OMG_NOEXCEPT{
        return m_IsRatioLimit_;
    }

    void IndyDS::CabToModelCorrective::IsRatioLimit(uint8_t value) {
        m_IsRatioLimit_ = value;
    }

    int16_t IndyDS::CabToModelCorrective::MaxRatio() const OMG_NOEXCEPT{
        return m_MaxRatio_;
    }

    void IndyDS::CabToModelCorrective::MaxRatio(int16_t value) {
        m_MaxRatio_ = value;
    }

    int16_t IndyDS::CabToModelCorrective::MinRatio() const OMG_NOEXCEPT{
        return m_MinRatio_;
    }

    void IndyDS::CabToModelCorrective::MinRatio(int16_t value) {
        m_MinRatio_ = value;
    }

    double IndyDS::CabToModelCorrective::ParkingBrakeAdditive() const OMG_NOEXCEPT{
        return m_ParkingBrakeAdditive_;
    }

    void IndyDS::CabToModelCorrective::ParkingBrakeAdditive(double value) {
        m_ParkingBrakeAdditive_ = value;
    }

    double IndyDS::CabToModelCorrective::ParkingBrakeMultiplicative() const OMG_NOEXCEPT{
        return m_ParkingBrakeMultiplicative_;
    }

    void IndyDS::CabToModelCorrective::ParkingBrakeMultiplicative(double value) {
        m_ParkingBrakeMultiplicative_ = value;
    }

    uint8_t IndyDS::CabToModelCorrective::ShiftDown() const OMG_NOEXCEPT{
        return m_ShiftDown_;
    }

    void IndyDS::CabToModelCorrective::ShiftDown(uint8_t value) {
        m_ShiftDown_ = value;
    }

    uint8_t IndyDS::CabToModelCorrective::ShiftUp() const OMG_NOEXCEPT{
        return m_ShiftUp_;
    }

    void IndyDS::CabToModelCorrective::ShiftUp(uint8_t value) {
        m_ShiftUp_ = value;
    }

    double IndyDS::CabToModelCorrective::TimeOfUpdate() const OMG_NOEXCEPT{
        return m_TimeOfUpdate_;
    }

    void IndyDS::CabToModelCorrective::TimeOfUpdate(double value) {
        m_TimeOfUpdate_ = value;
    }

    int16_t IndyDS::CabToModelCorrective::WantedGear() const OMG_NOEXCEPT{
        return m_WantedGear_;
    }

    void IndyDS::CabToModelCorrective::WantedGear(int16_t value) {
        m_WantedGear_ = value;
    }

    std::ostream& operator << (std::ostream& o,const CabToModelCorrective& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "AcceleratorAdditive: " << std::setprecision(15) <<sample.AcceleratorAdditive()<<", ";
        o << "AcceleratorMultiplicative: " << std::setprecision(15) <<sample.AcceleratorMultiplicative()<<", ";
        o << "BrakeAdditive: " << std::setprecision(15) <<sample.BrakeAdditive()<<", ";
        o << "BrakeMultiplicative: " << std::setprecision(15) <<sample.BrakeMultiplicative()<<", ";
        o << "ClutchAdditive: " << std::setprecision(15) <<sample.ClutchAdditive()<<", ";
        o << "ClutchMultiplicative: " << std::setprecision(15) <<sample.ClutchMultiplicative()<<", ";
        o << "GearboxAutoMode: " << sample.GearboxAutoMode()<<", ";
        o << "GearboxTakeOver: <" << std::hex<<(int)sample.GearboxTakeOver() <<", ";
        o << "IsRatioLimit: <" << std::hex<<(int)sample.IsRatioLimit() <<", ";
        o << "MaxRatio: " << sample.MaxRatio()<<", ";
        o << "MinRatio: " << sample.MinRatio()<<", ";
        o << "ParkingBrakeAdditive: " << std::setprecision(15) <<sample.ParkingBrakeAdditive()<<", ";
        o << "ParkingBrakeMultiplicative: " << std::setprecision(15) <<sample.ParkingBrakeMultiplicative()<<", ";
        o << "ShiftDown: <" << std::hex<<(int)sample.ShiftDown() <<", ";
        o << "ShiftUp: <" << std::hex<<(int)sample.ShiftUp() <<", ";
        o << "TimeOfUpdate: " << std::setprecision(15) <<sample.TimeOfUpdate()<<", ";
        o << "WantedGear: " << sample.WantedGear() ;
        o <<"]";
        return o;
    }

    // ---- CabToSteeringCorrective: 

    CabToSteeringCorrective::CabToSteeringCorrective() :
        m_AdditiveSteeringWheelAccel_ (0.0) ,
        m_AdditiveSteeringWheelAngle_ (0.0) ,
        m_AdditiveSteeringWheelSpeed_ (0.0) ,
        m_AdditiveSteeringWheelTorque_ (0.0) ,
        m_MultiplicativeSteeringWheelAccel_ (0.0) ,
        m_MultiplicativeSteeringWheelAngle_ (0.0) ,
        m_MultiplicativeSteeringWheelSpeed_ (0.0) ,
        m_MultiplicativeSteeringWheelTorque_ (0.0) ,
        m_TimeOfUpdate_ (0.0) {
    }   

    CabToSteeringCorrective::CabToSteeringCorrective (
        double AdditiveSteeringWheelAccel_param,
        double AdditiveSteeringWheelAngle_param,
        double AdditiveSteeringWheelSpeed_param,
        double AdditiveSteeringWheelTorque_param,
        double MultiplicativeSteeringWheelAccel_param,
        double MultiplicativeSteeringWheelAngle_param,
        double MultiplicativeSteeringWheelSpeed_param,
        double MultiplicativeSteeringWheelTorque_param,
        double TimeOfUpdate_param)
        :
            m_AdditiveSteeringWheelAccel_( AdditiveSteeringWheelAccel_param ),
            m_AdditiveSteeringWheelAngle_( AdditiveSteeringWheelAngle_param ),
            m_AdditiveSteeringWheelSpeed_( AdditiveSteeringWheelSpeed_param ),
            m_AdditiveSteeringWheelTorque_( AdditiveSteeringWheelTorque_param ),
            m_MultiplicativeSteeringWheelAccel_( MultiplicativeSteeringWheelAccel_param ),
            m_MultiplicativeSteeringWheelAngle_( MultiplicativeSteeringWheelAngle_param ),
            m_MultiplicativeSteeringWheelSpeed_( MultiplicativeSteeringWheelSpeed_param ),
            m_MultiplicativeSteeringWheelTorque_( MultiplicativeSteeringWheelTorque_param ),
            m_TimeOfUpdate_( TimeOfUpdate_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    CabToSteeringCorrective::CabToSteeringCorrective(CabToSteeringCorrective&& other_) OMG_NOEXCEPT  :m_AdditiveSteeringWheelAccel_ (std::move(other_.m_AdditiveSteeringWheelAccel_))
    ,
    m_AdditiveSteeringWheelAngle_ (std::move(other_.m_AdditiveSteeringWheelAngle_))
    ,
    m_AdditiveSteeringWheelSpeed_ (std::move(other_.m_AdditiveSteeringWheelSpeed_))
    ,
    m_AdditiveSteeringWheelTorque_ (std::move(other_.m_AdditiveSteeringWheelTorque_))
    ,
    m_MultiplicativeSteeringWheelAccel_ (std::move(other_.m_MultiplicativeSteeringWheelAccel_))
    ,
    m_MultiplicativeSteeringWheelAngle_ (std::move(other_.m_MultiplicativeSteeringWheelAngle_))
    ,
    m_MultiplicativeSteeringWheelSpeed_ (std::move(other_.m_MultiplicativeSteeringWheelSpeed_))
    ,
    m_MultiplicativeSteeringWheelTorque_ (std::move(other_.m_MultiplicativeSteeringWheelTorque_))
    ,
    m_TimeOfUpdate_ (std::move(other_.m_TimeOfUpdate_))
    {
    } 

    CabToSteeringCorrective& CabToSteeringCorrective::operator=(CabToSteeringCorrective&&  other_) OMG_NOEXCEPT {
        CabToSteeringCorrective tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void CabToSteeringCorrective::swap(CabToSteeringCorrective& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_AdditiveSteeringWheelAccel_, other_.m_AdditiveSteeringWheelAccel_);
        swap(m_AdditiveSteeringWheelAngle_, other_.m_AdditiveSteeringWheelAngle_);
        swap(m_AdditiveSteeringWheelSpeed_, other_.m_AdditiveSteeringWheelSpeed_);
        swap(m_AdditiveSteeringWheelTorque_, other_.m_AdditiveSteeringWheelTorque_);
        swap(m_MultiplicativeSteeringWheelAccel_, other_.m_MultiplicativeSteeringWheelAccel_);
        swap(m_MultiplicativeSteeringWheelAngle_, other_.m_MultiplicativeSteeringWheelAngle_);
        swap(m_MultiplicativeSteeringWheelSpeed_, other_.m_MultiplicativeSteeringWheelSpeed_);
        swap(m_MultiplicativeSteeringWheelTorque_, other_.m_MultiplicativeSteeringWheelTorque_);
        swap(m_TimeOfUpdate_, other_.m_TimeOfUpdate_);
    }  

    bool CabToSteeringCorrective::operator == (const CabToSteeringCorrective& other_) const {
        if (m_AdditiveSteeringWheelAccel_ != other_.m_AdditiveSteeringWheelAccel_) {
            return false;
        }
        if (m_AdditiveSteeringWheelAngle_ != other_.m_AdditiveSteeringWheelAngle_) {
            return false;
        }
        if (m_AdditiveSteeringWheelSpeed_ != other_.m_AdditiveSteeringWheelSpeed_) {
            return false;
        }
        if (m_AdditiveSteeringWheelTorque_ != other_.m_AdditiveSteeringWheelTorque_) {
            return false;
        }
        if (m_MultiplicativeSteeringWheelAccel_ != other_.m_MultiplicativeSteeringWheelAccel_) {
            return false;
        }
        if (m_MultiplicativeSteeringWheelAngle_ != other_.m_MultiplicativeSteeringWheelAngle_) {
            return false;
        }
        if (m_MultiplicativeSteeringWheelSpeed_ != other_.m_MultiplicativeSteeringWheelSpeed_) {
            return false;
        }
        if (m_MultiplicativeSteeringWheelTorque_ != other_.m_MultiplicativeSteeringWheelTorque_) {
            return false;
        }
        if (m_TimeOfUpdate_ != other_.m_TimeOfUpdate_) {
            return false;
        }
        return true;
    }
    bool CabToSteeringCorrective::operator != (const CabToSteeringCorrective& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    double IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelAccel() const OMG_NOEXCEPT{
        return m_AdditiveSteeringWheelAccel_;
    }

    void IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelAccel(double value) {
        m_AdditiveSteeringWheelAccel_ = value;
    }

    double IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelAngle() const OMG_NOEXCEPT{
        return m_AdditiveSteeringWheelAngle_;
    }

    void IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelAngle(double value) {
        m_AdditiveSteeringWheelAngle_ = value;
    }

    double IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelSpeed() const OMG_NOEXCEPT{
        return m_AdditiveSteeringWheelSpeed_;
    }

    void IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelSpeed(double value) {
        m_AdditiveSteeringWheelSpeed_ = value;
    }

    double IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelTorque() const OMG_NOEXCEPT{
        return m_AdditiveSteeringWheelTorque_;
    }

    void IndyDS::CabToSteeringCorrective::AdditiveSteeringWheelTorque(double value) {
        m_AdditiveSteeringWheelTorque_ = value;
    }

    double IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelAccel() const OMG_NOEXCEPT{
        return m_MultiplicativeSteeringWheelAccel_;
    }

    void IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelAccel(double value) {
        m_MultiplicativeSteeringWheelAccel_ = value;
    }

    double IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelAngle() const OMG_NOEXCEPT{
        return m_MultiplicativeSteeringWheelAngle_;
    }

    void IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelAngle(double value) {
        m_MultiplicativeSteeringWheelAngle_ = value;
    }

    double IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelSpeed() const OMG_NOEXCEPT{
        return m_MultiplicativeSteeringWheelSpeed_;
    }

    void IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelSpeed(double value) {
        m_MultiplicativeSteeringWheelSpeed_ = value;
    }

    double IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelTorque() const OMG_NOEXCEPT{
        return m_MultiplicativeSteeringWheelTorque_;
    }

    void IndyDS::CabToSteeringCorrective::MultiplicativeSteeringWheelTorque(double value) {
        m_MultiplicativeSteeringWheelTorque_ = value;
    }

    double IndyDS::CabToSteeringCorrective::TimeOfUpdate() const OMG_NOEXCEPT{
        return m_TimeOfUpdate_;
    }

    void IndyDS::CabToSteeringCorrective::TimeOfUpdate(double value) {
        m_TimeOfUpdate_ = value;
    }

    std::ostream& operator << (std::ostream& o,const CabToSteeringCorrective& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "AdditiveSteeringWheelAccel: " << std::setprecision(15) <<sample.AdditiveSteeringWheelAccel()<<", ";
        o << "AdditiveSteeringWheelAngle: " << std::setprecision(15) <<sample.AdditiveSteeringWheelAngle()<<", ";
        o << "AdditiveSteeringWheelSpeed: " << std::setprecision(15) <<sample.AdditiveSteeringWheelSpeed()<<", ";
        o << "AdditiveSteeringWheelTorque: " << std::setprecision(15) <<sample.AdditiveSteeringWheelTorque()<<", ";
        o << "MultiplicativeSteeringWheelAccel: " << std::setprecision(15) <<sample.MultiplicativeSteeringWheelAccel()<<", ";
        o << "MultiplicativeSteeringWheelAngle: " << std::setprecision(15) <<sample.MultiplicativeSteeringWheelAngle()<<", ";
        o << "MultiplicativeSteeringWheelSpeed: " << std::setprecision(15) <<sample.MultiplicativeSteeringWheelSpeed()<<", ";
        o << "MultiplicativeSteeringWheelTorque: " << std::setprecision(15) <<sample.MultiplicativeSteeringWheelTorque()<<", ";
        o << "TimeOfUpdate: " << std::setprecision(15) <<sample.TimeOfUpdate() ;
        o <<"]";
        return o;
    }

    // ---- VehicleOutput: 

    VehicleOutput::VehicleOutput() :
        m_EngineSpeed_ (0.0) ,
        m_EngineState_ (0) ,
        m_GearBoxMode_ (0) ,
        m_GearEngaged_ (0) ,
        m_SteeringWheelAccel_ (0.0) ,
        m_SteeringWheelAngle_ (0.0) ,
        m_SteeringWheelSpeed_ (0.0) ,
        m_SteeringWheelTorque_ (0.0) ,
        m_TimeOfUpdate_ (0.0) ,
        m_TraveledDistance_ (0.0) ,
        m_auxiliaryLights_ (0) ,
        m_brakePedal_ (0.0) ,
        m_brakeRetarderNotch_ (0.0) ,
        m_cdgAccel_heading_ (0.0) ,
        m_cdgAccel_pitch_ (0.0) ,
        m_cdgAccel_roll_ (0.0) ,
        m_cdgAccel_x_ (0.0) ,
        m_cdgAccel_y_ (0.0) ,
        m_cdgAccel_z_ (0.0) ,
        m_cdgPos_heading_ (0.0) ,
        m_cdgPos_pitch_ (0.0) ,
        m_cdgPos_roll_ (0.0) ,
        m_cdgPos_x_ (0.0) ,
        m_cdgPos_y_ (0.0) ,
        m_cdgPos_z_ (0.0) ,
        m_cdgSpeed_heading_ (0.0) ,
        m_cdgSpeed_pitch_ (0.0) ,
        m_cdgSpeed_roll_ (0.0) ,
        m_cdgSpeed_x_ (0.0) ,
        m_cdgSpeed_y_ (0.0) ,
        m_cdgSpeed_z_ (0.0) ,
        m_clutchPedal_ (0.0) ,
        m_consumption_ (0.0) ,
        m_effectiveIgnitionKeyPosition_ (0) ,
        m_forceLockup_ (0) ,
        m_gasPedal_ (0.0) ,
        m_handBrake_ (0.0) ,
        m_isEngineRetarder_ (0) ,
        m_lights_ (0) ,
        m_lockDiffMode_ (0) ,
        m_plowMode_ (0) ,
        m_pollution_ (0.0) ,
        m_sirens_ (0) ,
        m_trailerBrake_ (0.0) ,
        m_transferChoice_ (0) {
            rti::core::fill_array<double>( m_CustomOutput_, 0.0);
            rti::core::fill_array<int32_t>( m_GroundIndex_, 0);
            rti::core::fill_array<double>( m_LSR_, 0.0);
            rti::core::fill_array<uint8_t>( m_absIsActive_, 0);
            rti::core::fill_array<double>( m_brakeTemperature_, 0.0);
            rti::core::fill_array<double>( m_contactPoint_x_, 0.0);
            rti::core::fill_array<double>( m_contactPoint_y_, 0.0);
            rti::core::fill_array<double>( m_contactPoint_z_, 0.0);
            rti::core::fill_array<double>( m_grip_, 0.0);
            rti::core::fill_array<double>( m_groundNormal_x_, 0.0);
            rti::core::fill_array<double>( m_groundNormal_y_, 0.0);
            rti::core::fill_array<double>( m_groundNormal_z_, 0.0);
            rti::core::fill_array<int32_t>( m_groundType_, 0);
            rti::core::fill_array<double>( m_hubPosition_heading_, 0.0);
            rti::core::fill_array<double>( m_hubPosition_pitch_, 0.0);
            rti::core::fill_array<double>( m_hubPosition_roll_, 0.0);
            rti::core::fill_array<double>( m_hubPosition_x_, 0.0);
            rti::core::fill_array<double>( m_hubPosition_y_, 0.0);
            rti::core::fill_array<double>( m_hubPosition_z_, 0.0);
            rti::core::fill_array<uint8_t>( m_isInContact_, 0);
            rti::core::fill_array<int32_t>( m_laneType_, 0);
            rti::core::fill_array<double>( m_roughnessHeight_, 0.0);
            rti::core::fill_array<double>( m_roughnessHeightStdDeviation_, 0.0);
            rti::core::fill_array<double>( m_roughnessLength_, 0.0);
            rti::core::fill_array<double>( m_roughnessLengthStdDeviation_, 0.0);
            rti::core::fill_array<double>( m_slipAngle_, 0.0);
            rti::core::fill_array<double>( m_tireForce_x_, 0.0);
            rti::core::fill_array<double>( m_tireForce_y_, 0.0);
            rti::core::fill_array<double>( m_tireForce_z_, 0.0);
            rti::core::fill_array<double>( m_waterHeight_, 0.0);
            rti::core::fill_array<double>( m_wheelRotation_, 0.0);
            rti::core::fill_array<double>( m_wheelRotationSpeed_, 0.0);
    }   

    VehicleOutput::VehicleOutput (
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
        const dds::core::array<double, 4>& wheelRotationSpeed_param)
        :
            m_CustomOutput_( CustomOutput_param ),
            m_EngineSpeed_( EngineSpeed_param ),
            m_EngineState_( EngineState_param ),
            m_GearBoxMode_( GearBoxMode_param ),
            m_GearEngaged_( GearEngaged_param ),
            m_GroundIndex_( GroundIndex_param ),
            m_LSR_( LSR_param ),
            m_SteeringWheelAccel_( SteeringWheelAccel_param ),
            m_SteeringWheelAngle_( SteeringWheelAngle_param ),
            m_SteeringWheelSpeed_( SteeringWheelSpeed_param ),
            m_SteeringWheelTorque_( SteeringWheelTorque_param ),
            m_TimeOfUpdate_( TimeOfUpdate_param ),
            m_TraveledDistance_( TraveledDistance_param ),
            m_absIsActive_( absIsActive_param ),
            m_auxiliaryLights_( auxiliaryLights_param ),
            m_brakePedal_( brakePedal_param ),
            m_brakeRetarderNotch_( brakeRetarderNotch_param ),
            m_brakeTemperature_( brakeTemperature_param ),
            m_cdgAccel_heading_( cdgAccel_heading_param ),
            m_cdgAccel_pitch_( cdgAccel_pitch_param ),
            m_cdgAccel_roll_( cdgAccel_roll_param ),
            m_cdgAccel_x_( cdgAccel_x_param ),
            m_cdgAccel_y_( cdgAccel_y_param ),
            m_cdgAccel_z_( cdgAccel_z_param ),
            m_cdgPos_heading_( cdgPos_heading_param ),
            m_cdgPos_pitch_( cdgPos_pitch_param ),
            m_cdgPos_roll_( cdgPos_roll_param ),
            m_cdgPos_x_( cdgPos_x_param ),
            m_cdgPos_y_( cdgPos_y_param ),
            m_cdgPos_z_( cdgPos_z_param ),
            m_cdgSpeed_heading_( cdgSpeed_heading_param ),
            m_cdgSpeed_pitch_( cdgSpeed_pitch_param ),
            m_cdgSpeed_roll_( cdgSpeed_roll_param ),
            m_cdgSpeed_x_( cdgSpeed_x_param ),
            m_cdgSpeed_y_( cdgSpeed_y_param ),
            m_cdgSpeed_z_( cdgSpeed_z_param ),
            m_clutchPedal_( clutchPedal_param ),
            m_consumption_( consumption_param ),
            m_contactPoint_x_( contactPoint_x_param ),
            m_contactPoint_y_( contactPoint_y_param ),
            m_contactPoint_z_( contactPoint_z_param ),
            m_effectiveIgnitionKeyPosition_( effectiveIgnitionKeyPosition_param ),
            m_forceLockup_( forceLockup_param ),
            m_gasPedal_( gasPedal_param ),
            m_grip_( grip_param ),
            m_groundNormal_x_( groundNormal_x_param ),
            m_groundNormal_y_( groundNormal_y_param ),
            m_groundNormal_z_( groundNormal_z_param ),
            m_groundType_( groundType_param ),
            m_handBrake_( handBrake_param ),
            m_hubPosition_heading_( hubPosition_heading_param ),
            m_hubPosition_pitch_( hubPosition_pitch_param ),
            m_hubPosition_roll_( hubPosition_roll_param ),
            m_hubPosition_x_( hubPosition_x_param ),
            m_hubPosition_y_( hubPosition_y_param ),
            m_hubPosition_z_( hubPosition_z_param ),
            m_isEngineRetarder_( isEngineRetarder_param ),
            m_isInContact_( isInContact_param ),
            m_laneType_( laneType_param ),
            m_lights_( lights_param ),
            m_lockDiffMode_( lockDiffMode_param ),
            m_plowMode_( plowMode_param ),
            m_pollution_( pollution_param ),
            m_roughnessHeight_( roughnessHeight_param ),
            m_roughnessHeightStdDeviation_( roughnessHeightStdDeviation_param ),
            m_roughnessLength_( roughnessLength_param ),
            m_roughnessLengthStdDeviation_( roughnessLengthStdDeviation_param ),
            m_sirens_( sirens_param ),
            m_slipAngle_( slipAngle_param ),
            m_tireForce_x_( tireForce_x_param ),
            m_tireForce_y_( tireForce_y_param ),
            m_tireForce_z_( tireForce_z_param ),
            m_trailerBrake_( trailerBrake_param ),
            m_transferChoice_( transferChoice_param ),
            m_waterHeight_( waterHeight_param ),
            m_wheelRotation_( wheelRotation_param ),
            m_wheelRotationSpeed_( wheelRotationSpeed_param ) {
    }
    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    VehicleOutput::VehicleOutput(VehicleOutput&& other_) OMG_NOEXCEPT  :m_CustomOutput_ (std::move(other_.m_CustomOutput_))
    ,
    m_EngineSpeed_ (std::move(other_.m_EngineSpeed_))
    ,
    m_EngineState_ (std::move(other_.m_EngineState_))
    ,
    m_GearBoxMode_ (std::move(other_.m_GearBoxMode_))
    ,
    m_GearEngaged_ (std::move(other_.m_GearEngaged_))
    ,
    m_GroundIndex_ (std::move(other_.m_GroundIndex_))
    ,
    m_LSR_ (std::move(other_.m_LSR_))
    ,
    m_SteeringWheelAccel_ (std::move(other_.m_SteeringWheelAccel_))
    ,
    m_SteeringWheelAngle_ (std::move(other_.m_SteeringWheelAngle_))
    ,
    m_SteeringWheelSpeed_ (std::move(other_.m_SteeringWheelSpeed_))
    ,
    m_SteeringWheelTorque_ (std::move(other_.m_SteeringWheelTorque_))
    ,
    m_TimeOfUpdate_ (std::move(other_.m_TimeOfUpdate_))
    ,
    m_TraveledDistance_ (std::move(other_.m_TraveledDistance_))
    ,
    m_absIsActive_ (std::move(other_.m_absIsActive_))
    ,
    m_auxiliaryLights_ (std::move(other_.m_auxiliaryLights_))
    ,
    m_brakePedal_ (std::move(other_.m_brakePedal_))
    ,
    m_brakeRetarderNotch_ (std::move(other_.m_brakeRetarderNotch_))
    ,
    m_brakeTemperature_ (std::move(other_.m_brakeTemperature_))
    ,
    m_cdgAccel_heading_ (std::move(other_.m_cdgAccel_heading_))
    ,
    m_cdgAccel_pitch_ (std::move(other_.m_cdgAccel_pitch_))
    ,
    m_cdgAccel_roll_ (std::move(other_.m_cdgAccel_roll_))
    ,
    m_cdgAccel_x_ (std::move(other_.m_cdgAccel_x_))
    ,
    m_cdgAccel_y_ (std::move(other_.m_cdgAccel_y_))
    ,
    m_cdgAccel_z_ (std::move(other_.m_cdgAccel_z_))
    ,
    m_cdgPos_heading_ (std::move(other_.m_cdgPos_heading_))
    ,
    m_cdgPos_pitch_ (std::move(other_.m_cdgPos_pitch_))
    ,
    m_cdgPos_roll_ (std::move(other_.m_cdgPos_roll_))
    ,
    m_cdgPos_x_ (std::move(other_.m_cdgPos_x_))
    ,
    m_cdgPos_y_ (std::move(other_.m_cdgPos_y_))
    ,
    m_cdgPos_z_ (std::move(other_.m_cdgPos_z_))
    ,
    m_cdgSpeed_heading_ (std::move(other_.m_cdgSpeed_heading_))
    ,
    m_cdgSpeed_pitch_ (std::move(other_.m_cdgSpeed_pitch_))
    ,
    m_cdgSpeed_roll_ (std::move(other_.m_cdgSpeed_roll_))
    ,
    m_cdgSpeed_x_ (std::move(other_.m_cdgSpeed_x_))
    ,
    m_cdgSpeed_y_ (std::move(other_.m_cdgSpeed_y_))
    ,
    m_cdgSpeed_z_ (std::move(other_.m_cdgSpeed_z_))
    ,
    m_clutchPedal_ (std::move(other_.m_clutchPedal_))
    ,
    m_consumption_ (std::move(other_.m_consumption_))
    ,
    m_contactPoint_x_ (std::move(other_.m_contactPoint_x_))
    ,
    m_contactPoint_y_ (std::move(other_.m_contactPoint_y_))
    ,
    m_contactPoint_z_ (std::move(other_.m_contactPoint_z_))
    ,
    m_effectiveIgnitionKeyPosition_ (std::move(other_.m_effectiveIgnitionKeyPosition_))
    ,
    m_forceLockup_ (std::move(other_.m_forceLockup_))
    ,
    m_gasPedal_ (std::move(other_.m_gasPedal_))
    ,
    m_grip_ (std::move(other_.m_grip_))
    ,
    m_groundNormal_x_ (std::move(other_.m_groundNormal_x_))
    ,
    m_groundNormal_y_ (std::move(other_.m_groundNormal_y_))
    ,
    m_groundNormal_z_ (std::move(other_.m_groundNormal_z_))
    ,
    m_groundType_ (std::move(other_.m_groundType_))
    ,
    m_handBrake_ (std::move(other_.m_handBrake_))
    ,
    m_hubPosition_heading_ (std::move(other_.m_hubPosition_heading_))
    ,
    m_hubPosition_pitch_ (std::move(other_.m_hubPosition_pitch_))
    ,
    m_hubPosition_roll_ (std::move(other_.m_hubPosition_roll_))
    ,
    m_hubPosition_x_ (std::move(other_.m_hubPosition_x_))
    ,
    m_hubPosition_y_ (std::move(other_.m_hubPosition_y_))
    ,
    m_hubPosition_z_ (std::move(other_.m_hubPosition_z_))
    ,
    m_isEngineRetarder_ (std::move(other_.m_isEngineRetarder_))
    ,
    m_isInContact_ (std::move(other_.m_isInContact_))
    ,
    m_laneType_ (std::move(other_.m_laneType_))
    ,
    m_lights_ (std::move(other_.m_lights_))
    ,
    m_lockDiffMode_ (std::move(other_.m_lockDiffMode_))
    ,
    m_plowMode_ (std::move(other_.m_plowMode_))
    ,
    m_pollution_ (std::move(other_.m_pollution_))
    ,
    m_roughnessHeight_ (std::move(other_.m_roughnessHeight_))
    ,
    m_roughnessHeightStdDeviation_ (std::move(other_.m_roughnessHeightStdDeviation_))
    ,
    m_roughnessLength_ (std::move(other_.m_roughnessLength_))
    ,
    m_roughnessLengthStdDeviation_ (std::move(other_.m_roughnessLengthStdDeviation_))
    ,
    m_sirens_ (std::move(other_.m_sirens_))
    ,
    m_slipAngle_ (std::move(other_.m_slipAngle_))
    ,
    m_tireForce_x_ (std::move(other_.m_tireForce_x_))
    ,
    m_tireForce_y_ (std::move(other_.m_tireForce_y_))
    ,
    m_tireForce_z_ (std::move(other_.m_tireForce_z_))
    ,
    m_trailerBrake_ (std::move(other_.m_trailerBrake_))
    ,
    m_transferChoice_ (std::move(other_.m_transferChoice_))
    ,
    m_waterHeight_ (std::move(other_.m_waterHeight_))
    ,
    m_wheelRotation_ (std::move(other_.m_wheelRotation_))
    ,
    m_wheelRotationSpeed_ (std::move(other_.m_wheelRotationSpeed_))
    {
    } 

    VehicleOutput& VehicleOutput::operator=(VehicleOutput&&  other_) OMG_NOEXCEPT {
        VehicleOutput tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void VehicleOutput::swap(VehicleOutput& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_CustomOutput_, other_.m_CustomOutput_);
        swap(m_EngineSpeed_, other_.m_EngineSpeed_);
        swap(m_EngineState_, other_.m_EngineState_);
        swap(m_GearBoxMode_, other_.m_GearBoxMode_);
        swap(m_GearEngaged_, other_.m_GearEngaged_);
        swap(m_GroundIndex_, other_.m_GroundIndex_);
        swap(m_LSR_, other_.m_LSR_);
        swap(m_SteeringWheelAccel_, other_.m_SteeringWheelAccel_);
        swap(m_SteeringWheelAngle_, other_.m_SteeringWheelAngle_);
        swap(m_SteeringWheelSpeed_, other_.m_SteeringWheelSpeed_);
        swap(m_SteeringWheelTorque_, other_.m_SteeringWheelTorque_);
        swap(m_TimeOfUpdate_, other_.m_TimeOfUpdate_);
        swap(m_TraveledDistance_, other_.m_TraveledDistance_);
        swap(m_absIsActive_, other_.m_absIsActive_);
        swap(m_auxiliaryLights_, other_.m_auxiliaryLights_);
        swap(m_brakePedal_, other_.m_brakePedal_);
        swap(m_brakeRetarderNotch_, other_.m_brakeRetarderNotch_);
        swap(m_brakeTemperature_, other_.m_brakeTemperature_);
        swap(m_cdgAccel_heading_, other_.m_cdgAccel_heading_);
        swap(m_cdgAccel_pitch_, other_.m_cdgAccel_pitch_);
        swap(m_cdgAccel_roll_, other_.m_cdgAccel_roll_);
        swap(m_cdgAccel_x_, other_.m_cdgAccel_x_);
        swap(m_cdgAccel_y_, other_.m_cdgAccel_y_);
        swap(m_cdgAccel_z_, other_.m_cdgAccel_z_);
        swap(m_cdgPos_heading_, other_.m_cdgPos_heading_);
        swap(m_cdgPos_pitch_, other_.m_cdgPos_pitch_);
        swap(m_cdgPos_roll_, other_.m_cdgPos_roll_);
        swap(m_cdgPos_x_, other_.m_cdgPos_x_);
        swap(m_cdgPos_y_, other_.m_cdgPos_y_);
        swap(m_cdgPos_z_, other_.m_cdgPos_z_);
        swap(m_cdgSpeed_heading_, other_.m_cdgSpeed_heading_);
        swap(m_cdgSpeed_pitch_, other_.m_cdgSpeed_pitch_);
        swap(m_cdgSpeed_roll_, other_.m_cdgSpeed_roll_);
        swap(m_cdgSpeed_x_, other_.m_cdgSpeed_x_);
        swap(m_cdgSpeed_y_, other_.m_cdgSpeed_y_);
        swap(m_cdgSpeed_z_, other_.m_cdgSpeed_z_);
        swap(m_clutchPedal_, other_.m_clutchPedal_);
        swap(m_consumption_, other_.m_consumption_);
        swap(m_contactPoint_x_, other_.m_contactPoint_x_);
        swap(m_contactPoint_y_, other_.m_contactPoint_y_);
        swap(m_contactPoint_z_, other_.m_contactPoint_z_);
        swap(m_effectiveIgnitionKeyPosition_, other_.m_effectiveIgnitionKeyPosition_);
        swap(m_forceLockup_, other_.m_forceLockup_);
        swap(m_gasPedal_, other_.m_gasPedal_);
        swap(m_grip_, other_.m_grip_);
        swap(m_groundNormal_x_, other_.m_groundNormal_x_);
        swap(m_groundNormal_y_, other_.m_groundNormal_y_);
        swap(m_groundNormal_z_, other_.m_groundNormal_z_);
        swap(m_groundType_, other_.m_groundType_);
        swap(m_handBrake_, other_.m_handBrake_);
        swap(m_hubPosition_heading_, other_.m_hubPosition_heading_);
        swap(m_hubPosition_pitch_, other_.m_hubPosition_pitch_);
        swap(m_hubPosition_roll_, other_.m_hubPosition_roll_);
        swap(m_hubPosition_x_, other_.m_hubPosition_x_);
        swap(m_hubPosition_y_, other_.m_hubPosition_y_);
        swap(m_hubPosition_z_, other_.m_hubPosition_z_);
        swap(m_isEngineRetarder_, other_.m_isEngineRetarder_);
        swap(m_isInContact_, other_.m_isInContact_);
        swap(m_laneType_, other_.m_laneType_);
        swap(m_lights_, other_.m_lights_);
        swap(m_lockDiffMode_, other_.m_lockDiffMode_);
        swap(m_plowMode_, other_.m_plowMode_);
        swap(m_pollution_, other_.m_pollution_);
        swap(m_roughnessHeight_, other_.m_roughnessHeight_);
        swap(m_roughnessHeightStdDeviation_, other_.m_roughnessHeightStdDeviation_);
        swap(m_roughnessLength_, other_.m_roughnessLength_);
        swap(m_roughnessLengthStdDeviation_, other_.m_roughnessLengthStdDeviation_);
        swap(m_sirens_, other_.m_sirens_);
        swap(m_slipAngle_, other_.m_slipAngle_);
        swap(m_tireForce_x_, other_.m_tireForce_x_);
        swap(m_tireForce_y_, other_.m_tireForce_y_);
        swap(m_tireForce_z_, other_.m_tireForce_z_);
        swap(m_trailerBrake_, other_.m_trailerBrake_);
        swap(m_transferChoice_, other_.m_transferChoice_);
        swap(m_waterHeight_, other_.m_waterHeight_);
        swap(m_wheelRotation_, other_.m_wheelRotation_);
        swap(m_wheelRotationSpeed_, other_.m_wheelRotationSpeed_);
    }  

    bool VehicleOutput::operator == (const VehicleOutput& other_) const {
        if (m_CustomOutput_ != other_.m_CustomOutput_) {
            return false;
        }
        if (m_EngineSpeed_ != other_.m_EngineSpeed_) {
            return false;
        }
        if (m_EngineState_ != other_.m_EngineState_) {
            return false;
        }
        if (m_GearBoxMode_ != other_.m_GearBoxMode_) {
            return false;
        }
        if (m_GearEngaged_ != other_.m_GearEngaged_) {
            return false;
        }
        if (m_GroundIndex_ != other_.m_GroundIndex_) {
            return false;
        }
        if (m_LSR_ != other_.m_LSR_) {
            return false;
        }
        if (m_SteeringWheelAccel_ != other_.m_SteeringWheelAccel_) {
            return false;
        }
        if (m_SteeringWheelAngle_ != other_.m_SteeringWheelAngle_) {
            return false;
        }
        if (m_SteeringWheelSpeed_ != other_.m_SteeringWheelSpeed_) {
            return false;
        }
        if (m_SteeringWheelTorque_ != other_.m_SteeringWheelTorque_) {
            return false;
        }
        if (m_TimeOfUpdate_ != other_.m_TimeOfUpdate_) {
            return false;
        }
        if (m_TraveledDistance_ != other_.m_TraveledDistance_) {
            return false;
        }
        if (m_absIsActive_ != other_.m_absIsActive_) {
            return false;
        }
        if (m_auxiliaryLights_ != other_.m_auxiliaryLights_) {
            return false;
        }
        if (m_brakePedal_ != other_.m_brakePedal_) {
            return false;
        }
        if (m_brakeRetarderNotch_ != other_.m_brakeRetarderNotch_) {
            return false;
        }
        if (m_brakeTemperature_ != other_.m_brakeTemperature_) {
            return false;
        }
        if (m_cdgAccel_heading_ != other_.m_cdgAccel_heading_) {
            return false;
        }
        if (m_cdgAccel_pitch_ != other_.m_cdgAccel_pitch_) {
            return false;
        }
        if (m_cdgAccel_roll_ != other_.m_cdgAccel_roll_) {
            return false;
        }
        if (m_cdgAccel_x_ != other_.m_cdgAccel_x_) {
            return false;
        }
        if (m_cdgAccel_y_ != other_.m_cdgAccel_y_) {
            return false;
        }
        if (m_cdgAccel_z_ != other_.m_cdgAccel_z_) {
            return false;
        }
        if (m_cdgPos_heading_ != other_.m_cdgPos_heading_) {
            return false;
        }
        if (m_cdgPos_pitch_ != other_.m_cdgPos_pitch_) {
            return false;
        }
        if (m_cdgPos_roll_ != other_.m_cdgPos_roll_) {
            return false;
        }
        if (m_cdgPos_x_ != other_.m_cdgPos_x_) {
            return false;
        }
        if (m_cdgPos_y_ != other_.m_cdgPos_y_) {
            return false;
        }
        if (m_cdgPos_z_ != other_.m_cdgPos_z_) {
            return false;
        }
        if (m_cdgSpeed_heading_ != other_.m_cdgSpeed_heading_) {
            return false;
        }
        if (m_cdgSpeed_pitch_ != other_.m_cdgSpeed_pitch_) {
            return false;
        }
        if (m_cdgSpeed_roll_ != other_.m_cdgSpeed_roll_) {
            return false;
        }
        if (m_cdgSpeed_x_ != other_.m_cdgSpeed_x_) {
            return false;
        }
        if (m_cdgSpeed_y_ != other_.m_cdgSpeed_y_) {
            return false;
        }
        if (m_cdgSpeed_z_ != other_.m_cdgSpeed_z_) {
            return false;
        }
        if (m_clutchPedal_ != other_.m_clutchPedal_) {
            return false;
        }
        if (m_consumption_ != other_.m_consumption_) {
            return false;
        }
        if (m_contactPoint_x_ != other_.m_contactPoint_x_) {
            return false;
        }
        if (m_contactPoint_y_ != other_.m_contactPoint_y_) {
            return false;
        }
        if (m_contactPoint_z_ != other_.m_contactPoint_z_) {
            return false;
        }
        if (m_effectiveIgnitionKeyPosition_ != other_.m_effectiveIgnitionKeyPosition_) {
            return false;
        }
        if (m_forceLockup_ != other_.m_forceLockup_) {
            return false;
        }
        if (m_gasPedal_ != other_.m_gasPedal_) {
            return false;
        }
        if (m_grip_ != other_.m_grip_) {
            return false;
        }
        if (m_groundNormal_x_ != other_.m_groundNormal_x_) {
            return false;
        }
        if (m_groundNormal_y_ != other_.m_groundNormal_y_) {
            return false;
        }
        if (m_groundNormal_z_ != other_.m_groundNormal_z_) {
            return false;
        }
        if (m_groundType_ != other_.m_groundType_) {
            return false;
        }
        if (m_handBrake_ != other_.m_handBrake_) {
            return false;
        }
        if (m_hubPosition_heading_ != other_.m_hubPosition_heading_) {
            return false;
        }
        if (m_hubPosition_pitch_ != other_.m_hubPosition_pitch_) {
            return false;
        }
        if (m_hubPosition_roll_ != other_.m_hubPosition_roll_) {
            return false;
        }
        if (m_hubPosition_x_ != other_.m_hubPosition_x_) {
            return false;
        }
        if (m_hubPosition_y_ != other_.m_hubPosition_y_) {
            return false;
        }
        if (m_hubPosition_z_ != other_.m_hubPosition_z_) {
            return false;
        }
        if (m_isEngineRetarder_ != other_.m_isEngineRetarder_) {
            return false;
        }
        if (m_isInContact_ != other_.m_isInContact_) {
            return false;
        }
        if (m_laneType_ != other_.m_laneType_) {
            return false;
        }
        if (m_lights_ != other_.m_lights_) {
            return false;
        }
        if (m_lockDiffMode_ != other_.m_lockDiffMode_) {
            return false;
        }
        if (m_plowMode_ != other_.m_plowMode_) {
            return false;
        }
        if (m_pollution_ != other_.m_pollution_) {
            return false;
        }
        if (m_roughnessHeight_ != other_.m_roughnessHeight_) {
            return false;
        }
        if (m_roughnessHeightStdDeviation_ != other_.m_roughnessHeightStdDeviation_) {
            return false;
        }
        if (m_roughnessLength_ != other_.m_roughnessLength_) {
            return false;
        }
        if (m_roughnessLengthStdDeviation_ != other_.m_roughnessLengthStdDeviation_) {
            return false;
        }
        if (m_sirens_ != other_.m_sirens_) {
            return false;
        }
        if (m_slipAngle_ != other_.m_slipAngle_) {
            return false;
        }
        if (m_tireForce_x_ != other_.m_tireForce_x_) {
            return false;
        }
        if (m_tireForce_y_ != other_.m_tireForce_y_) {
            return false;
        }
        if (m_tireForce_z_ != other_.m_tireForce_z_) {
            return false;
        }
        if (m_trailerBrake_ != other_.m_trailerBrake_) {
            return false;
        }
        if (m_transferChoice_ != other_.m_transferChoice_) {
            return false;
        }
        if (m_waterHeight_ != other_.m_waterHeight_) {
            return false;
        }
        if (m_wheelRotation_ != other_.m_wheelRotation_) {
            return false;
        }
        if (m_wheelRotationSpeed_ != other_.m_wheelRotationSpeed_) {
            return false;
        }
        return true;
    }
    bool VehicleOutput::operator != (const VehicleOutput& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    dds::core::array<double, 512>& IndyDS::VehicleOutput::CustomOutput() OMG_NOEXCEPT {
        return m_CustomOutput_;
    }

    const dds::core::array<double, 512>& IndyDS::VehicleOutput::CustomOutput() const OMG_NOEXCEPT {
        return m_CustomOutput_;
    }

    void IndyDS::VehicleOutput::CustomOutput(const dds::core::array<double, 512>& value) {
        m_CustomOutput_ = value;
    }

    double IndyDS::VehicleOutput::EngineSpeed() const OMG_NOEXCEPT{
        return m_EngineSpeed_;
    }

    void IndyDS::VehicleOutput::EngineSpeed(double value) {
        m_EngineSpeed_ = value;
    }

    uint8_t IndyDS::VehicleOutput::EngineState() const OMG_NOEXCEPT{
        return m_EngineState_;
    }

    void IndyDS::VehicleOutput::EngineState(uint8_t value) {
        m_EngineState_ = value;
    }

    int32_t IndyDS::VehicleOutput::GearBoxMode() const OMG_NOEXCEPT{
        return m_GearBoxMode_;
    }

    void IndyDS::VehicleOutput::GearBoxMode(int32_t value) {
        m_GearBoxMode_ = value;
    }

    int32_t IndyDS::VehicleOutput::GearEngaged() const OMG_NOEXCEPT{
        return m_GearEngaged_;
    }

    void IndyDS::VehicleOutput::GearEngaged(int32_t value) {
        m_GearEngaged_ = value;
    }

    dds::core::array<int32_t, 4>& IndyDS::VehicleOutput::GroundIndex() OMG_NOEXCEPT {
        return m_GroundIndex_;
    }

    const dds::core::array<int32_t, 4>& IndyDS::VehicleOutput::GroundIndex() const OMG_NOEXCEPT {
        return m_GroundIndex_;
    }

    void IndyDS::VehicleOutput::GroundIndex(const dds::core::array<int32_t, 4>& value) {
        m_GroundIndex_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::LSR() OMG_NOEXCEPT {
        return m_LSR_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::LSR() const OMG_NOEXCEPT {
        return m_LSR_;
    }

    void IndyDS::VehicleOutput::LSR(const dds::core::array<double, 4>& value) {
        m_LSR_ = value;
    }

    double IndyDS::VehicleOutput::SteeringWheelAccel() const OMG_NOEXCEPT{
        return m_SteeringWheelAccel_;
    }

    void IndyDS::VehicleOutput::SteeringWheelAccel(double value) {
        m_SteeringWheelAccel_ = value;
    }

    double IndyDS::VehicleOutput::SteeringWheelAngle() const OMG_NOEXCEPT{
        return m_SteeringWheelAngle_;
    }

    void IndyDS::VehicleOutput::SteeringWheelAngle(double value) {
        m_SteeringWheelAngle_ = value;
    }

    double IndyDS::VehicleOutput::SteeringWheelSpeed() const OMG_NOEXCEPT{
        return m_SteeringWheelSpeed_;
    }

    void IndyDS::VehicleOutput::SteeringWheelSpeed(double value) {
        m_SteeringWheelSpeed_ = value;
    }

    double IndyDS::VehicleOutput::SteeringWheelTorque() const OMG_NOEXCEPT{
        return m_SteeringWheelTorque_;
    }

    void IndyDS::VehicleOutput::SteeringWheelTorque(double value) {
        m_SteeringWheelTorque_ = value;
    }

    double IndyDS::VehicleOutput::TimeOfUpdate() const OMG_NOEXCEPT{
        return m_TimeOfUpdate_;
    }

    void IndyDS::VehicleOutput::TimeOfUpdate(double value) {
        m_TimeOfUpdate_ = value;
    }

    double IndyDS::VehicleOutput::TraveledDistance() const OMG_NOEXCEPT{
        return m_TraveledDistance_;
    }

    void IndyDS::VehicleOutput::TraveledDistance(double value) {
        m_TraveledDistance_ = value;
    }

    dds::core::array<uint8_t, 4>& IndyDS::VehicleOutput::absIsActive() OMG_NOEXCEPT {
        return m_absIsActive_;
    }

    const dds::core::array<uint8_t, 4>& IndyDS::VehicleOutput::absIsActive() const OMG_NOEXCEPT {
        return m_absIsActive_;
    }

    void IndyDS::VehicleOutput::absIsActive(const dds::core::array<uint8_t, 4>& value) {
        m_absIsActive_ = value;
    }

    int32_t IndyDS::VehicleOutput::auxiliaryLights() const OMG_NOEXCEPT{
        return m_auxiliaryLights_;
    }

    void IndyDS::VehicleOutput::auxiliaryLights(int32_t value) {
        m_auxiliaryLights_ = value;
    }

    double IndyDS::VehicleOutput::brakePedal() const OMG_NOEXCEPT{
        return m_brakePedal_;
    }

    void IndyDS::VehicleOutput::brakePedal(double value) {
        m_brakePedal_ = value;
    }

    double IndyDS::VehicleOutput::brakeRetarderNotch() const OMG_NOEXCEPT{
        return m_brakeRetarderNotch_;
    }

    void IndyDS::VehicleOutput::brakeRetarderNotch(double value) {
        m_brakeRetarderNotch_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::brakeTemperature() OMG_NOEXCEPT {
        return m_brakeTemperature_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::brakeTemperature() const OMG_NOEXCEPT {
        return m_brakeTemperature_;
    }

    void IndyDS::VehicleOutput::brakeTemperature(const dds::core::array<double, 4>& value) {
        m_brakeTemperature_ = value;
    }

    double IndyDS::VehicleOutput::cdgAccel_heading() const OMG_NOEXCEPT{
        return m_cdgAccel_heading_;
    }

    void IndyDS::VehicleOutput::cdgAccel_heading(double value) {
        m_cdgAccel_heading_ = value;
    }

    double IndyDS::VehicleOutput::cdgAccel_pitch() const OMG_NOEXCEPT{
        return m_cdgAccel_pitch_;
    }

    void IndyDS::VehicleOutput::cdgAccel_pitch(double value) {
        m_cdgAccel_pitch_ = value;
    }

    double IndyDS::VehicleOutput::cdgAccel_roll() const OMG_NOEXCEPT{
        return m_cdgAccel_roll_;
    }

    void IndyDS::VehicleOutput::cdgAccel_roll(double value) {
        m_cdgAccel_roll_ = value;
    }

    double IndyDS::VehicleOutput::cdgAccel_x() const OMG_NOEXCEPT{
        return m_cdgAccel_x_;
    }

    void IndyDS::VehicleOutput::cdgAccel_x(double value) {
        m_cdgAccel_x_ = value;
    }

    double IndyDS::VehicleOutput::cdgAccel_y() const OMG_NOEXCEPT{
        return m_cdgAccel_y_;
    }

    void IndyDS::VehicleOutput::cdgAccel_y(double value) {
        m_cdgAccel_y_ = value;
    }

    double IndyDS::VehicleOutput::cdgAccel_z() const OMG_NOEXCEPT{
        return m_cdgAccel_z_;
    }

    void IndyDS::VehicleOutput::cdgAccel_z(double value) {
        m_cdgAccel_z_ = value;
    }

    double IndyDS::VehicleOutput::cdgPos_heading() const OMG_NOEXCEPT{
        return m_cdgPos_heading_;
    }

    void IndyDS::VehicleOutput::cdgPos_heading(double value) {
        m_cdgPos_heading_ = value;
    }

    double IndyDS::VehicleOutput::cdgPos_pitch() const OMG_NOEXCEPT{
        return m_cdgPos_pitch_;
    }

    void IndyDS::VehicleOutput::cdgPos_pitch(double value) {
        m_cdgPos_pitch_ = value;
    }

    double IndyDS::VehicleOutput::cdgPos_roll() const OMG_NOEXCEPT{
        return m_cdgPos_roll_;
    }

    void IndyDS::VehicleOutput::cdgPos_roll(double value) {
        m_cdgPos_roll_ = value;
    }

    double IndyDS::VehicleOutput::cdgPos_x() const OMG_NOEXCEPT{
        return m_cdgPos_x_;
    }

    void IndyDS::VehicleOutput::cdgPos_x(double value) {
        m_cdgPos_x_ = value;
    }

    double IndyDS::VehicleOutput::cdgPos_y() const OMG_NOEXCEPT{
        return m_cdgPos_y_;
    }

    void IndyDS::VehicleOutput::cdgPos_y(double value) {
        m_cdgPos_y_ = value;
    }

    double IndyDS::VehicleOutput::cdgPos_z() const OMG_NOEXCEPT{
        return m_cdgPos_z_;
    }

    void IndyDS::VehicleOutput::cdgPos_z(double value) {
        m_cdgPos_z_ = value;
    }

    double IndyDS::VehicleOutput::cdgSpeed_heading() const OMG_NOEXCEPT{
        return m_cdgSpeed_heading_;
    }

    void IndyDS::VehicleOutput::cdgSpeed_heading(double value) {
        m_cdgSpeed_heading_ = value;
    }

    double IndyDS::VehicleOutput::cdgSpeed_pitch() const OMG_NOEXCEPT{
        return m_cdgSpeed_pitch_;
    }

    void IndyDS::VehicleOutput::cdgSpeed_pitch(double value) {
        m_cdgSpeed_pitch_ = value;
    }

    double IndyDS::VehicleOutput::cdgSpeed_roll() const OMG_NOEXCEPT{
        return m_cdgSpeed_roll_;
    }

    void IndyDS::VehicleOutput::cdgSpeed_roll(double value) {
        m_cdgSpeed_roll_ = value;
    }

    double IndyDS::VehicleOutput::cdgSpeed_x() const OMG_NOEXCEPT{
        return m_cdgSpeed_x_;
    }

    void IndyDS::VehicleOutput::cdgSpeed_x(double value) {
        m_cdgSpeed_x_ = value;
    }

    double IndyDS::VehicleOutput::cdgSpeed_y() const OMG_NOEXCEPT{
        return m_cdgSpeed_y_;
    }

    void IndyDS::VehicleOutput::cdgSpeed_y(double value) {
        m_cdgSpeed_y_ = value;
    }

    double IndyDS::VehicleOutput::cdgSpeed_z() const OMG_NOEXCEPT{
        return m_cdgSpeed_z_;
    }

    void IndyDS::VehicleOutput::cdgSpeed_z(double value) {
        m_cdgSpeed_z_ = value;
    }

    double IndyDS::VehicleOutput::clutchPedal() const OMG_NOEXCEPT{
        return m_clutchPedal_;
    }

    void IndyDS::VehicleOutput::clutchPedal(double value) {
        m_clutchPedal_ = value;
    }

    double IndyDS::VehicleOutput::consumption() const OMG_NOEXCEPT{
        return m_consumption_;
    }

    void IndyDS::VehicleOutput::consumption(double value) {
        m_consumption_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::contactPoint_x() OMG_NOEXCEPT {
        return m_contactPoint_x_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::contactPoint_x() const OMG_NOEXCEPT {
        return m_contactPoint_x_;
    }

    void IndyDS::VehicleOutput::contactPoint_x(const dds::core::array<double, 4>& value) {
        m_contactPoint_x_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::contactPoint_y() OMG_NOEXCEPT {
        return m_contactPoint_y_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::contactPoint_y() const OMG_NOEXCEPT {
        return m_contactPoint_y_;
    }

    void IndyDS::VehicleOutput::contactPoint_y(const dds::core::array<double, 4>& value) {
        m_contactPoint_y_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::contactPoint_z() OMG_NOEXCEPT {
        return m_contactPoint_z_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::contactPoint_z() const OMG_NOEXCEPT {
        return m_contactPoint_z_;
    }

    void IndyDS::VehicleOutput::contactPoint_z(const dds::core::array<double, 4>& value) {
        m_contactPoint_z_ = value;
    }

    int32_t IndyDS::VehicleOutput::effectiveIgnitionKeyPosition() const OMG_NOEXCEPT{
        return m_effectiveIgnitionKeyPosition_;
    }

    void IndyDS::VehicleOutput::effectiveIgnitionKeyPosition(int32_t value) {
        m_effectiveIgnitionKeyPosition_ = value;
    }

    uint8_t IndyDS::VehicleOutput::forceLockup() const OMG_NOEXCEPT{
        return m_forceLockup_;
    }

    void IndyDS::VehicleOutput::forceLockup(uint8_t value) {
        m_forceLockup_ = value;
    }

    double IndyDS::VehicleOutput::gasPedal() const OMG_NOEXCEPT{
        return m_gasPedal_;
    }

    void IndyDS::VehicleOutput::gasPedal(double value) {
        m_gasPedal_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::grip() OMG_NOEXCEPT {
        return m_grip_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::grip() const OMG_NOEXCEPT {
        return m_grip_;
    }

    void IndyDS::VehicleOutput::grip(const dds::core::array<double, 4>& value) {
        m_grip_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::groundNormal_x() OMG_NOEXCEPT {
        return m_groundNormal_x_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::groundNormal_x() const OMG_NOEXCEPT {
        return m_groundNormal_x_;
    }

    void IndyDS::VehicleOutput::groundNormal_x(const dds::core::array<double, 4>& value) {
        m_groundNormal_x_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::groundNormal_y() OMG_NOEXCEPT {
        return m_groundNormal_y_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::groundNormal_y() const OMG_NOEXCEPT {
        return m_groundNormal_y_;
    }

    void IndyDS::VehicleOutput::groundNormal_y(const dds::core::array<double, 4>& value) {
        m_groundNormal_y_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::groundNormal_z() OMG_NOEXCEPT {
        return m_groundNormal_z_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::groundNormal_z() const OMG_NOEXCEPT {
        return m_groundNormal_z_;
    }

    void IndyDS::VehicleOutput::groundNormal_z(const dds::core::array<double, 4>& value) {
        m_groundNormal_z_ = value;
    }

    dds::core::array<int32_t, 4>& IndyDS::VehicleOutput::groundType() OMG_NOEXCEPT {
        return m_groundType_;
    }

    const dds::core::array<int32_t, 4>& IndyDS::VehicleOutput::groundType() const OMG_NOEXCEPT {
        return m_groundType_;
    }

    void IndyDS::VehicleOutput::groundType(const dds::core::array<int32_t, 4>& value) {
        m_groundType_ = value;
    }

    double IndyDS::VehicleOutput::handBrake() const OMG_NOEXCEPT{
        return m_handBrake_;
    }

    void IndyDS::VehicleOutput::handBrake(double value) {
        m_handBrake_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_heading() OMG_NOEXCEPT {
        return m_hubPosition_heading_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_heading() const OMG_NOEXCEPT {
        return m_hubPosition_heading_;
    }

    void IndyDS::VehicleOutput::hubPosition_heading(const dds::core::array<double, 4>& value) {
        m_hubPosition_heading_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_pitch() OMG_NOEXCEPT {
        return m_hubPosition_pitch_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_pitch() const OMG_NOEXCEPT {
        return m_hubPosition_pitch_;
    }

    void IndyDS::VehicleOutput::hubPosition_pitch(const dds::core::array<double, 4>& value) {
        m_hubPosition_pitch_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_roll() OMG_NOEXCEPT {
        return m_hubPosition_roll_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_roll() const OMG_NOEXCEPT {
        return m_hubPosition_roll_;
    }

    void IndyDS::VehicleOutput::hubPosition_roll(const dds::core::array<double, 4>& value) {
        m_hubPosition_roll_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_x() OMG_NOEXCEPT {
        return m_hubPosition_x_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_x() const OMG_NOEXCEPT {
        return m_hubPosition_x_;
    }

    void IndyDS::VehicleOutput::hubPosition_x(const dds::core::array<double, 4>& value) {
        m_hubPosition_x_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_y() OMG_NOEXCEPT {
        return m_hubPosition_y_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_y() const OMG_NOEXCEPT {
        return m_hubPosition_y_;
    }

    void IndyDS::VehicleOutput::hubPosition_y(const dds::core::array<double, 4>& value) {
        m_hubPosition_y_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_z() OMG_NOEXCEPT {
        return m_hubPosition_z_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::hubPosition_z() const OMG_NOEXCEPT {
        return m_hubPosition_z_;
    }

    void IndyDS::VehicleOutput::hubPosition_z(const dds::core::array<double, 4>& value) {
        m_hubPosition_z_ = value;
    }

    uint8_t IndyDS::VehicleOutput::isEngineRetarder() const OMG_NOEXCEPT{
        return m_isEngineRetarder_;
    }

    void IndyDS::VehicleOutput::isEngineRetarder(uint8_t value) {
        m_isEngineRetarder_ = value;
    }

    dds::core::array<uint8_t, 4>& IndyDS::VehicleOutput::isInContact() OMG_NOEXCEPT {
        return m_isInContact_;
    }

    const dds::core::array<uint8_t, 4>& IndyDS::VehicleOutput::isInContact() const OMG_NOEXCEPT {
        return m_isInContact_;
    }

    void IndyDS::VehicleOutput::isInContact(const dds::core::array<uint8_t, 4>& value) {
        m_isInContact_ = value;
    }

    dds::core::array<int32_t, 4>& IndyDS::VehicleOutput::laneType() OMG_NOEXCEPT {
        return m_laneType_;
    }

    const dds::core::array<int32_t, 4>& IndyDS::VehicleOutput::laneType() const OMG_NOEXCEPT {
        return m_laneType_;
    }

    void IndyDS::VehicleOutput::laneType(const dds::core::array<int32_t, 4>& value) {
        m_laneType_ = value;
    }

    int32_t IndyDS::VehicleOutput::lights() const OMG_NOEXCEPT{
        return m_lights_;
    }

    void IndyDS::VehicleOutput::lights(int32_t value) {
        m_lights_ = value;
    }

    int32_t IndyDS::VehicleOutput::lockDiffMode() const OMG_NOEXCEPT{
        return m_lockDiffMode_;
    }

    void IndyDS::VehicleOutput::lockDiffMode(int32_t value) {
        m_lockDiffMode_ = value;
    }

    int32_t IndyDS::VehicleOutput::plowMode() const OMG_NOEXCEPT{
        return m_plowMode_;
    }

    void IndyDS::VehicleOutput::plowMode(int32_t value) {
        m_plowMode_ = value;
    }

    double IndyDS::VehicleOutput::pollution() const OMG_NOEXCEPT{
        return m_pollution_;
    }

    void IndyDS::VehicleOutput::pollution(double value) {
        m_pollution_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessHeight() OMG_NOEXCEPT {
        return m_roughnessHeight_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessHeight() const OMG_NOEXCEPT {
        return m_roughnessHeight_;
    }

    void IndyDS::VehicleOutput::roughnessHeight(const dds::core::array<double, 4>& value) {
        m_roughnessHeight_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessHeightStdDeviation() OMG_NOEXCEPT {
        return m_roughnessHeightStdDeviation_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessHeightStdDeviation() const OMG_NOEXCEPT {
        return m_roughnessHeightStdDeviation_;
    }

    void IndyDS::VehicleOutput::roughnessHeightStdDeviation(const dds::core::array<double, 4>& value) {
        m_roughnessHeightStdDeviation_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessLength() OMG_NOEXCEPT {
        return m_roughnessLength_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessLength() const OMG_NOEXCEPT {
        return m_roughnessLength_;
    }

    void IndyDS::VehicleOutput::roughnessLength(const dds::core::array<double, 4>& value) {
        m_roughnessLength_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessLengthStdDeviation() OMG_NOEXCEPT {
        return m_roughnessLengthStdDeviation_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::roughnessLengthStdDeviation() const OMG_NOEXCEPT {
        return m_roughnessLengthStdDeviation_;
    }

    void IndyDS::VehicleOutput::roughnessLengthStdDeviation(const dds::core::array<double, 4>& value) {
        m_roughnessLengthStdDeviation_ = value;
    }

    int32_t IndyDS::VehicleOutput::sirens() const OMG_NOEXCEPT{
        return m_sirens_;
    }

    void IndyDS::VehicleOutput::sirens(int32_t value) {
        m_sirens_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::slipAngle() OMG_NOEXCEPT {
        return m_slipAngle_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::slipAngle() const OMG_NOEXCEPT {
        return m_slipAngle_;
    }

    void IndyDS::VehicleOutput::slipAngle(const dds::core::array<double, 4>& value) {
        m_slipAngle_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::tireForce_x() OMG_NOEXCEPT {
        return m_tireForce_x_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::tireForce_x() const OMG_NOEXCEPT {
        return m_tireForce_x_;
    }

    void IndyDS::VehicleOutput::tireForce_x(const dds::core::array<double, 4>& value) {
        m_tireForce_x_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::tireForce_y() OMG_NOEXCEPT {
        return m_tireForce_y_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::tireForce_y() const OMG_NOEXCEPT {
        return m_tireForce_y_;
    }

    void IndyDS::VehicleOutput::tireForce_y(const dds::core::array<double, 4>& value) {
        m_tireForce_y_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::tireForce_z() OMG_NOEXCEPT {
        return m_tireForce_z_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::tireForce_z() const OMG_NOEXCEPT {
        return m_tireForce_z_;
    }

    void IndyDS::VehicleOutput::tireForce_z(const dds::core::array<double, 4>& value) {
        m_tireForce_z_ = value;
    }

    double IndyDS::VehicleOutput::trailerBrake() const OMG_NOEXCEPT{
        return m_trailerBrake_;
    }

    void IndyDS::VehicleOutput::trailerBrake(double value) {
        m_trailerBrake_ = value;
    }

    int32_t IndyDS::VehicleOutput::transferChoice() const OMG_NOEXCEPT{
        return m_transferChoice_;
    }

    void IndyDS::VehicleOutput::transferChoice(int32_t value) {
        m_transferChoice_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::waterHeight() OMG_NOEXCEPT {
        return m_waterHeight_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::waterHeight() const OMG_NOEXCEPT {
        return m_waterHeight_;
    }

    void IndyDS::VehicleOutput::waterHeight(const dds::core::array<double, 4>& value) {
        m_waterHeight_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::wheelRotation() OMG_NOEXCEPT {
        return m_wheelRotation_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::wheelRotation() const OMG_NOEXCEPT {
        return m_wheelRotation_;
    }

    void IndyDS::VehicleOutput::wheelRotation(const dds::core::array<double, 4>& value) {
        m_wheelRotation_ = value;
    }

    dds::core::array<double, 4>& IndyDS::VehicleOutput::wheelRotationSpeed() OMG_NOEXCEPT {
        return m_wheelRotationSpeed_;
    }

    const dds::core::array<double, 4>& IndyDS::VehicleOutput::wheelRotationSpeed() const OMG_NOEXCEPT {
        return m_wheelRotationSpeed_;
    }

    void IndyDS::VehicleOutput::wheelRotationSpeed(const dds::core::array<double, 4>& value) {
        m_wheelRotationSpeed_ = value;
    }

    std::ostream& operator << (std::ostream& o,const VehicleOutput& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "CustomOutput: " << sample.CustomOutput()<<", ";
        o << "EngineSpeed: " << std::setprecision(15) <<sample.EngineSpeed()<<", ";
        o << "EngineState: <" << std::hex<<(int)sample.EngineState() <<", ";
        o << "GearBoxMode: " << sample.GearBoxMode()<<", ";
        o << "GearEngaged: " << sample.GearEngaged()<<", ";
        o << "GroundIndex: " << sample.GroundIndex()<<", ";
        o << "LSR: " << sample.LSR()<<", ";
        o << "SteeringWheelAccel: " << std::setprecision(15) <<sample.SteeringWheelAccel()<<", ";
        o << "SteeringWheelAngle: " << std::setprecision(15) <<sample.SteeringWheelAngle()<<", ";
        o << "SteeringWheelSpeed: " << std::setprecision(15) <<sample.SteeringWheelSpeed()<<", ";
        o << "SteeringWheelTorque: " << std::setprecision(15) <<sample.SteeringWheelTorque()<<", ";
        o << "TimeOfUpdate: " << std::setprecision(15) <<sample.TimeOfUpdate()<<", ";
        o << "TraveledDistance: " << std::setprecision(15) <<sample.TraveledDistance()<<", ";
        o << "absIsActive: " << sample.absIsActive()<<", ";
        o << "auxiliaryLights: " << sample.auxiliaryLights()<<", ";
        o << "brakePedal: " << std::setprecision(15) <<sample.brakePedal()<<", ";
        o << "brakeRetarderNotch: " << std::setprecision(15) <<sample.brakeRetarderNotch()<<", ";
        o << "brakeTemperature: " << sample.brakeTemperature()<<", ";
        o << "cdgAccel_heading: " << std::setprecision(15) <<sample.cdgAccel_heading()<<", ";
        o << "cdgAccel_pitch: " << std::setprecision(15) <<sample.cdgAccel_pitch()<<", ";
        o << "cdgAccel_roll: " << std::setprecision(15) <<sample.cdgAccel_roll()<<", ";
        o << "cdgAccel_x: " << std::setprecision(15) <<sample.cdgAccel_x()<<", ";
        o << "cdgAccel_y: " << std::setprecision(15) <<sample.cdgAccel_y()<<", ";
        o << "cdgAccel_z: " << std::setprecision(15) <<sample.cdgAccel_z()<<", ";
        o << "cdgPos_heading: " << std::setprecision(15) <<sample.cdgPos_heading()<<", ";
        o << "cdgPos_pitch: " << std::setprecision(15) <<sample.cdgPos_pitch()<<", ";
        o << "cdgPos_roll: " << std::setprecision(15) <<sample.cdgPos_roll()<<", ";
        o << "cdgPos_x: " << std::setprecision(15) <<sample.cdgPos_x()<<", ";
        o << "cdgPos_y: " << std::setprecision(15) <<sample.cdgPos_y()<<", ";
        o << "cdgPos_z: " << std::setprecision(15) <<sample.cdgPos_z()<<", ";
        o << "cdgSpeed_heading: " << std::setprecision(15) <<sample.cdgSpeed_heading()<<", ";
        o << "cdgSpeed_pitch: " << std::setprecision(15) <<sample.cdgSpeed_pitch()<<", ";
        o << "cdgSpeed_roll: " << std::setprecision(15) <<sample.cdgSpeed_roll()<<", ";
        o << "cdgSpeed_x: " << std::setprecision(15) <<sample.cdgSpeed_x()<<", ";
        o << "cdgSpeed_y: " << std::setprecision(15) <<sample.cdgSpeed_y()<<", ";
        o << "cdgSpeed_z: " << std::setprecision(15) <<sample.cdgSpeed_z()<<", ";
        o << "clutchPedal: " << std::setprecision(15) <<sample.clutchPedal()<<", ";
        o << "consumption: " << std::setprecision(15) <<sample.consumption()<<", ";
        o << "contactPoint_x: " << sample.contactPoint_x()<<", ";
        o << "contactPoint_y: " << sample.contactPoint_y()<<", ";
        o << "contactPoint_z: " << sample.contactPoint_z()<<", ";
        o << "effectiveIgnitionKeyPosition: " << sample.effectiveIgnitionKeyPosition()<<", ";
        o << "forceLockup: <" << std::hex<<(int)sample.forceLockup() <<", ";
        o << "gasPedal: " << std::setprecision(15) <<sample.gasPedal()<<", ";
        o << "grip: " << sample.grip()<<", ";
        o << "groundNormal_x: " << sample.groundNormal_x()<<", ";
        o << "groundNormal_y: " << sample.groundNormal_y()<<", ";
        o << "groundNormal_z: " << sample.groundNormal_z()<<", ";
        o << "groundType: " << sample.groundType()<<", ";
        o << "handBrake: " << std::setprecision(15) <<sample.handBrake()<<", ";
        o << "hubPosition_heading: " << sample.hubPosition_heading()<<", ";
        o << "hubPosition_pitch: " << sample.hubPosition_pitch()<<", ";
        o << "hubPosition_roll: " << sample.hubPosition_roll()<<", ";
        o << "hubPosition_x: " << sample.hubPosition_x()<<", ";
        o << "hubPosition_y: " << sample.hubPosition_y()<<", ";
        o << "hubPosition_z: " << sample.hubPosition_z()<<", ";
        o << "isEngineRetarder: <" << std::hex<<(int)sample.isEngineRetarder() <<", ";
        o << "isInContact: " << sample.isInContact()<<", ";
        o << "laneType: " << sample.laneType()<<", ";
        o << "lights: " << sample.lights()<<", ";
        o << "lockDiffMode: " << sample.lockDiffMode()<<", ";
        o << "plowMode: " << sample.plowMode()<<", ";
        o << "pollution: " << std::setprecision(15) <<sample.pollution()<<", ";
        o << "roughnessHeight: " << sample.roughnessHeight()<<", ";
        o << "roughnessHeightStdDeviation: " << sample.roughnessHeightStdDeviation()<<", ";
        o << "roughnessLength: " << sample.roughnessLength()<<", ";
        o << "roughnessLengthStdDeviation: " << sample.roughnessLengthStdDeviation()<<", ";
        o << "sirens: " << sample.sirens()<<", ";
        o << "slipAngle: " << sample.slipAngle()<<", ";
        o << "tireForce_x: " << sample.tireForce_x()<<", ";
        o << "tireForce_y: " << sample.tireForce_y()<<", ";
        o << "tireForce_z: " << sample.tireForce_z()<<", ";
        o << "trailerBrake: " << std::setprecision(15) <<sample.trailerBrake()<<", ";
        o << "transferChoice: " << sample.transferChoice()<<", ";
        o << "waterHeight: " << sample.waterHeight()<<", ";
        o << "wheelRotation: " << sample.wheelRotation()<<", ";
        o << "wheelRotationSpeed: " << sample.wheelRotationSpeed() ;
        o <<"]";
        return o;
    }

} // namespace IndyDS  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::RoadLinePolynom>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_RoadLinePolynom_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::RoadLinesPolynoms>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_RoadLinesPolynoms_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::SensorTargetBBox>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_SensorTargetBBox_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::SensorMovableTargetsBoundingBoxes>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_SensorMovableTargetsBoundingBoxes_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::GPS>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_GPS_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::LaserMeterPoint>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_LaserMeterPoint_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::LaserMeter>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_LaserMeter_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::SensorMovableTarget>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_SensorMovableTarget_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::SensorMovableTargets>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_SensorMovableTargets_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::CabToModelCorrective>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_CabToModelCorrective_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::CabToSteeringCorrective>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_CabToSteeringCorrective_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<IndyDS::VehicleOutput>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(IndyDS_VehicleOutput_c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<IndyDS::RoadLinePolynom>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_RoadLinePolynom_cPlugin_new,
                IndyDS_RoadLinePolynom_cPlugin_delete);
        }

        void topic_type_support<IndyDS::RoadLinePolynom>::initialize_sample(IndyDS::RoadLinePolynom& sample){

            IndyDS_RoadLinePolynom_c* native_sample=reinterpret_cast<IndyDS_RoadLinePolynom_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_RoadLinePolynom_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_RoadLinePolynom_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::RoadLinePolynom>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::RoadLinePolynom& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_RoadLinePolynom_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_RoadLinePolynom_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_RoadLinePolynom_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_RoadLinePolynom_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::RoadLinePolynom>::from_cdr_buffer(IndyDS::RoadLinePolynom& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_RoadLinePolynom_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_RoadLinePolynom_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::RoadLinePolynom from cdr buffer");
        }

        void topic_type_support<IndyDS::RoadLinesPolynoms>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_RoadLinesPolynoms_cPlugin_new,
                IndyDS_RoadLinesPolynoms_cPlugin_delete);
        }

        void topic_type_support<IndyDS::RoadLinesPolynoms>::initialize_sample(IndyDS::RoadLinesPolynoms& sample){

            IndyDS_RoadLinesPolynoms_c* native_sample=reinterpret_cast<IndyDS_RoadLinesPolynoms_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_RoadLinesPolynoms_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_RoadLinesPolynoms_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::RoadLinesPolynoms>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::RoadLinesPolynoms& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_RoadLinesPolynoms_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_RoadLinesPolynoms_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_RoadLinesPolynoms_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_RoadLinesPolynoms_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::RoadLinesPolynoms>::from_cdr_buffer(IndyDS::RoadLinesPolynoms& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_RoadLinesPolynoms_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_RoadLinesPolynoms_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::RoadLinesPolynoms from cdr buffer");
        }

        void topic_type_support<IndyDS::SensorTargetBBox>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_SensorTargetBBox_cPlugin_new,
                IndyDS_SensorTargetBBox_cPlugin_delete);
        }

        void topic_type_support<IndyDS::SensorTargetBBox>::initialize_sample(IndyDS::SensorTargetBBox& sample){

            IndyDS_SensorTargetBBox_c* native_sample=reinterpret_cast<IndyDS_SensorTargetBBox_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_SensorTargetBBox_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_SensorTargetBBox_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::SensorTargetBBox>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::SensorTargetBBox& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_SensorTargetBBox_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_SensorTargetBBox_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_SensorTargetBBox_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_SensorTargetBBox_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::SensorTargetBBox>::from_cdr_buffer(IndyDS::SensorTargetBBox& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_SensorTargetBBox_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_SensorTargetBBox_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::SensorTargetBBox from cdr buffer");
        }

        void topic_type_support<IndyDS::SensorMovableTargetsBoundingBoxes>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_new,
                IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_delete);
        }

        void topic_type_support<IndyDS::SensorMovableTargetsBoundingBoxes>::initialize_sample(IndyDS::SensorMovableTargetsBoundingBoxes& sample){

            IndyDS_SensorMovableTargetsBoundingBoxes_c* native_sample=reinterpret_cast<IndyDS_SensorMovableTargetsBoundingBoxes_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_SensorMovableTargetsBoundingBoxes_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_SensorMovableTargetsBoundingBoxes_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::SensorMovableTargetsBoundingBoxes>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::SensorMovableTargetsBoundingBoxes& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_SensorMovableTargetsBoundingBoxes_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_SensorMovableTargetsBoundingBoxes_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::SensorMovableTargetsBoundingBoxes>::from_cdr_buffer(IndyDS::SensorMovableTargetsBoundingBoxes& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_SensorMovableTargetsBoundingBoxes_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_SensorMovableTargetsBoundingBoxes_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::SensorMovableTargetsBoundingBoxes from cdr buffer");
        }

        void topic_type_support<IndyDS::GPS>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_GPS_cPlugin_new,
                IndyDS_GPS_cPlugin_delete);
        }

        void topic_type_support<IndyDS::GPS>::initialize_sample(IndyDS::GPS& sample){

            IndyDS_GPS_c* native_sample=reinterpret_cast<IndyDS_GPS_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_GPS_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_GPS_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::GPS>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::GPS& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_GPS_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_GPS_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_GPS_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_GPS_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::GPS>::from_cdr_buffer(IndyDS::GPS& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_GPS_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_GPS_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::GPS from cdr buffer");
        }

        void topic_type_support<IndyDS::LaserMeterPoint>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_LaserMeterPoint_cPlugin_new,
                IndyDS_LaserMeterPoint_cPlugin_delete);
        }

        void topic_type_support<IndyDS::LaserMeterPoint>::initialize_sample(IndyDS::LaserMeterPoint& sample){

            IndyDS_LaserMeterPoint_c* native_sample=reinterpret_cast<IndyDS_LaserMeterPoint_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_LaserMeterPoint_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_LaserMeterPoint_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::LaserMeterPoint>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::LaserMeterPoint& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_LaserMeterPoint_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_LaserMeterPoint_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_LaserMeterPoint_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_LaserMeterPoint_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::LaserMeterPoint>::from_cdr_buffer(IndyDS::LaserMeterPoint& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_LaserMeterPoint_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_LaserMeterPoint_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::LaserMeterPoint from cdr buffer");
        }

        void topic_type_support<IndyDS::LaserMeter>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_LaserMeter_cPlugin_new,
                IndyDS_LaserMeter_cPlugin_delete);
        }

        void topic_type_support<IndyDS::LaserMeter>::initialize_sample(IndyDS::LaserMeter& sample){

            IndyDS_LaserMeter_c* native_sample=reinterpret_cast<IndyDS_LaserMeter_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_LaserMeter_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_LaserMeter_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::LaserMeter>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::LaserMeter& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_LaserMeter_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_LaserMeter_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_LaserMeter_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_LaserMeter_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::LaserMeter>::from_cdr_buffer(IndyDS::LaserMeter& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_LaserMeter_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_LaserMeter_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::LaserMeter from cdr buffer");
        }

        void topic_type_support<IndyDS::SensorMovableTarget>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_SensorMovableTarget_cPlugin_new,
                IndyDS_SensorMovableTarget_cPlugin_delete);
        }

        void topic_type_support<IndyDS::SensorMovableTarget>::initialize_sample(IndyDS::SensorMovableTarget& sample){

            IndyDS_SensorMovableTarget_c* native_sample=reinterpret_cast<IndyDS_SensorMovableTarget_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_SensorMovableTarget_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_SensorMovableTarget_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::SensorMovableTarget>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::SensorMovableTarget& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_SensorMovableTarget_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_SensorMovableTarget_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_SensorMovableTarget_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_SensorMovableTarget_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::SensorMovableTarget>::from_cdr_buffer(IndyDS::SensorMovableTarget& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_SensorMovableTarget_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_SensorMovableTarget_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::SensorMovableTarget from cdr buffer");
        }

        void topic_type_support<IndyDS::SensorMovableTargets>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_SensorMovableTargets_cPlugin_new,
                IndyDS_SensorMovableTargets_cPlugin_delete);
        }

        void topic_type_support<IndyDS::SensorMovableTargets>::initialize_sample(IndyDS::SensorMovableTargets& sample){

            IndyDS_SensorMovableTargets_c* native_sample=reinterpret_cast<IndyDS_SensorMovableTargets_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_SensorMovableTargets_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_SensorMovableTargets_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::SensorMovableTargets>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::SensorMovableTargets& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_SensorMovableTargets_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_SensorMovableTargets_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_SensorMovableTargets_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_SensorMovableTargets_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::SensorMovableTargets>::from_cdr_buffer(IndyDS::SensorMovableTargets& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_SensorMovableTargets_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_SensorMovableTargets_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::SensorMovableTargets from cdr buffer");
        }

        void topic_type_support<IndyDS::CabToModelCorrective>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_CabToModelCorrective_cPlugin_new,
                IndyDS_CabToModelCorrective_cPlugin_delete);
        }

        void topic_type_support<IndyDS::CabToModelCorrective>::initialize_sample(IndyDS::CabToModelCorrective& sample){

            IndyDS_CabToModelCorrective_c* native_sample=reinterpret_cast<IndyDS_CabToModelCorrective_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_CabToModelCorrective_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_CabToModelCorrective_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::CabToModelCorrective>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::CabToModelCorrective& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_CabToModelCorrective_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_CabToModelCorrective_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_CabToModelCorrective_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_CabToModelCorrective_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::CabToModelCorrective>::from_cdr_buffer(IndyDS::CabToModelCorrective& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_CabToModelCorrective_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_CabToModelCorrective_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::CabToModelCorrective from cdr buffer");
        }

        void topic_type_support<IndyDS::CabToSteeringCorrective>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_CabToSteeringCorrective_cPlugin_new,
                IndyDS_CabToSteeringCorrective_cPlugin_delete);
        }

        void topic_type_support<IndyDS::CabToSteeringCorrective>::initialize_sample(IndyDS::CabToSteeringCorrective& sample){

            IndyDS_CabToSteeringCorrective_c* native_sample=reinterpret_cast<IndyDS_CabToSteeringCorrective_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_CabToSteeringCorrective_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_CabToSteeringCorrective_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::CabToSteeringCorrective>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::CabToSteeringCorrective& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_CabToSteeringCorrective_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_CabToSteeringCorrective_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_CabToSteeringCorrective_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_CabToSteeringCorrective_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::CabToSteeringCorrective>::from_cdr_buffer(IndyDS::CabToSteeringCorrective& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_CabToSteeringCorrective_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_CabToSteeringCorrective_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::CabToSteeringCorrective from cdr buffer");
        }

        void topic_type_support<IndyDS::VehicleOutput>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                IndyDS_VehicleOutput_cPlugin_new,
                IndyDS_VehicleOutput_cPlugin_delete);
        }

        void topic_type_support<IndyDS::VehicleOutput>::initialize_sample(IndyDS::VehicleOutput& sample){

            IndyDS_VehicleOutput_c* native_sample=reinterpret_cast<IndyDS_VehicleOutput_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            IndyDS_VehicleOutput_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=IndyDS_VehicleOutput_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<IndyDS::VehicleOutput>::to_cdr_buffer(
            std::vector<char>& buffer, const IndyDS::VehicleOutput& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IndyDS_VehicleOutput_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const IndyDS_VehicleOutput_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IndyDS_VehicleOutput_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const IndyDS_VehicleOutput_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<IndyDS::VehicleOutput>::from_cdr_buffer(IndyDS::VehicleOutput& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IndyDS_VehicleOutput_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<IndyDS_VehicleOutput_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create IndyDS::VehicleOutput from cdr buffer");
        }

    }
}  

