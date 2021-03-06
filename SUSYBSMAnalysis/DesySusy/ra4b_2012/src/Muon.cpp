#include "Math/VectorUtil.h"
#include "NtupleTools2_h.h"
#include "Muon.h"
#include "Particle.h"

using namespace std;
using namespace ROOT::Math::VectorUtil;



// void Muon::Set(int maptotree_In,LorentzM* momentum_In){

//   pp4=momentum_In;
//   p4=*pp4;
//   maptotree=maptotree_In;

// }

void Muon::Set(int maptotree_In, LorentzM * momentum_In, int particleID_In, int charge_In, string flavor_In, double relIso_In){
  this->Set(maptotree_In, momentum_In, charge_In, relIso_In);
}


void Muon::Set(int maptotree_In, LorentzM * momentum_In, int charge_In, double relIso_In){

  
  this->AnalysisObject::Set(maptotree_In,momentum_In);

  //SET THE CHARGE
  this->SetCharge(charge_In);

  //SET THE PARTICLE ID
  if (charge == 1) {
    this->SetParticleID(-13);
  }
  else if(charge == -1){
    this->SetParticleID(13);
  }else{
    cout<<"THE MUON CHARGE IS NOT CORRECT.ERROR "<<endl;
  }


  //SET THE FLAVOUR
  this->SetFlavor("mu");

  //SET relIso:
  this->SetRelIso(relIso_In);

}

