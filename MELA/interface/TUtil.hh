// March 28 2011
// S. Jindariani (sergo@fnal.gov)
// Y. Gao (ygao@fnal.gov)
// K. Burkett (burkett@fnal.gov)


#ifndef ZZ_COMMON
#define ZZ_COMMON
#include <TLorentzVector.h>
#include <TTree.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TH1D.h>
#include <TH2D.h>
#include <vector>
#include <TFile.h>
#include <TF1.h>
#include "TVar.hh"
#include "TMCFM.hh"
#include "TModHiggsMatEl.hh"
#include "TModGravitonMatEl.hh"
#include "TModZprimeMatEl.hh"
#include "TModHiggsJJMatEl.hh"

using namespace std;
TString DbnEventLepSelName(int i);
void My_choose(TVar::Process process, TVar::Production production, int flavor);
void SetEwkCoupligParameters();
bool My_smalls(double s[][12], int npart);
double SumMatrixElementPDF(TVar::Process procees, TVar::Production production,mcfm_event_type* mcfm_event,double flavor_msq[][11],double* flux,double EBEAM, double coupling[2]);
double JHUGenMatEl(TVar::Process process, TVar::Production production, mcfm_event_type* mcfm_event, double MReso, double GaReso, 
		   double Hggcoupl[3][2], double Hvvcoupl[20][2], double Zqqcoupl[2][2], double Zvvcoupl[2][2],
		   double Gqqcoupl[2][2], double Gggcoupl[5][2], double Gvvcoupl[10][2]);
double HJJMatEl(TVar::Process process,TVar::Production production, const TLorentzVector p[5], double Hggcoupl[3][2], double Hvvcoupl[20][2], TVar::VerbosityLevel verb, double EBEAM);
double SumMEPDF(const TLorentzVector p0, const TLorentzVector p1, double flavor_msq[nmsq][nmsq],  TVar::VerbosityLevel verbosity, double EBEAM);

#endif