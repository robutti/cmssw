#ifndef Geometry_ForwardGeometry_ZdcHardcodeGeometryEP_H
#define Geometry_ForwardGeometry_ZdcHardcodeGeometryEP_H 1


// system include files
#include <memory>
#include "boost/shared_ptr.hpp"

// user include files
#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/ESProducer.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "Geometry/Records/interface/ZDCGeometryRecord.h"
#include "Geometry/CaloGeometry/interface/CaloSubdetectorGeometry.h"
#include "Geometry/ForwardGeometry/interface/ZdcHardcodeGeometryLoader.h"

//
// class decleration
//

class ZdcHardcodeGeometryEP : public edm::ESProducer 
{
   public:
      ZdcHardcodeGeometryEP(const edm::ParameterSet&);
      ~ZdcHardcodeGeometryEP();

      typedef boost::shared_ptr<CaloSubdetectorGeometry> ReturnType;

      ReturnType produce( const ZDCGeometryRecord&   ) ;

   private:

      // ----------member data ---------------------------

      ZdcHardcodeGeometryLoader* m_loader ;

      ZdcTopology m_topology ;

      bool m_applyAlignment ;
};



#endif
