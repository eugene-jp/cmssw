#ifndef EgammaReco_ClusterShape_h
#define EgammaReco_ClusterShape_h

/** \class reco::ClusterShape
 *  
 * shape vars dataholder for an Ecal cluster
 *
 * \author Michael A. Balazs, UVa
 * \author Luca Lista, INFN
 *
 * \version $Id: ClusterShape.h,v 1.4 2006/05/19 12:00:00 mbalazs Exp $
 * \version $Id: ClusterShape.h,v 1.3 2006/05/11 12:00:00 mbalazs Exp $
 * \version $Id: ClusterShape.h,v 1.2 2006/05/03 11:51:00 mbalazs Exp $
 * \version $Id: ClusterShape.h,v 1.1 2006/04/09 15:40:40 rahatlou Exp $
 *
 */

#include <Rtypes.h>

#include "DataFormats/EgammaReco/interface/ClusterShapeFwd.h"
#include "DataFormats/DetId/interface/DetId.h"
#include "DataFormats/Math/interface/Point3D.h"

namespace reco {

  class ClusterShape {
  public:
    ClusterShape() { }
    ClusterShape( double cEE, double cEP, double cPP, 
                  double eMax, DetId eMaxId, double e2nd, DetId e2ndId,
		  double e2x2, double e3x2, double e3x3, double e5x5,
                  double e3x2Ratio, math::XYZPoint location);
    double eMax() const { return eMax_; }
    double e2nd() const { return e2nd_; }
    double e2x2() const { return e2x2_; }
    double e3x2() const { return e3x2_; }
    double e3x3() const { return e3x3_; }
    double e5x5() const { return e5x5_; }
    double e3x2Ratio() const { return e3x2Ratio_; }
    math::XYZPoint location() const { return location_; }
    double covEtaEta() const { return covEtaEta_; }
    double covEtaPhi() const { return covEtaPhi_; }
    double covPhiPhi() const { return covPhiPhi_; }
    DetId eMaxId() const { return eMaxId_;}
    DetId e2ndId() const { return e2ndId_;}

  private:
    Double32_t covEtaEta_, covEtaPhi_, covPhiPhi_;
    Double32_t eMax_, e2nd_, e2x2_, e3x2_, e3x3_, e5x5_;
    Double32_t e3x2Ratio_;
    math::XYZPoint location_;
    DetId eMaxId_, e2ndId_;
  };

}

#endif
