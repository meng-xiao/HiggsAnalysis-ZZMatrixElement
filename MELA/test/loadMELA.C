//
// MELA root package loader - see testKD.C for instructions
//
{
  gSystem->AddIncludePath("-I$ROOFITSYS/include/");
  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");
  gSystem->Load("libZZMatrixElementMELA.so");
  gSystem->Load("$CMSSW_BASE/src/ZZMatrixElement/MELA/data/$SCRAM_ARCH/libmcfm_7p0.so");
  gSystem->Load("$CMSSW_BASE/src/ZZMatrixElement/MELA/data/PdfData/.so");
  gROOT->LoadMacro("$CMSSW_BASE/src/ZZMatrixElement/MELA/interface/Mela.h+");
  gROOT->LoadMacro("$CMSSW_BASE/src/ZZMatrixElement/MELA/interface/TVar.hh+");
  gROOT->LoadMacro("$CMSSW_BASE/src/ZZMatrixElement/MELA/src/computeAngles.h+");
}
