void rootlogon() {
  gSystem->SetBuildDir("$HOME/.root_build_dir");
  gROOT->ProcessLine(".include .");
  gROOT->ProcessLine(".include /usr/local/include");
  gROOT->SetStyle("Plain");
  gStyle->SetPalette(1);
  gSystem->Load("libTree");
  gSystem->Load("libTreePlayer");
  gSystem->Load("libHist");
  R__LOAD_LIBRARY(libfmt);
  // R__LOAD_LIBRARY(libPodd);
  // R__LOAD_LIBRARY(libHallA);
  // R__LOAD_LIBRARY(libHallC);
}
