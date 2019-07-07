//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul  5 10:36:46 2019 by ROOT version 6.08/00
// from TTree T/Hall A Analyzer Output DST
// found on file: ROOTfiles/coin_replay_production_8481_2.root
//////////////////////////////////////////////////////////

#ifndef T_h
#define T_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class T {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        H_gtr_xptar;
   Double_t        H_gtr_yptar;
   Double_t        P_gtr_xptar;
   Double_t        P_gtr_yptar;
   Double_t        mmiss;
   Double_t        CTime_epCoinTime_ROC1;
   Double_t        CTime_epCoinTime_ROC2;
   Double_t        CTime_epCoinTime_TRIG1;
   Double_t        CTime_epCoinTime_TRIG4;
   Double_t        H_cal_eprtrack;
   Double_t        H_cal_eprtracknorm;
   Double_t        H_cal_etot;
   Double_t        H_cal_etotnorm;
   Double_t        H_cal_etottracknorm;
   Double_t        H_cal_etrack;
   Double_t        H_cal_etracknorm;
   Double_t        H_cer_npeSum;
   Double_t        H_dc_ntrack;
   Double_t        H_dc_x_fp;
   Double_t        H_dc_xp_fp;
   Double_t        H_dc_y_fp;
   Double_t        H_dc_yp_fp;
   Double_t        H_extcor_xsieve;
   Double_t        H_extcor_ysieve;
   Double_t        H_gtr_beta;
   Double_t        H_gtr_dp;
   Double_t        H_gtr_index;
   Double_t        H_gtr_ok;
   Double_t        H_gtr_p;
   Double_t        H_gtr_ph;
   Double_t        H_gtr_px;
   Double_t        H_gtr_py;
   Double_t        H_gtr_pz;
   Double_t        H_gtr_th;
   Double_t        H_gtr_x;
   Double_t        H_gtr_y;
   Double_t        H_hod_beta;
   Double_t        H_hod_betachisqnotrack;
   Double_t        H_hod_betanotrack;
   Double_t        H_hod_fpHitsTime;
   Double_t        H_hod_starttime;
   Double_t        H_kin_primary_Q2;
   Double_t        H_kin_primary_W;
   Double_t        H_kin_primary_W2;
   Double_t        H_kin_primary_epsilon;
   Double_t        H_kin_primary_nu;
   Double_t        H_kin_primary_omega;
   Double_t        H_kin_primary_ph_q;
   Double_t        H_kin_primary_q3m;
   Double_t        H_kin_primary_q_x;
   Double_t        H_kin_primary_q_y;
   Double_t        H_kin_primary_q_z;
   Double_t        H_kin_primary_scat_ang_deg;
   Double_t        H_kin_primary_scat_ang_rad;
   Double_t        H_kin_primary_th_q;
   Double_t        H_kin_primary_x_bj;
   Double_t        H_rb_raster_fr_xbpm_tar;
   Double_t        H_rb_raster_fr_ybpm_tar;
   Double_t        H_react_x;
   Double_t        H_react_y;
   Double_t        H_react_z;
   Double_t        P_aero_npeSum;
   Double_t        P_cal_eprtrack;
   Double_t        P_cal_eprtracknorm;
   Double_t        P_cal_etot;
   Double_t        P_cal_etotnorm;
   Double_t        P_cal_etottracknorm;
   Double_t        P_cal_etracknorm;
   Double_t        P_cal_pr_eplane;
   Double_t        P_dc_ntrack;
   Double_t        P_dc_x_fp;
   Double_t        P_dc_xp_fp;
   Double_t        P_dc_y_fp;
   Double_t        P_dc_yp_fp;
   Double_t        P_extcor_xsieve;
   Double_t        P_extcor_ysieve;
   Double_t        P_gtr_beta;
   Double_t        P_gtr_dp;
   Double_t        P_gtr_index;
   Double_t        P_gtr_ok;
   Double_t        P_gtr_p;
   Double_t        P_gtr_ph;
   Double_t        P_gtr_px;
   Double_t        P_gtr_py;
   Double_t        P_gtr_pz;
   Double_t        P_gtr_th;
   Double_t        P_gtr_x;
   Double_t        P_gtr_y;
   Double_t        P_hgcer_npeSum;
   Double_t        P_hod_beta;
   Double_t        P_hod_betachisqnotrack;
   Double_t        P_hod_betanotrack;
   Double_t        P_hod_fpHitsTime;
   Double_t        P_hod_goodscinhit;
   Double_t        P_hod_starttime;
   Double_t        P_kin_secondary_Erecoil;
   Double_t        P_kin_secondary_MandelS;
   Double_t        P_kin_secondary_MandelT;
   Double_t        P_kin_secondary_MandelU;
   Double_t        P_kin_secondary_Mrecoil;
   Double_t        P_kin_secondary_Prec_x;
   Double_t        P_kin_secondary_Prec_y;
   Double_t        P_kin_secondary_Prec_z;
   Double_t        P_kin_secondary_emiss;
   Double_t        P_kin_secondary_emiss_nuc;
   Double_t        P_kin_secondary_ph_bq;
   Double_t        P_kin_secondary_ph_xq;
   Double_t        P_kin_secondary_phb_cm;
   Double_t        P_kin_secondary_phx_cm;
   Double_t        P_kin_secondary_pmiss;
   Double_t        P_kin_secondary_pmiss_x;
   Double_t        P_kin_secondary_pmiss_y;
   Double_t        P_kin_secondary_pmiss_z;
   Double_t        P_kin_secondary_px_cm;
   Double_t        P_kin_secondary_t_tot_cm;
   Double_t        P_kin_secondary_tb;
   Double_t        P_kin_secondary_tb_cm;
   Double_t        P_kin_secondary_th_bq;
   Double_t        P_kin_secondary_th_xq;
   Double_t        P_kin_secondary_thb_cm;
   Double_t        P_kin_secondary_thx_cm;
   Double_t        P_kin_secondary_tx;
   Double_t        P_kin_secondary_tx_cm;
   Double_t        P_kin_secondary_xangle;
   Double_t        P_ngcer_npeSum;
   Double_t        P_react_z;
   Double_t        T_coin_h1T_tdcMultiplicity;
   Double_t        T_coin_h1T_tdcTime;
   Double_t        T_coin_h1T_tdcTimeRaw;
   Double_t        T_coin_h1X_tdcMultiplicity;
   Double_t        T_coin_h1X_tdcTime;
   Double_t        T_coin_h1X_tdcTimeRaw;
   Double_t        T_coin_h1Y_tdcMultiplicity;
   Double_t        T_coin_h1Y_tdcTime;
   Double_t        T_coin_h1Y_tdcTimeRaw;
   Double_t        T_coin_h2T_tdcMultiplicity;
   Double_t        T_coin_h2T_tdcTime;
   Double_t        T_coin_h2T_tdcTimeRaw;
   Double_t        T_coin_h2X_tdcMultiplicity;
   Double_t        T_coin_h2X_tdcTime;
   Double_t        T_coin_h2X_tdcTimeRaw;
   Double_t        T_coin_h2Y_tdcMultiplicity;
   Double_t        T_coin_h2Y_tdcTime;
   Double_t        T_coin_h2Y_tdcTimeRaw;
   Double_t        T_coin_hAER_adcMultiplicity;
   Double_t        T_coin_hAER_adcPed;
   Double_t        T_coin_hAER_adcPedRaw;
   Double_t        T_coin_hAER_adcPulseAmp;
   Double_t        T_coin_hAER_adcPulseAmpRaw;
   Double_t        T_coin_hAER_adcPulseInt;
   Double_t        T_coin_hAER_adcPulseIntRaw;
   Double_t        T_coin_hAER_adcPulseTime;
   Double_t        T_coin_hAER_adcPulseTimeRaw;
   Double_t        T_coin_hASUM_adcMultiplicity;
   Double_t        T_coin_hASUM_adcPed;
   Double_t        T_coin_hASUM_adcPedRaw;
   Double_t        T_coin_hASUM_adcPulseAmp;
   Double_t        T_coin_hASUM_adcPulseAmpRaw;
   Double_t        T_coin_hASUM_adcPulseInt;
   Double_t        T_coin_hASUM_adcPulseIntRaw;
   Double_t        T_coin_hASUM_adcPulseTime;
   Double_t        T_coin_hASUM_adcPulseTimeRaw;
   Double_t        T_coin_hASUM_tdcMultiplicity;
   Double_t        T_coin_hASUM_tdcTime;
   Double_t        T_coin_hASUM_tdcTimeRaw;
   Double_t        T_coin_hBSUM_adcMultiplicity;
   Double_t        T_coin_hBSUM_adcPed;
   Double_t        T_coin_hBSUM_adcPedRaw;
   Double_t        T_coin_hBSUM_adcPulseAmp;
   Double_t        T_coin_hBSUM_adcPulseAmpRaw;
   Double_t        T_coin_hBSUM_adcPulseInt;
   Double_t        T_coin_hBSUM_adcPulseIntRaw;
   Double_t        T_coin_hBSUM_adcPulseTime;
   Double_t        T_coin_hBSUM_adcPulseTimeRaw;
   Double_t        T_coin_hBSUM_tdcMultiplicity;
   Double_t        T_coin_hBSUM_tdcTime;
   Double_t        T_coin_hBSUM_tdcTimeRaw;
   Double_t        T_coin_hCER_adcMultiplicity;
   Double_t        T_coin_hCER_adcPed;
   Double_t        T_coin_hCER_adcPedRaw;
   Double_t        T_coin_hCER_adcPulseAmp;
   Double_t        T_coin_hCER_adcPulseAmpRaw;
   Double_t        T_coin_hCER_adcPulseInt;
   Double_t        T_coin_hCER_adcPulseIntRaw;
   Double_t        T_coin_hCER_adcPulseTime;
   Double_t        T_coin_hCER_adcPulseTimeRaw;
   Double_t        T_coin_hCER_tdcMultiplicity;
   Double_t        T_coin_hCER_tdcTime;
   Double_t        T_coin_hCER_tdcTimeRaw;
   Double_t        T_coin_hCSUM_adcMultiplicity;
   Double_t        T_coin_hCSUM_adcPed;
   Double_t        T_coin_hCSUM_adcPedRaw;
   Double_t        T_coin_hCSUM_adcPulseAmp;
   Double_t        T_coin_hCSUM_adcPulseAmpRaw;
   Double_t        T_coin_hCSUM_adcPulseInt;
   Double_t        T_coin_hCSUM_adcPulseIntRaw;
   Double_t        T_coin_hCSUM_adcPulseTime;
   Double_t        T_coin_hCSUM_adcPulseTimeRaw;
   Double_t        T_coin_hCSUM_tdcMultiplicity;
   Double_t        T_coin_hCSUM_tdcTime;
   Double_t        T_coin_hCSUM_tdcTimeRaw;
   Double_t        T_coin_hDCREF1_tdcMultiplicity;
   Double_t        T_coin_hDCREF1_tdcTime;
   Double_t        T_coin_hDCREF1_tdcTimeRaw;
   Double_t        T_coin_hDCREF2_tdcMultiplicity;
   Double_t        T_coin_hDCREF2_tdcTime;
   Double_t        T_coin_hDCREF2_tdcTimeRaw;
   Double_t        T_coin_hDCREF3_tdcMultiplicity;
   Double_t        T_coin_hDCREF3_tdcTime;
   Double_t        T_coin_hDCREF3_tdcTimeRaw;
   Double_t        T_coin_hDCREF4_tdcMultiplicity;
   Double_t        T_coin_hDCREF4_tdcTime;
   Double_t        T_coin_hDCREF4_tdcTimeRaw;
   Double_t        T_coin_hDCREF5_tdcMultiplicity;
   Double_t        T_coin_hDCREF5_tdcTime;
   Double_t        T_coin_hDCREF5_tdcTimeRaw;
   Double_t        T_coin_hDSUM_adcMultiplicity;
   Double_t        T_coin_hDSUM_adcPed;
   Double_t        T_coin_hDSUM_adcPedRaw;
   Double_t        T_coin_hDSUM_adcPulseAmp;
   Double_t        T_coin_hDSUM_adcPulseAmpRaw;
   Double_t        T_coin_hDSUM_adcPulseInt;
   Double_t        T_coin_hDSUM_adcPulseIntRaw;
   Double_t        T_coin_hDSUM_adcPulseTime;
   Double_t        T_coin_hDSUM_adcPulseTimeRaw;
   Double_t        T_coin_hDSUM_tdcMultiplicity;
   Double_t        T_coin_hDSUM_tdcTime;
   Double_t        T_coin_hDSUM_tdcTimeRaw;
   Double_t        T_coin_hEDTM_tdcMultiplicity;
   Double_t        T_coin_hEDTM_tdcTime;
   Double_t        T_coin_hEDTM_tdcTimeRaw;
   Double_t        T_coin_hEL_CLEAN_ROC1_tdcMultiplicity;
   Double_t        T_coin_hEL_CLEAN_ROC1_tdcTime;
   Double_t        T_coin_hEL_CLEAN_ROC1_tdcTimeRaw;
   Double_t        T_coin_hEL_CLEAN_ROC2_tdcMultiplicity;
   Double_t        T_coin_hEL_CLEAN_ROC2_tdcTime;
   Double_t        T_coin_hEL_CLEAN_ROC2_tdcTimeRaw;
   Double_t        T_coin_hEL_HI_ROC1_tdcMultiplicity;
   Double_t        T_coin_hEL_HI_ROC1_tdcTime;
   Double_t        T_coin_hEL_HI_ROC1_tdcTimeRaw;
   Double_t        T_coin_hEL_HI_ROC2_tdcMultiplicity;
   Double_t        T_coin_hEL_HI_ROC2_tdcTime;
   Double_t        T_coin_hEL_HI_ROC2_tdcTimeRaw;
   Double_t        T_coin_hEL_LO_LO_ROC1_tdcMultiplicity;
   Double_t        T_coin_hEL_LO_LO_ROC1_tdcTime;
   Double_t        T_coin_hEL_LO_LO_ROC1_tdcTimeRaw;
   Double_t        T_coin_hEL_LO_LO_ROC2_tdcMultiplicity;
   Double_t        T_coin_hEL_LO_LO_ROC2_tdcTime;
   Double_t        T_coin_hEL_LO_LO_ROC2_tdcTimeRaw;
   Double_t        T_coin_hEL_LO_ROC1_tdcMultiplicity;
   Double_t        T_coin_hEL_LO_ROC1_tdcTime;
   Double_t        T_coin_hEL_LO_ROC1_tdcTimeRaw;
   Double_t        T_coin_hEL_LO_ROC2_tdcMultiplicity;
   Double_t        T_coin_hEL_LO_ROC2_tdcTime;
   Double_t        T_coin_hEL_LO_ROC2_tdcTimeRaw;
   Double_t        T_coin_hEL_REAL_ROC1_tdcMultiplicity;
   Double_t        T_coin_hEL_REAL_ROC1_tdcTime;
   Double_t        T_coin_hEL_REAL_ROC1_tdcTimeRaw;
   Double_t        T_coin_hEL_REAL_ROC2_tdcMultiplicity;
   Double_t        T_coin_hEL_REAL_ROC2_tdcTime;
   Double_t        T_coin_hEL_REAL_ROC2_tdcTimeRaw;
   Double_t        T_coin_hFADC_TREF_ROC1_adcMultiplicity;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPed;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPedRaw;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPulseAmp;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPulseAmpRaw;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPulseInt;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPulseIntRaw;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPulseTime;
   Double_t        T_coin_hFADC_TREF_ROC1_adcPulseTimeRaw;
   Double_t        T_coin_hHODO_RF_tdcMultiplicity;
   Double_t        T_coin_hHODO_RF_tdcTime;
   Double_t        T_coin_hHODO_RF_tdcTimeRaw;
   Double_t        T_coin_hPRE100_ROC1_tdcMultiplicity;
   Double_t        T_coin_hPRE100_ROC1_tdcTime;
   Double_t        T_coin_hPRE100_ROC1_tdcTimeRaw;
   Double_t        T_coin_hPRE100_ROC2_tdcMultiplicity;
   Double_t        T_coin_hPRE100_ROC2_tdcTime;
   Double_t        T_coin_hPRE100_ROC2_tdcTimeRaw;
   Double_t        T_coin_hPRE150_ROC1_tdcMultiplicity;
   Double_t        T_coin_hPRE150_ROC1_tdcTime;
   Double_t        T_coin_hPRE150_ROC1_tdcTimeRaw;
   Double_t        T_coin_hPRE150_ROC2_tdcMultiplicity;
   Double_t        T_coin_hPRE150_ROC2_tdcTime;
   Double_t        T_coin_hPRE150_ROC2_tdcTimeRaw;
   Double_t        T_coin_hPRE200_ROC1_tdcMultiplicity;
   Double_t        T_coin_hPRE200_ROC1_tdcTime;
   Double_t        T_coin_hPRE200_ROC1_tdcTimeRaw;
   Double_t        T_coin_hPRE200_ROC2_tdcMultiplicity;
   Double_t        T_coin_hPRE200_ROC2_tdcTime;
   Double_t        T_coin_hPRE200_ROC2_tdcTimeRaw;
   Double_t        T_coin_hPRE40_ROC1_tdcMultiplicity;
   Double_t        T_coin_hPRE40_ROC1_tdcTime;
   Double_t        T_coin_hPRE40_ROC1_tdcTimeRaw;
   Double_t        T_coin_hPRE40_ROC2_tdcMultiplicity;
   Double_t        T_coin_hPRE40_ROC2_tdcTime;
   Double_t        T_coin_hPRE40_ROC2_tdcTimeRaw;
   Double_t        T_coin_hPRHI_tdcMultiplicity;
   Double_t        T_coin_hPRHI_tdcTime;
   Double_t        T_coin_hPRHI_tdcTimeRaw;
   Double_t        T_coin_hPRLO_tdcMultiplicity;
   Double_t        T_coin_hPRLO_tdcTime;
   Double_t        T_coin_hPRLO_tdcTimeRaw;
   Double_t        T_coin_hPSHWR_adcMultiplicity;
   Double_t        T_coin_hPSHWR_adcPed;
   Double_t        T_coin_hPSHWR_adcPedRaw;
   Double_t        T_coin_hPSHWR_adcPulseAmp;
   Double_t        T_coin_hPSHWR_adcPulseAmpRaw;
   Double_t        T_coin_hPSHWR_adcPulseInt;
   Double_t        T_coin_hPSHWR_adcPulseIntRaw;
   Double_t        T_coin_hPSHWR_adcPulseTime;
   Double_t        T_coin_hPSHWR_adcPulseTimeRaw;
   Double_t        T_coin_hRF_tdcMultiplicity;
   Double_t        T_coin_hRF_tdcTime;
   Double_t        T_coin_hRF_tdcTimeRaw;
   Double_t        T_coin_hSHWR_adcMultiplicity;
   Double_t        T_coin_hSHWR_adcPed;
   Double_t        T_coin_hSHWR_adcPedRaw;
   Double_t        T_coin_hSHWR_adcPulseAmp;
   Double_t        T_coin_hSHWR_adcPulseAmpRaw;
   Double_t        T_coin_hSHWR_adcPulseInt;
   Double_t        T_coin_hSHWR_adcPulseIntRaw;
   Double_t        T_coin_hSHWR_adcPulseTime;
   Double_t        T_coin_hSHWR_adcPulseTimeRaw;
   Double_t        T_coin_hSHWR_tdcMultiplicity;
   Double_t        T_coin_hSHWR_tdcTime;
   Double_t        T_coin_hSHWR_tdcTimeRaw;
   Double_t        T_coin_hSTOF_ROC1_tdcMultiplicity;
   Double_t        T_coin_hSTOF_ROC1_tdcTime;
   Double_t        T_coin_hSTOF_ROC1_tdcTimeRaw;
   Double_t        T_coin_hSTOF_ROC2_tdcMultiplicity;
   Double_t        T_coin_hSTOF_ROC2_tdcTime;
   Double_t        T_coin_hSTOF_ROC2_tdcTimeRaw;
   Double_t        T_coin_hT1_tdcMultiplicity;
   Double_t        T_coin_hT1_tdcTime;
   Double_t        T_coin_hT1_tdcTimeRaw;
   Double_t        T_coin_hT2_tdcMultiplicity;
   Double_t        T_coin_hT2_tdcTime;
   Double_t        T_coin_hT2_tdcTimeRaw;
   Double_t        T_coin_hTRIG1_ROC1_tdcMultiplicity;
   Double_t        T_coin_hTRIG1_ROC1_tdcTime;
   Double_t        T_coin_hTRIG1_ROC1_tdcTimeRaw;
   Double_t        T_coin_hTRIG1_ROC2_tdcMultiplicity;
   Double_t        T_coin_hTRIG1_ROC2_tdcTime;
   Double_t        T_coin_hTRIG1_ROC2_tdcTimeRaw;
   Double_t        T_coin_hTRIG2_ROC1_tdcMultiplicity;
   Double_t        T_coin_hTRIG2_ROC1_tdcTime;
   Double_t        T_coin_hTRIG2_ROC1_tdcTimeRaw;
   Double_t        T_coin_hTRIG2_ROC2_tdcMultiplicity;
   Double_t        T_coin_hTRIG2_ROC2_tdcTime;
   Double_t        T_coin_hTRIG2_ROC2_tdcTimeRaw;
   Double_t        T_coin_hTRIG3_ROC1_tdcMultiplicity;
   Double_t        T_coin_hTRIG3_ROC1_tdcTime;
   Double_t        T_coin_hTRIG3_ROC1_tdcTimeRaw;
   Double_t        T_coin_hTRIG3_ROC2_tdcMultiplicity;
   Double_t        T_coin_hTRIG3_ROC2_tdcTime;
   Double_t        T_coin_hTRIG3_ROC2_tdcTimeRaw;
   Double_t        T_coin_hTRIG4_ROC1_tdcMultiplicity;
   Double_t        T_coin_hTRIG4_ROC1_tdcTime;
   Double_t        T_coin_hTRIG4_ROC1_tdcTimeRaw;
   Double_t        T_coin_hTRIG4_ROC2_tdcMultiplicity;
   Double_t        T_coin_hTRIG4_ROC2_tdcTime;
   Double_t        T_coin_hTRIG4_ROC2_tdcTimeRaw;
   Double_t        T_coin_hTRIG5_ROC1_tdcMultiplicity;
   Double_t        T_coin_hTRIG5_ROC1_tdcTime;
   Double_t        T_coin_hTRIG5_ROC1_tdcTimeRaw;
   Double_t        T_coin_hTRIG5_ROC2_tdcMultiplicity;
   Double_t        T_coin_hTRIG5_ROC2_tdcTime;
   Double_t        T_coin_hTRIG5_ROC2_tdcTimeRaw;
   Double_t        T_coin_hTRIG6_ROC1_tdcMultiplicity;
   Double_t        T_coin_hTRIG6_ROC1_tdcTime;
   Double_t        T_coin_hTRIG6_ROC1_tdcTimeRaw;
   Double_t        T_coin_hTRIG6_ROC2_tdcMultiplicity;
   Double_t        T_coin_hTRIG6_ROC2_tdcTime;
   Double_t        T_coin_hTRIG6_ROC2_tdcTimeRaw;
   Double_t        T_coin_p1T_tdcMultiplicity;
   Double_t        T_coin_p1T_tdcTime;
   Double_t        T_coin_p1T_tdcTimeRaw;
   Double_t        T_coin_p1X_tdcMultiplicity;
   Double_t        T_coin_p1X_tdcTime;
   Double_t        T_coin_p1X_tdcTimeRaw;
   Double_t        T_coin_p1Y_tdcMultiplicity;
   Double_t        T_coin_p1Y_tdcTime;
   Double_t        T_coin_p1Y_tdcTimeRaw;
   Double_t        T_coin_p2T_tdcMultiplicity;
   Double_t        T_coin_p2T_tdcTime;
   Double_t        T_coin_p2T_tdcTimeRaw;
   Double_t        T_coin_p2X_tdcMultiplicity;
   Double_t        T_coin_p2X_tdcTime;
   Double_t        T_coin_p2X_tdcTimeRaw;
   Double_t        T_coin_p2Y_tdcMultiplicity;
   Double_t        T_coin_p2Y_tdcTime;
   Double_t        T_coin_p2Y_tdcTimeRaw;
   Double_t        T_coin_pAER_adcMultiplicity;
   Double_t        T_coin_pAER_adcPed;
   Double_t        T_coin_pAER_adcPedRaw;
   Double_t        T_coin_pAER_adcPulseAmp;
   Double_t        T_coin_pAER_adcPulseAmpRaw;
   Double_t        T_coin_pAER_adcPulseInt;
   Double_t        T_coin_pAER_adcPulseIntRaw;
   Double_t        T_coin_pAER_adcPulseTime;
   Double_t        T_coin_pAER_adcPulseTimeRaw;
   Double_t        T_coin_pAER_tdcMultiplicity;
   Double_t        T_coin_pAER_tdcTime;
   Double_t        T_coin_pAER_tdcTimeRaw;
   Double_t        T_coin_pDCREF10_tdcMultiplicity;
   Double_t        T_coin_pDCREF10_tdcTime;
   Double_t        T_coin_pDCREF10_tdcTimeRaw;
   Double_t        T_coin_pDCREF1_tdcMultiplicity;
   Double_t        T_coin_pDCREF1_tdcTime;
   Double_t        T_coin_pDCREF1_tdcTimeRaw;
   Double_t        T_coin_pDCREF2_tdcMultiplicity;
   Double_t        T_coin_pDCREF2_tdcTime;
   Double_t        T_coin_pDCREF2_tdcTimeRaw;
   Double_t        T_coin_pDCREF3_tdcMultiplicity;
   Double_t        T_coin_pDCREF3_tdcTime;
   Double_t        T_coin_pDCREF3_tdcTimeRaw;
   Double_t        T_coin_pDCREF4_tdcMultiplicity;
   Double_t        T_coin_pDCREF4_tdcTime;
   Double_t        T_coin_pDCREF4_tdcTimeRaw;
   Double_t        T_coin_pDCREF5_tdcMultiplicity;
   Double_t        T_coin_pDCREF5_tdcTime;
   Double_t        T_coin_pDCREF5_tdcTimeRaw;
   Double_t        T_coin_pDCREF6_tdcMultiplicity;
   Double_t        T_coin_pDCREF6_tdcTime;
   Double_t        T_coin_pDCREF6_tdcTimeRaw;
   Double_t        T_coin_pDCREF7_tdcMultiplicity;
   Double_t        T_coin_pDCREF7_tdcTime;
   Double_t        T_coin_pDCREF7_tdcTimeRaw;
   Double_t        T_coin_pDCREF8_tdcMultiplicity;
   Double_t        T_coin_pDCREF8_tdcTime;
   Double_t        T_coin_pDCREF8_tdcTimeRaw;
   Double_t        T_coin_pDCREF9_tdcMultiplicity;
   Double_t        T_coin_pDCREF9_tdcTime;
   Double_t        T_coin_pDCREF9_tdcTimeRaw;
   Double_t        T_coin_pEDTM_tdcMultiplicity;
   Double_t        T_coin_pEDTM_tdcTime;
   Double_t        T_coin_pEDTM_tdcTimeRaw;
   Double_t        T_coin_pEL_CLEAN_ROC1_tdcMultiplicity;
   Double_t        T_coin_pEL_CLEAN_ROC1_tdcTime;
   Double_t        T_coin_pEL_CLEAN_ROC1_tdcTimeRaw;
   Double_t        T_coin_pEL_CLEAN_ROC2_tdcMultiplicity;
   Double_t        T_coin_pEL_CLEAN_ROC2_tdcTime;
   Double_t        T_coin_pEL_CLEAN_ROC2_tdcTimeRaw;
   Double_t        T_coin_pEL_HI_ROC1_tdcMultiplicity;
   Double_t        T_coin_pEL_HI_ROC1_tdcTime;
   Double_t        T_coin_pEL_HI_ROC1_tdcTimeRaw;
   Double_t        T_coin_pEL_HI_ROC2_tdcMultiplicity;
   Double_t        T_coin_pEL_HI_ROC2_tdcTime;
   Double_t        T_coin_pEL_HI_ROC2_tdcTimeRaw;
   Double_t        T_coin_pEL_LO_LO_ROC1_tdcMultiplicity;
   Double_t        T_coin_pEL_LO_LO_ROC1_tdcTime;
   Double_t        T_coin_pEL_LO_LO_ROC1_tdcTimeRaw;
   Double_t        T_coin_pEL_LO_LO_ROC2_tdcMultiplicity;
   Double_t        T_coin_pEL_LO_LO_ROC2_tdcTime;
   Double_t        T_coin_pEL_LO_LO_ROC2_tdcTimeRaw;
   Double_t        T_coin_pEL_LO_ROC1_tdcMultiplicity;
   Double_t        T_coin_pEL_LO_ROC1_tdcTime;
   Double_t        T_coin_pEL_LO_ROC1_tdcTimeRaw;
   Double_t        T_coin_pEL_LO_ROC2_tdcMultiplicity;
   Double_t        T_coin_pEL_LO_ROC2_tdcTime;
   Double_t        T_coin_pEL_LO_ROC2_tdcTimeRaw;
   Double_t        T_coin_pEL_REAL_ROC1_tdcMultiplicity;
   Double_t        T_coin_pEL_REAL_ROC1_tdcTime;
   Double_t        T_coin_pEL_REAL_ROC1_tdcTimeRaw;
   Double_t        T_coin_pEL_REAL_ROC2_tdcMultiplicity;
   Double_t        T_coin_pEL_REAL_ROC2_tdcTime;
   Double_t        T_coin_pEL_REAL_ROC2_tdcTimeRaw;
   Double_t        T_coin_pFADC_TREF_ROC2_adcMultiplicity;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPed;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPedRaw;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPulseAmp;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPulseAmpRaw;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPulseInt;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPulseIntRaw;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPulseTime;
   Double_t        T_coin_pFADC_TREF_ROC2_adcPulseTimeRaw;
   Double_t        T_coin_pHEL_MPS_adcMultiplicity;
   Double_t        T_coin_pHEL_MPS_adcPed;
   Double_t        T_coin_pHEL_MPS_adcPedRaw;
   Double_t        T_coin_pHEL_MPS_adcPulseAmp;
   Double_t        T_coin_pHEL_MPS_adcPulseAmpRaw;
   Double_t        T_coin_pHEL_MPS_adcPulseInt;
   Double_t        T_coin_pHEL_MPS_adcPulseIntRaw;
   Double_t        T_coin_pHEL_MPS_adcPulseTime;
   Double_t        T_coin_pHEL_MPS_adcPulseTimeRaw;
   Double_t        T_coin_pHEL_NEG_adcMultiplicity;
   Double_t        T_coin_pHEL_NEG_adcPed;
   Double_t        T_coin_pHEL_NEG_adcPedRaw;
   Double_t        T_coin_pHEL_NEG_adcPulseAmp;
   Double_t        T_coin_pHEL_NEG_adcPulseAmpRaw;
   Double_t        T_coin_pHEL_NEG_adcPulseInt;
   Double_t        T_coin_pHEL_NEG_adcPulseIntRaw;
   Double_t        T_coin_pHEL_NEG_adcPulseTime;
   Double_t        T_coin_pHEL_NEG_adcPulseTimeRaw;
   Double_t        T_coin_pHEL_POS_adcMultiplicity;
   Double_t        T_coin_pHEL_POS_adcPed;
   Double_t        T_coin_pHEL_POS_adcPedRaw;
   Double_t        T_coin_pHEL_POS_adcPulseAmp;
   Double_t        T_coin_pHEL_POS_adcPulseAmpRaw;
   Double_t        T_coin_pHEL_POS_adcPulseInt;
   Double_t        T_coin_pHEL_POS_adcPulseIntRaw;
   Double_t        T_coin_pHEL_POS_adcPulseTime;
   Double_t        T_coin_pHEL_POS_adcPulseTimeRaw;
   Double_t        T_coin_pHGCER_MOD_adcMultiplicity;
   Double_t        T_coin_pHGCER_MOD_adcPed;
   Double_t        T_coin_pHGCER_MOD_adcPedRaw;
   Double_t        T_coin_pHGCER_MOD_adcPulseAmp;
   Double_t        T_coin_pHGCER_MOD_adcPulseAmpRaw;
   Double_t        T_coin_pHGCER_MOD_adcPulseInt;
   Double_t        T_coin_pHGCER_MOD_adcPulseIntRaw;
   Double_t        T_coin_pHGCER_MOD_adcPulseTime;
   Double_t        T_coin_pHGCER_MOD_adcPulseTimeRaw;
   Double_t        T_coin_pHGCER_adcMultiplicity;
   Double_t        T_coin_pHGCER_adcPed;
   Double_t        T_coin_pHGCER_adcPedRaw;
   Double_t        T_coin_pHGCER_adcPulseAmp;
   Double_t        T_coin_pHGCER_adcPulseAmpRaw;
   Double_t        T_coin_pHGCER_adcPulseInt;
   Double_t        T_coin_pHGCER_adcPulseIntRaw;
   Double_t        T_coin_pHGCER_adcPulseTime;
   Double_t        T_coin_pHGCER_adcPulseTimeRaw;
   Double_t        T_coin_pHGCER_tdcMultiplicity;
   Double_t        T_coin_pHGCER_tdcTime;
   Double_t        T_coin_pHGCER_tdcTimeRaw;
   Double_t        T_coin_pHODO_RF_tdcMultiplicity;
   Double_t        T_coin_pHODO_RF_tdcTime;
   Double_t        T_coin_pHODO_RF_tdcTimeRaw;
   Double_t        T_coin_pNGCER_MOD_adcMultiplicity;
   Double_t        T_coin_pNGCER_MOD_adcPed;
   Double_t        T_coin_pNGCER_MOD_adcPedRaw;
   Double_t        T_coin_pNGCER_MOD_adcPulseAmp;
   Double_t        T_coin_pNGCER_MOD_adcPulseAmpRaw;
   Double_t        T_coin_pNGCER_MOD_adcPulseInt;
   Double_t        T_coin_pNGCER_MOD_adcPulseIntRaw;
   Double_t        T_coin_pNGCER_MOD_adcPulseTime;
   Double_t        T_coin_pNGCER_MOD_adcPulseTimeRaw;
   Double_t        T_coin_pNGCER_adcMultiplicity;
   Double_t        T_coin_pNGCER_adcPed;
   Double_t        T_coin_pNGCER_adcPedRaw;
   Double_t        T_coin_pNGCER_adcPulseAmp;
   Double_t        T_coin_pNGCER_adcPulseAmpRaw;
   Double_t        T_coin_pNGCER_adcPulseInt;
   Double_t        T_coin_pNGCER_adcPulseIntRaw;
   Double_t        T_coin_pNGCER_adcPulseTime;
   Double_t        T_coin_pNGCER_adcPulseTimeRaw;
   Double_t        T_coin_pNGCER_tdcMultiplicity;
   Double_t        T_coin_pNGCER_tdcTime;
   Double_t        T_coin_pNGCER_tdcTimeRaw;
   Double_t        T_coin_pPRE100_ROC1_tdcMultiplicity;
   Double_t        T_coin_pPRE100_ROC1_tdcTime;
   Double_t        T_coin_pPRE100_ROC1_tdcTimeRaw;
   Double_t        T_coin_pPRE100_ROC2_tdcMultiplicity;
   Double_t        T_coin_pPRE100_ROC2_tdcTime;
   Double_t        T_coin_pPRE100_ROC2_tdcTimeRaw;
   Double_t        T_coin_pPRE150_ROC1_tdcMultiplicity;
   Double_t        T_coin_pPRE150_ROC1_tdcTime;
   Double_t        T_coin_pPRE150_ROC1_tdcTimeRaw;
   Double_t        T_coin_pPRE150_ROC2_tdcMultiplicity;
   Double_t        T_coin_pPRE150_ROC2_tdcTime;
   Double_t        T_coin_pPRE150_ROC2_tdcTimeRaw;
   Double_t        T_coin_pPRE200_ROC1_tdcMultiplicity;
   Double_t        T_coin_pPRE200_ROC1_tdcTime;
   Double_t        T_coin_pPRE200_ROC1_tdcTimeRaw;
   Double_t        T_coin_pPRE200_ROC2_tdcMultiplicity;
   Double_t        T_coin_pPRE200_ROC2_tdcTime;
   Double_t        T_coin_pPRE200_ROC2_tdcTimeRaw;
   Double_t        T_coin_pPRE40_ROC1_tdcMultiplicity;
   Double_t        T_coin_pPRE40_ROC1_tdcTime;
   Double_t        T_coin_pPRE40_ROC1_tdcTimeRaw;
   Double_t        T_coin_pPRE40_ROC2_tdcMultiplicity;
   Double_t        T_coin_pPRE40_ROC2_tdcTime;
   Double_t        T_coin_pPRE40_ROC2_tdcTimeRaw;
   Double_t        T_coin_pPRHI_tdcMultiplicity;
   Double_t        T_coin_pPRHI_tdcTime;
   Double_t        T_coin_pPRHI_tdcTimeRaw;
   Double_t        T_coin_pPRLO_tdcMultiplicity;
   Double_t        T_coin_pPRLO_tdcTime;
   Double_t        T_coin_pPRLO_tdcTimeRaw;
   Double_t        T_coin_pPSHWR_adcMultiplicity;
   Double_t        T_coin_pPSHWR_adcPed;
   Double_t        T_coin_pPSHWR_adcPedRaw;
   Double_t        T_coin_pPSHWR_adcPulseAmp;
   Double_t        T_coin_pPSHWR_adcPulseAmpRaw;
   Double_t        T_coin_pPSHWR_adcPulseInt;
   Double_t        T_coin_pPSHWR_adcPulseIntRaw;
   Double_t        T_coin_pPSHWR_adcPulseTime;
   Double_t        T_coin_pPSHWR_adcPulseTimeRaw;
   Double_t        T_coin_pRF_tdcMultiplicity;
   Double_t        T_coin_pRF_tdcTime;
   Double_t        T_coin_pRF_tdcTimeRaw;
   Double_t        T_coin_pSTOF_ROC1_tdcMultiplicity;
   Double_t        T_coin_pSTOF_ROC1_tdcTime;
   Double_t        T_coin_pSTOF_ROC1_tdcTimeRaw;
   Double_t        T_coin_pSTOF_ROC2_tdcMultiplicity;
   Double_t        T_coin_pSTOF_ROC2_tdcTime;
   Double_t        T_coin_pSTOF_ROC2_tdcTimeRaw;
   Double_t        T_coin_pT1_tdcMultiplicity;
   Double_t        T_coin_pT1_tdcTime;
   Double_t        T_coin_pT1_tdcTimeRaw;
   Double_t        T_coin_pT2_tdcMultiplicity;
   Double_t        T_coin_pT2_tdcTime;
   Double_t        T_coin_pT2_tdcTimeRaw;
   Double_t        T_coin_pT3_tdcMultiplicity;
   Double_t        T_coin_pT3_tdcTime;
   Double_t        T_coin_pT3_tdcTimeRaw;
   Double_t        T_coin_pTRIG1_ROC1_tdcMultiplicity;
   Double_t        T_coin_pTRIG1_ROC1_tdcTime;
   Double_t        T_coin_pTRIG1_ROC1_tdcTimeRaw;
   Double_t        T_coin_pTRIG1_ROC2_tdcMultiplicity;
   Double_t        T_coin_pTRIG1_ROC2_tdcTime;
   Double_t        T_coin_pTRIG1_ROC2_tdcTimeRaw;
   Double_t        T_coin_pTRIG2_ROC1_tdcMultiplicity;
   Double_t        T_coin_pTRIG2_ROC1_tdcTime;
   Double_t        T_coin_pTRIG2_ROC1_tdcTimeRaw;
   Double_t        T_coin_pTRIG2_ROC2_tdcMultiplicity;
   Double_t        T_coin_pTRIG2_ROC2_tdcTime;
   Double_t        T_coin_pTRIG2_ROC2_tdcTimeRaw;
   Double_t        T_coin_pTRIG3_ROC1_tdcMultiplicity;
   Double_t        T_coin_pTRIG3_ROC1_tdcTime;
   Double_t        T_coin_pTRIG3_ROC1_tdcTimeRaw;
   Double_t        T_coin_pTRIG3_ROC2_tdcMultiplicity;
   Double_t        T_coin_pTRIG3_ROC2_tdcTime;
   Double_t        T_coin_pTRIG3_ROC2_tdcTimeRaw;
   Double_t        T_coin_pTRIG4_ROC1_tdcMultiplicity;
   Double_t        T_coin_pTRIG4_ROC1_tdcTime;
   Double_t        T_coin_pTRIG4_ROC1_tdcTimeRaw;
   Double_t        T_coin_pTRIG4_ROC2_tdcMultiplicity;
   Double_t        T_coin_pTRIG4_ROC2_tdcTime;
   Double_t        T_coin_pTRIG4_ROC2_tdcTimeRaw;
   Double_t        T_coin_pTRIG5_ROC1_tdcMultiplicity;
   Double_t        T_coin_pTRIG5_ROC1_tdcTime;
   Double_t        T_coin_pTRIG5_ROC1_tdcTimeRaw;
   Double_t        T_coin_pTRIG5_ROC2_tdcMultiplicity;
   Double_t        T_coin_pTRIG5_ROC2_tdcTime;
   Double_t        T_coin_pTRIG5_ROC2_tdcTimeRaw;
   Double_t        T_coin_pTRIG6_ROC1_tdcMultiplicity;
   Double_t        T_coin_pTRIG6_ROC1_tdcTime;
   Double_t        T_coin_pTRIG6_ROC1_tdcTimeRaw;
   Double_t        T_coin_pTRIG6_ROC2_tdcMultiplicity;
   Double_t        T_coin_pTRIG6_ROC2_tdcTime;
   Double_t        T_coin_pTRIG6_ROC2_tdcTimeRaw;
   Double_t        g_evtyp;
   Double_t        IBC3H00CRCUR4;
   Double_t        IGL1I00OD16_16;
   Double_t        HELFREQ;
   Double_t        HELDELAYs;
   Double_t        hac_bcm_average;
   Double_t        ibcm1;
   Double_t        ibcm2;
   Double_t        iunser;
   Double_t        itov3out;
   Double_t        itov4out;
   Double_t        IPM3H07A_XPOS;
   Double_t        IPM3H07A_YPOS;
   Double_t        IPM3H07B_XPOS;
   Double_t        IPM3H07B_YPOS;
   Double_t        IPM3H07C_XPOS;
   Double_t        IPM3H07C_YPOS;
   Double_t        IPM3H07A_XRAW;
   Double_t        IPM3H07A_YRAW;
   Double_t        IPM3H07B_XRAW;
   Double_t        IPM3H07B_YRAW;
   Double_t        IPM3H07C_XRAW;
   Double_t        IPM3H07C_YRAW;
   Double_t        IPM3H07A_XSOF;
   Double_t        IPM3H07A_YSOF;
   Double_t        IPM3H07B_XSOF;
   Double_t        IPM3H07B_YSOF;
   Double_t        IPM3H07C_XSOF;
   Double_t        IPM3H07C_YSOF;
 //THaEvent        *Event_Branch;
   ULong64_t       fEvtHdr_fEvtTime;
   UInt_t          fEvtHdr_fEvtNum;
   Int_t           fEvtHdr_fEvtType;
   Int_t           fEvtHdr_fEvtLen;
   Int_t           fEvtHdr_fHelicity;
   Int_t           fEvtHdr_fTargetPol;
   Int_t           fEvtHdr_fRun;

   // List of branches
   TBranch        *b_H_gtr_xptar;   //!
   TBranch        *b_H_gtr_yptar;   //!
   TBranch        *b_P_gtr_xptar;   //!
   TBranch        *b_P_gtr_yptar;   //!
   TBranch        *b_mmiss;   //!
   TBranch        *b_CTime_epCoinTime_ROC1;   //!
   TBranch        *b_CTime_epCoinTime_ROC2;   //!
   TBranch        *b_CTime_epCoinTime_TRIG1;   //!
   TBranch        *b_CTime_epCoinTime_TRIG4;   //!
   TBranch        *b_H_cal_eprtrack;   //!
   TBranch        *b_H_cal_eprtracknorm;   //!
   TBranch        *b_H_cal_etot;   //!
   TBranch        *b_H_cal_etotnorm;   //!
   TBranch        *b_H_cal_etottracknorm;   //!
   TBranch        *b_H_cal_etrack;   //!
   TBranch        *b_H_cal_etracknorm;   //!
   TBranch        *b_H_cer_npeSum;   //!
   TBranch        *b_H_dc_ntrack;   //!
   TBranch        *b_H_dc_x_fp;   //!
   TBranch        *b_H_dc_xp_fp;   //!
   TBranch        *b_H_dc_y_fp;   //!
   TBranch        *b_H_dc_yp_fp;   //!
   TBranch        *b_H_extcor_xsieve;   //!
   TBranch        *b_H_extcor_ysieve;   //!
   TBranch        *b_H_gtr_beta;   //!
   TBranch        *b_H_gtr_dp;   //!
   TBranch        *b_H_gtr_index;   //!
   TBranch        *b_H_gtr_ok;   //!
   TBranch        *b_H_gtr_p;   //!
   TBranch        *b_H_gtr_ph;   //!
   TBranch        *b_H_gtr_px;   //!
   TBranch        *b_H_gtr_py;   //!
   TBranch        *b_H_gtr_pz;   //!
   TBranch        *b_H_gtr_th;   //!
   TBranch        *b_H_gtr_x;   //!
   TBranch        *b_H_gtr_y;   //!
   TBranch        *b_H_hod_beta;   //!
   TBranch        *b_H_hod_betachisqnotrack;   //!
   TBranch        *b_H_hod_betanotrack;   //!
   TBranch        *b_H_hod_fpHitsTime;   //!
   TBranch        *b_H_hod_starttime;   //!
   TBranch        *b_H_kin_primary_Q2;   //!
   TBranch        *b_H_kin_primary_W;   //!
   TBranch        *b_H_kin_primary_W2;   //!
   TBranch        *b_H_kin_primary_epsilon;   //!
   TBranch        *b_H_kin_primary_nu;   //!
   TBranch        *b_H_kin_primary_omega;   //!
   TBranch        *b_H_kin_primary_ph_q;   //!
   TBranch        *b_H_kin_primary_q3m;   //!
   TBranch        *b_H_kin_primary_q_x;   //!
   TBranch        *b_H_kin_primary_q_y;   //!
   TBranch        *b_H_kin_primary_q_z;   //!
   TBranch        *b_H_kin_primary_scat_ang_deg;   //!
   TBranch        *b_H_kin_primary_scat_ang_rad;   //!
   TBranch        *b_H_kin_primary_th_q;   //!
   TBranch        *b_H_kin_primary_x_bj;   //!
   TBranch        *b_H_rb_raster_fr_xbpm_tar;   //!
   TBranch        *b_H_rb_raster_fr_ybpm_tar;   //!
   TBranch        *b_H_react_x;   //!
   TBranch        *b_H_react_y;   //!
   TBranch        *b_H_react_z;   //!
   TBranch        *b_P_aero_npeSum;   //!
   TBranch        *b_P_cal_eprtrack;   //!
   TBranch        *b_P_cal_eprtracknorm;   //!
   TBranch        *b_P_cal_etot;   //!
   TBranch        *b_P_cal_etotnorm;   //!
   TBranch        *b_P_cal_etottracknorm;   //!
   TBranch        *b_P_cal_etracknorm;   //!
   TBranch        *b_P_cal_pr_eplane;   //!
   TBranch        *b_P_dc_ntrack;   //!
   TBranch        *b_P_dc_x_fp;   //!
   TBranch        *b_P_dc_xp_fp;   //!
   TBranch        *b_P_dc_y_fp;   //!
   TBranch        *b_P_dc_yp_fp;   //!
   TBranch        *b_P_extcor_xsieve;   //!
   TBranch        *b_P_extcor_ysieve;   //!
   TBranch        *b_P_gtr_beta;   //!
   TBranch        *b_P_gtr_dp;   //!
   TBranch        *b_P_gtr_index;   //!
   TBranch        *b_P_gtr_ok;   //!
   TBranch        *b_P_gtr_p;   //!
   TBranch        *b_P_gtr_ph;   //!
   TBranch        *b_P_gtr_px;   //!
   TBranch        *b_P_gtr_py;   //!
   TBranch        *b_P_gtr_pz;   //!
   TBranch        *b_P_gtr_th;   //!
   TBranch        *b_P_gtr_x;   //!
   TBranch        *b_P_gtr_y;   //!
   TBranch        *b_P_hgcer_npeSum;   //!
   TBranch        *b_P_hod_beta;   //!
   TBranch        *b_P_hod_betachisqnotrack;   //!
   TBranch        *b_P_hod_betanotrack;   //!
   TBranch        *b_P_hod_fpHitsTime;   //!
   TBranch        *b_P_hod_goodscinhit;   //!
   TBranch        *b_P_hod_starttime;   //!
   TBranch        *b_P_kin_secondary_Erecoil;   //!
   TBranch        *b_P_kin_secondary_MandelS;   //!
   TBranch        *b_P_kin_secondary_MandelT;   //!
   TBranch        *b_P_kin_secondary_MandelU;   //!
   TBranch        *b_P_kin_secondary_Mrecoil;   //!
   TBranch        *b_P_kin_secondary_Prec_x;   //!
   TBranch        *b_P_kin_secondary_Prec_y;   //!
   TBranch        *b_P_kin_secondary_Prec_z;   //!
   TBranch        *b_P_kin_secondary_emiss;   //!
   TBranch        *b_P_kin_secondary_emiss_nuc;   //!
   TBranch        *b_P_kin_secondary_ph_bq;   //!
   TBranch        *b_P_kin_secondary_ph_xq;   //!
   TBranch        *b_P_kin_secondary_phb_cm;   //!
   TBranch        *b_P_kin_secondary_phx_cm;   //!
   TBranch        *b_P_kin_secondary_pmiss;   //!
   TBranch        *b_P_kin_secondary_pmiss_x;   //!
   TBranch        *b_P_kin_secondary_pmiss_y;   //!
   TBranch        *b_P_kin_secondary_pmiss_z;   //!
   TBranch        *b_P_kin_secondary_px_cm;   //!
   TBranch        *b_P_kin_secondary_t_tot_cm;   //!
   TBranch        *b_P_kin_secondary_tb;   //!
   TBranch        *b_P_kin_secondary_tb_cm;   //!
   TBranch        *b_P_kin_secondary_th_bq;   //!
   TBranch        *b_P_kin_secondary_th_xq;   //!
   TBranch        *b_P_kin_secondary_thb_cm;   //!
   TBranch        *b_P_kin_secondary_thx_cm;   //!
   TBranch        *b_P_kin_secondary_tx;   //!
   TBranch        *b_P_kin_secondary_tx_cm;   //!
   TBranch        *b_P_kin_secondary_xangle;   //!
   TBranch        *b_P_ngcer_npeSum;   //!
   TBranch        *b_P_react_z;   //!
   TBranch        *b_T_coin_h1T_tdcMultiplicity;   //!
   TBranch        *b_T_coin_h1T_tdcTime;   //!
   TBranch        *b_T_coin_h1T_tdcTimeRaw;   //!
   TBranch        *b_T_coin_h1X_tdcMultiplicity;   //!
   TBranch        *b_T_coin_h1X_tdcTime;   //!
   TBranch        *b_T_coin_h1X_tdcTimeRaw;   //!
   TBranch        *b_T_coin_h1Y_tdcMultiplicity;   //!
   TBranch        *b_T_coin_h1Y_tdcTime;   //!
   TBranch        *b_T_coin_h1Y_tdcTimeRaw;   //!
   TBranch        *b_T_coin_h2T_tdcMultiplicity;   //!
   TBranch        *b_T_coin_h2T_tdcTime;   //!
   TBranch        *b_T_coin_h2T_tdcTimeRaw;   //!
   TBranch        *b_T_coin_h2X_tdcMultiplicity;   //!
   TBranch        *b_T_coin_h2X_tdcTime;   //!
   TBranch        *b_T_coin_h2X_tdcTimeRaw;   //!
   TBranch        *b_T_coin_h2Y_tdcMultiplicity;   //!
   TBranch        *b_T_coin_h2Y_tdcTime;   //!
   TBranch        *b_T_coin_h2Y_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hAER_adcMultiplicity;   //!
   TBranch        *b_T_coin_hAER_adcPed;   //!
   TBranch        *b_T_coin_hAER_adcPedRaw;   //!
   TBranch        *b_T_coin_hAER_adcPulseAmp;   //!
   TBranch        *b_T_coin_hAER_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hAER_adcPulseInt;   //!
   TBranch        *b_T_coin_hAER_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hAER_adcPulseTime;   //!
   TBranch        *b_T_coin_hAER_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hASUM_adcMultiplicity;   //!
   TBranch        *b_T_coin_hASUM_adcPed;   //!
   TBranch        *b_T_coin_hASUM_adcPedRaw;   //!
   TBranch        *b_T_coin_hASUM_adcPulseAmp;   //!
   TBranch        *b_T_coin_hASUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hASUM_adcPulseInt;   //!
   TBranch        *b_T_coin_hASUM_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hASUM_adcPulseTime;   //!
   TBranch        *b_T_coin_hASUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hASUM_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hASUM_tdcTime;   //!
   TBranch        *b_T_coin_hASUM_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hBSUM_adcMultiplicity;   //!
   TBranch        *b_T_coin_hBSUM_adcPed;   //!
   TBranch        *b_T_coin_hBSUM_adcPedRaw;   //!
   TBranch        *b_T_coin_hBSUM_adcPulseAmp;   //!
   TBranch        *b_T_coin_hBSUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hBSUM_adcPulseInt;   //!
   TBranch        *b_T_coin_hBSUM_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hBSUM_adcPulseTime;   //!
   TBranch        *b_T_coin_hBSUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hBSUM_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hBSUM_tdcTime;   //!
   TBranch        *b_T_coin_hBSUM_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hCER_adcMultiplicity;   //!
   TBranch        *b_T_coin_hCER_adcPed;   //!
   TBranch        *b_T_coin_hCER_adcPedRaw;   //!
   TBranch        *b_T_coin_hCER_adcPulseAmp;   //!
   TBranch        *b_T_coin_hCER_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hCER_adcPulseInt;   //!
   TBranch        *b_T_coin_hCER_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hCER_adcPulseTime;   //!
   TBranch        *b_T_coin_hCER_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hCER_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hCER_tdcTime;   //!
   TBranch        *b_T_coin_hCER_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hCSUM_adcMultiplicity;   //!
   TBranch        *b_T_coin_hCSUM_adcPed;   //!
   TBranch        *b_T_coin_hCSUM_adcPedRaw;   //!
   TBranch        *b_T_coin_hCSUM_adcPulseAmp;   //!
   TBranch        *b_T_coin_hCSUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hCSUM_adcPulseInt;   //!
   TBranch        *b_T_coin_hCSUM_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hCSUM_adcPulseTime;   //!
   TBranch        *b_T_coin_hCSUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hCSUM_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hCSUM_tdcTime;   //!
   TBranch        *b_T_coin_hCSUM_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hDCREF1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hDCREF1_tdcTime;   //!
   TBranch        *b_T_coin_hDCREF1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hDCREF2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hDCREF2_tdcTime;   //!
   TBranch        *b_T_coin_hDCREF2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hDCREF3_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hDCREF3_tdcTime;   //!
   TBranch        *b_T_coin_hDCREF3_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hDCREF4_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hDCREF4_tdcTime;   //!
   TBranch        *b_T_coin_hDCREF4_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hDCREF5_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hDCREF5_tdcTime;   //!
   TBranch        *b_T_coin_hDCREF5_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hDSUM_adcMultiplicity;   //!
   TBranch        *b_T_coin_hDSUM_adcPed;   //!
   TBranch        *b_T_coin_hDSUM_adcPedRaw;   //!
   TBranch        *b_T_coin_hDSUM_adcPulseAmp;   //!
   TBranch        *b_T_coin_hDSUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hDSUM_adcPulseInt;   //!
   TBranch        *b_T_coin_hDSUM_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hDSUM_adcPulseTime;   //!
   TBranch        *b_T_coin_hDSUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hDSUM_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hDSUM_tdcTime;   //!
   TBranch        *b_T_coin_hDSUM_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEDTM_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEDTM_tdcTime;   //!
   TBranch        *b_T_coin_hEDTM_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_CLEAN_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_CLEAN_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hEL_CLEAN_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_CLEAN_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_CLEAN_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hEL_CLEAN_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_HI_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_HI_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hEL_HI_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_HI_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_HI_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hEL_HI_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_LO_LO_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_LO_LO_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hEL_LO_LO_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_LO_LO_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_LO_LO_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hEL_LO_LO_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_LO_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_LO_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hEL_LO_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_LO_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_LO_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hEL_LO_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_REAL_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_REAL_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hEL_REAL_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hEL_REAL_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hEL_REAL_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hEL_REAL_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcMultiplicity;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPed;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPedRaw;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPulseAmp;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPulseInt;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPulseTime;   //!
   TBranch        *b_T_coin_hFADC_TREF_ROC1_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hHODO_RF_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hHODO_RF_tdcTime;   //!
   TBranch        *b_T_coin_hHODO_RF_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE100_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE100_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hPRE100_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE100_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE100_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hPRE100_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE150_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE150_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hPRE150_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE150_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE150_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hPRE150_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE200_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE200_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hPRE200_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE200_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE200_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hPRE200_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE40_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE40_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hPRE40_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRE40_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRE40_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hPRE40_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRHI_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRHI_tdcTime;   //!
   TBranch        *b_T_coin_hPRHI_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPRLO_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hPRLO_tdcTime;   //!
   TBranch        *b_T_coin_hPRLO_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hPSHWR_adcMultiplicity;   //!
   TBranch        *b_T_coin_hPSHWR_adcPed;   //!
   TBranch        *b_T_coin_hPSHWR_adcPedRaw;   //!
   TBranch        *b_T_coin_hPSHWR_adcPulseAmp;   //!
   TBranch        *b_T_coin_hPSHWR_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hPSHWR_adcPulseInt;   //!
   TBranch        *b_T_coin_hPSHWR_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hPSHWR_adcPulseTime;   //!
   TBranch        *b_T_coin_hPSHWR_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hRF_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hRF_tdcTime;   //!
   TBranch        *b_T_coin_hRF_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hSHWR_adcMultiplicity;   //!
   TBranch        *b_T_coin_hSHWR_adcPed;   //!
   TBranch        *b_T_coin_hSHWR_adcPedRaw;   //!
   TBranch        *b_T_coin_hSHWR_adcPulseAmp;   //!
   TBranch        *b_T_coin_hSHWR_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_hSHWR_adcPulseInt;   //!
   TBranch        *b_T_coin_hSHWR_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_hSHWR_adcPulseTime;   //!
   TBranch        *b_T_coin_hSHWR_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_hSHWR_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hSHWR_tdcTime;   //!
   TBranch        *b_T_coin_hSHWR_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hSTOF_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hSTOF_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hSTOF_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hSTOF_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hSTOF_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hSTOF_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hT1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hT1_tdcTime;   //!
   TBranch        *b_T_coin_hT1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hT2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hT2_tdcTime;   //!
   TBranch        *b_T_coin_hT2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG1_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG1_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG1_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG1_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG1_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG1_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG2_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG2_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG2_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG2_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG2_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG2_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG3_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG3_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG3_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG3_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG3_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG3_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG4_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG4_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG4_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG4_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG4_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG4_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG5_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG5_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG5_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG5_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG5_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG5_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG6_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG6_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG6_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_hTRIG6_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_hTRIG6_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_hTRIG6_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_p1T_tdcMultiplicity;   //!
   TBranch        *b_T_coin_p1T_tdcTime;   //!
   TBranch        *b_T_coin_p1T_tdcTimeRaw;   //!
   TBranch        *b_T_coin_p1X_tdcMultiplicity;   //!
   TBranch        *b_T_coin_p1X_tdcTime;   //!
   TBranch        *b_T_coin_p1X_tdcTimeRaw;   //!
   TBranch        *b_T_coin_p1Y_tdcMultiplicity;   //!
   TBranch        *b_T_coin_p1Y_tdcTime;   //!
   TBranch        *b_T_coin_p1Y_tdcTimeRaw;   //!
   TBranch        *b_T_coin_p2T_tdcMultiplicity;   //!
   TBranch        *b_T_coin_p2T_tdcTime;   //!
   TBranch        *b_T_coin_p2T_tdcTimeRaw;   //!
   TBranch        *b_T_coin_p2X_tdcMultiplicity;   //!
   TBranch        *b_T_coin_p2X_tdcTime;   //!
   TBranch        *b_T_coin_p2X_tdcTimeRaw;   //!
   TBranch        *b_T_coin_p2Y_tdcMultiplicity;   //!
   TBranch        *b_T_coin_p2Y_tdcTime;   //!
   TBranch        *b_T_coin_p2Y_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pAER_adcMultiplicity;   //!
   TBranch        *b_T_coin_pAER_adcPed;   //!
   TBranch        *b_T_coin_pAER_adcPedRaw;   //!
   TBranch        *b_T_coin_pAER_adcPulseAmp;   //!
   TBranch        *b_T_coin_pAER_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pAER_adcPulseInt;   //!
   TBranch        *b_T_coin_pAER_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pAER_adcPulseTime;   //!
   TBranch        *b_T_coin_pAER_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pAER_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pAER_tdcTime;   //!
   TBranch        *b_T_coin_pAER_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF10_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF10_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF10_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF1_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF2_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF3_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF3_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF3_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF4_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF4_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF4_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF5_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF5_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF5_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF6_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF6_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF6_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF7_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF7_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF7_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF8_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF8_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF8_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pDCREF9_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pDCREF9_tdcTime;   //!
   TBranch        *b_T_coin_pDCREF9_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEDTM_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEDTM_tdcTime;   //!
   TBranch        *b_T_coin_pEDTM_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_CLEAN_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_CLEAN_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pEL_CLEAN_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_CLEAN_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_CLEAN_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pEL_CLEAN_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_HI_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_HI_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pEL_HI_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_HI_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_HI_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pEL_HI_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_LO_LO_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_LO_LO_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pEL_LO_LO_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_LO_LO_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_LO_LO_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pEL_LO_LO_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_LO_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_LO_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pEL_LO_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_LO_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_LO_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pEL_LO_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_REAL_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_REAL_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pEL_REAL_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pEL_REAL_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pEL_REAL_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pEL_REAL_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcMultiplicity;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPed;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPedRaw;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPulseAmp;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPulseInt;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPulseTime;   //!
   TBranch        *b_T_coin_pFADC_TREF_ROC2_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcMultiplicity;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPed;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPedRaw;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPulseAmp;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPulseInt;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPulseTime;   //!
   TBranch        *b_T_coin_pHEL_MPS_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcMultiplicity;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPed;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPedRaw;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPulseAmp;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPulseInt;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPulseTime;   //!
   TBranch        *b_T_coin_pHEL_NEG_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pHEL_POS_adcMultiplicity;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPed;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPedRaw;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPulseAmp;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPulseInt;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPulseTime;   //!
   TBranch        *b_T_coin_pHEL_POS_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcMultiplicity;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPed;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPedRaw;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPulseAmp;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPulseInt;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPulseTime;   //!
   TBranch        *b_T_coin_pHGCER_MOD_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pHGCER_adcMultiplicity;   //!
   TBranch        *b_T_coin_pHGCER_adcPed;   //!
   TBranch        *b_T_coin_pHGCER_adcPedRaw;   //!
   TBranch        *b_T_coin_pHGCER_adcPulseAmp;   //!
   TBranch        *b_T_coin_pHGCER_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pHGCER_adcPulseInt;   //!
   TBranch        *b_T_coin_pHGCER_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pHGCER_adcPulseTime;   //!
   TBranch        *b_T_coin_pHGCER_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pHGCER_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pHGCER_tdcTime;   //!
   TBranch        *b_T_coin_pHGCER_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pHODO_RF_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pHODO_RF_tdcTime;   //!
   TBranch        *b_T_coin_pHODO_RF_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcMultiplicity;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPed;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPedRaw;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPulseAmp;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPulseInt;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPulseTime;   //!
   TBranch        *b_T_coin_pNGCER_MOD_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pNGCER_adcMultiplicity;   //!
   TBranch        *b_T_coin_pNGCER_adcPed;   //!
   TBranch        *b_T_coin_pNGCER_adcPedRaw;   //!
   TBranch        *b_T_coin_pNGCER_adcPulseAmp;   //!
   TBranch        *b_T_coin_pNGCER_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pNGCER_adcPulseInt;   //!
   TBranch        *b_T_coin_pNGCER_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pNGCER_adcPulseTime;   //!
   TBranch        *b_T_coin_pNGCER_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pNGCER_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pNGCER_tdcTime;   //!
   TBranch        *b_T_coin_pNGCER_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE100_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE100_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pPRE100_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE100_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE100_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pPRE100_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE150_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE150_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pPRE150_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE150_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE150_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pPRE150_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE200_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE200_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pPRE200_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE200_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE200_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pPRE200_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE40_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE40_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pPRE40_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRE40_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRE40_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pPRE40_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRHI_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRHI_tdcTime;   //!
   TBranch        *b_T_coin_pPRHI_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPRLO_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pPRLO_tdcTime;   //!
   TBranch        *b_T_coin_pPRLO_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pPSHWR_adcMultiplicity;   //!
   TBranch        *b_T_coin_pPSHWR_adcPed;   //!
   TBranch        *b_T_coin_pPSHWR_adcPedRaw;   //!
   TBranch        *b_T_coin_pPSHWR_adcPulseAmp;   //!
   TBranch        *b_T_coin_pPSHWR_adcPulseAmpRaw;   //!
   TBranch        *b_T_coin_pPSHWR_adcPulseInt;   //!
   TBranch        *b_T_coin_pPSHWR_adcPulseIntRaw;   //!
   TBranch        *b_T_coin_pPSHWR_adcPulseTime;   //!
   TBranch        *b_T_coin_pPSHWR_adcPulseTimeRaw;   //!
   TBranch        *b_T_coin_pRF_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pRF_tdcTime;   //!
   TBranch        *b_T_coin_pRF_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pSTOF_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pSTOF_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pSTOF_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pSTOF_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pSTOF_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pSTOF_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pT1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pT1_tdcTime;   //!
   TBranch        *b_T_coin_pT1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pT2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pT2_tdcTime;   //!
   TBranch        *b_T_coin_pT2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pT3_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pT3_tdcTime;   //!
   TBranch        *b_T_coin_pT3_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG1_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG1_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG1_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG1_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG1_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG1_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG2_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG2_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG2_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG2_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG2_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG2_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG3_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG3_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG3_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG3_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG3_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG3_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG4_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG4_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG4_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG4_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG4_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG4_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG5_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG5_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG5_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG5_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG5_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG5_ROC2_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG6_ROC1_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG6_ROC1_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG6_ROC1_tdcTimeRaw;   //!
   TBranch        *b_T_coin_pTRIG6_ROC2_tdcMultiplicity;   //!
   TBranch        *b_T_coin_pTRIG6_ROC2_tdcTime;   //!
   TBranch        *b_T_coin_pTRIG6_ROC2_tdcTimeRaw;   //!
   TBranch        *b_g_evtyp;   //!
   TBranch        *b_IBC3H00CRCUR4;   //!
   TBranch        *b_IGL1I00OD16_16;   //!
   TBranch        *b_HELFREQ;   //!
   TBranch        *b_HELDELAYs;   //!
   TBranch        *b_hac_bcm_average;   //!
   TBranch        *b_ibcm1;   //!
   TBranch        *b_ibcm2;   //!
   TBranch        *b_iunser;   //!
   TBranch        *b_itov3out;   //!
   TBranch        *b_itov4out;   //!
   TBranch        *b_IPM3H07A_XPOS;   //!
   TBranch        *b_IPM3H07A_YPOS;   //!
   TBranch        *b_IPM3H07B_XPOS;   //!
   TBranch        *b_IPM3H07B_YPOS;   //!
   TBranch        *b_IPM3H07C_XPOS;   //!
   TBranch        *b_IPM3H07C_YPOS;   //!
   TBranch        *b_IPM3H07A_XRAW;   //!
   TBranch        *b_IPM3H07A_YRAW;   //!
   TBranch        *b_IPM3H07B_XRAW;   //!
   TBranch        *b_IPM3H07B_YRAW;   //!
   TBranch        *b_IPM3H07C_XRAW;   //!
   TBranch        *b_IPM3H07C_YRAW;   //!
   TBranch        *b_IPM3H07A_XSOF;   //!
   TBranch        *b_IPM3H07A_YSOF;   //!
   TBranch        *b_IPM3H07B_XSOF;   //!
   TBranch        *b_IPM3H07B_YSOF;   //!
   TBranch        *b_IPM3H07C_XSOF;   //!
   TBranch        *b_IPM3H07C_YSOF;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtTime;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtNum;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtType;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtLen;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fHelicity;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fTargetPol;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fRun;   //!

   T(TTree *tree=0);
   virtual ~T();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef T_cxx
T::T(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("ROOTfiles/coin_replay_production_8481_2.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("ROOTfiles/coin_replay_production_8481_2.root");
      }
      f->GetObject("T",tree);

   }
   Init(tree);
}

T::~T()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t T::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t T::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void T::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("H.gtr.xptar", &H_gtr_xptar, &b_H_gtr_xptar);
   fChain->SetBranchAddress("H.gtr.yptar", &H_gtr_yptar, &b_H_gtr_yptar);
   fChain->SetBranchAddress("P.gtr.xptar", &P_gtr_xptar, &b_P_gtr_xptar);
   fChain->SetBranchAddress("P.gtr.yptar", &P_gtr_yptar, &b_P_gtr_yptar);
   fChain->SetBranchAddress("mmiss", &mmiss, &b_mmiss);
   fChain->SetBranchAddress("CTime.epCoinTime_ROC1", &CTime_epCoinTime_ROC1, &b_CTime_epCoinTime_ROC1);
   fChain->SetBranchAddress("CTime.epCoinTime_ROC2", &CTime_epCoinTime_ROC2, &b_CTime_epCoinTime_ROC2);
   fChain->SetBranchAddress("CTime.epCoinTime_TRIG1", &CTime_epCoinTime_TRIG1, &b_CTime_epCoinTime_TRIG1);
   fChain->SetBranchAddress("CTime.epCoinTime_TRIG4", &CTime_epCoinTime_TRIG4, &b_CTime_epCoinTime_TRIG4);
   fChain->SetBranchAddress("H.cal.eprtrack", &H_cal_eprtrack, &b_H_cal_eprtrack);
   fChain->SetBranchAddress("H.cal.eprtracknorm", &H_cal_eprtracknorm, &b_H_cal_eprtracknorm);
   fChain->SetBranchAddress("H.cal.etot", &H_cal_etot, &b_H_cal_etot);
   fChain->SetBranchAddress("H.cal.etotnorm", &H_cal_etotnorm, &b_H_cal_etotnorm);
   fChain->SetBranchAddress("H.cal.etottracknorm", &H_cal_etottracknorm, &b_H_cal_etottracknorm);
   fChain->SetBranchAddress("H.cal.etrack", &H_cal_etrack, &b_H_cal_etrack);
   fChain->SetBranchAddress("H.cal.etracknorm", &H_cal_etracknorm, &b_H_cal_etracknorm);
   fChain->SetBranchAddress("H.cer.npeSum", &H_cer_npeSum, &b_H_cer_npeSum);
   fChain->SetBranchAddress("H.dc.ntrack", &H_dc_ntrack, &b_H_dc_ntrack);
   fChain->SetBranchAddress("H.dc.x_fp", &H_dc_x_fp, &b_H_dc_x_fp);
   fChain->SetBranchAddress("H.dc.xp_fp", &H_dc_xp_fp, &b_H_dc_xp_fp);
   fChain->SetBranchAddress("H.dc.y_fp", &H_dc_y_fp, &b_H_dc_y_fp);
   fChain->SetBranchAddress("H.dc.yp_fp", &H_dc_yp_fp, &b_H_dc_yp_fp);
   fChain->SetBranchAddress("H.extcor.xsieve", &H_extcor_xsieve, &b_H_extcor_xsieve);
   fChain->SetBranchAddress("H.extcor.ysieve", &H_extcor_ysieve, &b_H_extcor_ysieve);
   fChain->SetBranchAddress("H.gtr.beta", &H_gtr_beta, &b_H_gtr_beta);
   fChain->SetBranchAddress("H.gtr.dp", &H_gtr_dp, &b_H_gtr_dp);
   fChain->SetBranchAddress("H.gtr.index", &H_gtr_index, &b_H_gtr_index);
   fChain->SetBranchAddress("H.gtr.ok", &H_gtr_ok, &b_H_gtr_ok);
   fChain->SetBranchAddress("H.gtr.p", &H_gtr_p, &b_H_gtr_p);
   fChain->SetBranchAddress("H.gtr.ph", &H_gtr_ph, &b_H_gtr_ph);
   fChain->SetBranchAddress("H.gtr.px", &H_gtr_px, &b_H_gtr_px);
   fChain->SetBranchAddress("H.gtr.py", &H_gtr_py, &b_H_gtr_py);
   fChain->SetBranchAddress("H.gtr.pz", &H_gtr_pz, &b_H_gtr_pz);
   fChain->SetBranchAddress("H.gtr.th", &H_gtr_th, &b_H_gtr_th);
   fChain->SetBranchAddress("H.gtr.x", &H_gtr_x, &b_H_gtr_x);
   fChain->SetBranchAddress("H.gtr.y", &H_gtr_y, &b_H_gtr_y);
   fChain->SetBranchAddress("H.hod.beta", &H_hod_beta, &b_H_hod_beta);
   fChain->SetBranchAddress("H.hod.betachisqnotrack", &H_hod_betachisqnotrack, &b_H_hod_betachisqnotrack);
   fChain->SetBranchAddress("H.hod.betanotrack", &H_hod_betanotrack, &b_H_hod_betanotrack);
   fChain->SetBranchAddress("H.hod.fpHitsTime", &H_hod_fpHitsTime, &b_H_hod_fpHitsTime);
   fChain->SetBranchAddress("H.hod.starttime", &H_hod_starttime, &b_H_hod_starttime);
   fChain->SetBranchAddress("H.kin.primary.Q2", &H_kin_primary_Q2, &b_H_kin_primary_Q2);
   fChain->SetBranchAddress("H.kin.primary.W", &H_kin_primary_W, &b_H_kin_primary_W);
   fChain->SetBranchAddress("H.kin.primary.W2", &H_kin_primary_W2, &b_H_kin_primary_W2);
   fChain->SetBranchAddress("H.kin.primary.epsilon", &H_kin_primary_epsilon, &b_H_kin_primary_epsilon);
   fChain->SetBranchAddress("H.kin.primary.nu", &H_kin_primary_nu, &b_H_kin_primary_nu);
   fChain->SetBranchAddress("H.kin.primary.omega", &H_kin_primary_omega, &b_H_kin_primary_omega);
   fChain->SetBranchAddress("H.kin.primary.ph_q", &H_kin_primary_ph_q, &b_H_kin_primary_ph_q);
   fChain->SetBranchAddress("H.kin.primary.q3m", &H_kin_primary_q3m, &b_H_kin_primary_q3m);
   fChain->SetBranchAddress("H.kin.primary.q_x", &H_kin_primary_q_x, &b_H_kin_primary_q_x);
   fChain->SetBranchAddress("H.kin.primary.q_y", &H_kin_primary_q_y, &b_H_kin_primary_q_y);
   fChain->SetBranchAddress("H.kin.primary.q_z", &H_kin_primary_q_z, &b_H_kin_primary_q_z);
   fChain->SetBranchAddress("H.kin.primary.scat_ang_deg", &H_kin_primary_scat_ang_deg, &b_H_kin_primary_scat_ang_deg);
   fChain->SetBranchAddress("H.kin.primary.scat_ang_rad", &H_kin_primary_scat_ang_rad, &b_H_kin_primary_scat_ang_rad);
   fChain->SetBranchAddress("H.kin.primary.th_q", &H_kin_primary_th_q, &b_H_kin_primary_th_q);
   fChain->SetBranchAddress("H.kin.primary.x_bj", &H_kin_primary_x_bj, &b_H_kin_primary_x_bj);
   fChain->SetBranchAddress("H.rb.raster.fr_xbpm_tar", &H_rb_raster_fr_xbpm_tar, &b_H_rb_raster_fr_xbpm_tar);
   fChain->SetBranchAddress("H.rb.raster.fr_ybpm_tar", &H_rb_raster_fr_ybpm_tar, &b_H_rb_raster_fr_ybpm_tar);
   fChain->SetBranchAddress("H.react.x", &H_react_x, &b_H_react_x);
   fChain->SetBranchAddress("H.react.y", &H_react_y, &b_H_react_y);
   fChain->SetBranchAddress("H.react.z", &H_react_z, &b_H_react_z);
   fChain->SetBranchAddress("P.aero.npeSum", &P_aero_npeSum, &b_P_aero_npeSum);
   fChain->SetBranchAddress("P.cal.eprtrack", &P_cal_eprtrack, &b_P_cal_eprtrack);
   fChain->SetBranchAddress("P.cal.eprtracknorm", &P_cal_eprtracknorm, &b_P_cal_eprtracknorm);
   fChain->SetBranchAddress("P.cal.etot", &P_cal_etot, &b_P_cal_etot);
   fChain->SetBranchAddress("P.cal.etotnorm", &P_cal_etotnorm, &b_P_cal_etotnorm);
   fChain->SetBranchAddress("P.cal.etottracknorm", &P_cal_etottracknorm, &b_P_cal_etottracknorm);
   fChain->SetBranchAddress("P.cal.etracknorm", &P_cal_etracknorm, &b_P_cal_etracknorm);
   fChain->SetBranchAddress("P.cal.pr.eplane", &P_cal_pr_eplane, &b_P_cal_pr_eplane);
   fChain->SetBranchAddress("P.dc.ntrack", &P_dc_ntrack, &b_P_dc_ntrack);
   fChain->SetBranchAddress("P.dc.x_fp", &P_dc_x_fp, &b_P_dc_x_fp);
   fChain->SetBranchAddress("P.dc.xp_fp", &P_dc_xp_fp, &b_P_dc_xp_fp);
   fChain->SetBranchAddress("P.dc.y_fp", &P_dc_y_fp, &b_P_dc_y_fp);
   fChain->SetBranchAddress("P.dc.yp_fp", &P_dc_yp_fp, &b_P_dc_yp_fp);
   fChain->SetBranchAddress("P.extcor.xsieve", &P_extcor_xsieve, &b_P_extcor_xsieve);
   fChain->SetBranchAddress("P.extcor.ysieve", &P_extcor_ysieve, &b_P_extcor_ysieve);
   fChain->SetBranchAddress("P.gtr.beta", &P_gtr_beta, &b_P_gtr_beta);
   fChain->SetBranchAddress("P.gtr.dp", &P_gtr_dp, &b_P_gtr_dp);
   fChain->SetBranchAddress("P.gtr.index", &P_gtr_index, &b_P_gtr_index);
   fChain->SetBranchAddress("P.gtr.ok", &P_gtr_ok, &b_P_gtr_ok);
   fChain->SetBranchAddress("P.gtr.p", &P_gtr_p, &b_P_gtr_p);
   fChain->SetBranchAddress("P.gtr.ph", &P_gtr_ph, &b_P_gtr_ph);
   fChain->SetBranchAddress("P.gtr.px", &P_gtr_px, &b_P_gtr_px);
   fChain->SetBranchAddress("P.gtr.py", &P_gtr_py, &b_P_gtr_py);
   fChain->SetBranchAddress("P.gtr.pz", &P_gtr_pz, &b_P_gtr_pz);
   fChain->SetBranchAddress("P.gtr.th", &P_gtr_th, &b_P_gtr_th);
   fChain->SetBranchAddress("P.gtr.x", &P_gtr_x, &b_P_gtr_x);
   fChain->SetBranchAddress("P.gtr.y", &P_gtr_y, &b_P_gtr_y);
   fChain->SetBranchAddress("P.hgcer.npeSum", &P_hgcer_npeSum, &b_P_hgcer_npeSum);
   fChain->SetBranchAddress("P.hod.beta", &P_hod_beta, &b_P_hod_beta);
   fChain->SetBranchAddress("P.hod.betachisqnotrack", &P_hod_betachisqnotrack, &b_P_hod_betachisqnotrack);
   fChain->SetBranchAddress("P.hod.betanotrack", &P_hod_betanotrack, &b_P_hod_betanotrack);
   fChain->SetBranchAddress("P.hod.fpHitsTime", &P_hod_fpHitsTime, &b_P_hod_fpHitsTime);
   fChain->SetBranchAddress("P.hod.goodscinhit", &P_hod_goodscinhit, &b_P_hod_goodscinhit);
   fChain->SetBranchAddress("P.hod.starttime", &P_hod_starttime, &b_P_hod_starttime);
   fChain->SetBranchAddress("P.kin.secondary.Erecoil", &P_kin_secondary_Erecoil, &b_P_kin_secondary_Erecoil);
   fChain->SetBranchAddress("P.kin.secondary.MandelS", &P_kin_secondary_MandelS, &b_P_kin_secondary_MandelS);
   fChain->SetBranchAddress("P.kin.secondary.MandelT", &P_kin_secondary_MandelT, &b_P_kin_secondary_MandelT);
   fChain->SetBranchAddress("P.kin.secondary.MandelU", &P_kin_secondary_MandelU, &b_P_kin_secondary_MandelU);
   fChain->SetBranchAddress("P.kin.secondary.Mrecoil", &P_kin_secondary_Mrecoil, &b_P_kin_secondary_Mrecoil);
   fChain->SetBranchAddress("P.kin.secondary.Prec_x", &P_kin_secondary_Prec_x, &b_P_kin_secondary_Prec_x);
   fChain->SetBranchAddress("P.kin.secondary.Prec_y", &P_kin_secondary_Prec_y, &b_P_kin_secondary_Prec_y);
   fChain->SetBranchAddress("P.kin.secondary.Prec_z", &P_kin_secondary_Prec_z, &b_P_kin_secondary_Prec_z);
   fChain->SetBranchAddress("P.kin.secondary.emiss", &P_kin_secondary_emiss, &b_P_kin_secondary_emiss);
   fChain->SetBranchAddress("P.kin.secondary.emiss_nuc", &P_kin_secondary_emiss_nuc, &b_P_kin_secondary_emiss_nuc);
   fChain->SetBranchAddress("P.kin.secondary.ph_bq", &P_kin_secondary_ph_bq, &b_P_kin_secondary_ph_bq);
   fChain->SetBranchAddress("P.kin.secondary.ph_xq", &P_kin_secondary_ph_xq, &b_P_kin_secondary_ph_xq);
   fChain->SetBranchAddress("P.kin.secondary.phb_cm", &P_kin_secondary_phb_cm, &b_P_kin_secondary_phb_cm);
   fChain->SetBranchAddress("P.kin.secondary.phx_cm", &P_kin_secondary_phx_cm, &b_P_kin_secondary_phx_cm);
   fChain->SetBranchAddress("P.kin.secondary.pmiss", &P_kin_secondary_pmiss, &b_P_kin_secondary_pmiss);
   fChain->SetBranchAddress("P.kin.secondary.pmiss_x", &P_kin_secondary_pmiss_x, &b_P_kin_secondary_pmiss_x);
   fChain->SetBranchAddress("P.kin.secondary.pmiss_y", &P_kin_secondary_pmiss_y, &b_P_kin_secondary_pmiss_y);
   fChain->SetBranchAddress("P.kin.secondary.pmiss_z", &P_kin_secondary_pmiss_z, &b_P_kin_secondary_pmiss_z);
   fChain->SetBranchAddress("P.kin.secondary.px_cm", &P_kin_secondary_px_cm, &b_P_kin_secondary_px_cm);
   fChain->SetBranchAddress("P.kin.secondary.t_tot_cm", &P_kin_secondary_t_tot_cm, &b_P_kin_secondary_t_tot_cm);
   fChain->SetBranchAddress("P.kin.secondary.tb", &P_kin_secondary_tb, &b_P_kin_secondary_tb);
   fChain->SetBranchAddress("P.kin.secondary.tb_cm", &P_kin_secondary_tb_cm, &b_P_kin_secondary_tb_cm);
   fChain->SetBranchAddress("P.kin.secondary.th_bq", &P_kin_secondary_th_bq, &b_P_kin_secondary_th_bq);
   fChain->SetBranchAddress("P.kin.secondary.th_xq", &P_kin_secondary_th_xq, &b_P_kin_secondary_th_xq);
   fChain->SetBranchAddress("P.kin.secondary.thb_cm", &P_kin_secondary_thb_cm, &b_P_kin_secondary_thb_cm);
   fChain->SetBranchAddress("P.kin.secondary.thx_cm", &P_kin_secondary_thx_cm, &b_P_kin_secondary_thx_cm);
   fChain->SetBranchAddress("P.kin.secondary.tx", &P_kin_secondary_tx, &b_P_kin_secondary_tx);
   fChain->SetBranchAddress("P.kin.secondary.tx_cm", &P_kin_secondary_tx_cm, &b_P_kin_secondary_tx_cm);
   fChain->SetBranchAddress("P.kin.secondary.xangle", &P_kin_secondary_xangle, &b_P_kin_secondary_xangle);
   fChain->SetBranchAddress("P.ngcer.npeSum", &P_ngcer_npeSum, &b_P_ngcer_npeSum);
   fChain->SetBranchAddress("P.react.z", &P_react_z, &b_P_react_z);
   fChain->SetBranchAddress("T.coin.h1T_tdcMultiplicity", &T_coin_h1T_tdcMultiplicity, &b_T_coin_h1T_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.h1T_tdcTime", &T_coin_h1T_tdcTime, &b_T_coin_h1T_tdcTime);
   fChain->SetBranchAddress("T.coin.h1T_tdcTimeRaw", &T_coin_h1T_tdcTimeRaw, &b_T_coin_h1T_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.h1X_tdcMultiplicity", &T_coin_h1X_tdcMultiplicity, &b_T_coin_h1X_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.h1X_tdcTime", &T_coin_h1X_tdcTime, &b_T_coin_h1X_tdcTime);
   fChain->SetBranchAddress("T.coin.h1X_tdcTimeRaw", &T_coin_h1X_tdcTimeRaw, &b_T_coin_h1X_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.h1Y_tdcMultiplicity", &T_coin_h1Y_tdcMultiplicity, &b_T_coin_h1Y_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.h1Y_tdcTime", &T_coin_h1Y_tdcTime, &b_T_coin_h1Y_tdcTime);
   fChain->SetBranchAddress("T.coin.h1Y_tdcTimeRaw", &T_coin_h1Y_tdcTimeRaw, &b_T_coin_h1Y_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.h2T_tdcMultiplicity", &T_coin_h2T_tdcMultiplicity, &b_T_coin_h2T_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.h2T_tdcTime", &T_coin_h2T_tdcTime, &b_T_coin_h2T_tdcTime);
   fChain->SetBranchAddress("T.coin.h2T_tdcTimeRaw", &T_coin_h2T_tdcTimeRaw, &b_T_coin_h2T_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.h2X_tdcMultiplicity", &T_coin_h2X_tdcMultiplicity, &b_T_coin_h2X_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.h2X_tdcTime", &T_coin_h2X_tdcTime, &b_T_coin_h2X_tdcTime);
   fChain->SetBranchAddress("T.coin.h2X_tdcTimeRaw", &T_coin_h2X_tdcTimeRaw, &b_T_coin_h2X_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.h2Y_tdcMultiplicity", &T_coin_h2Y_tdcMultiplicity, &b_T_coin_h2Y_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.h2Y_tdcTime", &T_coin_h2Y_tdcTime, &b_T_coin_h2Y_tdcTime);
   fChain->SetBranchAddress("T.coin.h2Y_tdcTimeRaw", &T_coin_h2Y_tdcTimeRaw, &b_T_coin_h2Y_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hAER_adcMultiplicity", &T_coin_hAER_adcMultiplicity, &b_T_coin_hAER_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hAER_adcPed", &T_coin_hAER_adcPed, &b_T_coin_hAER_adcPed);
   fChain->SetBranchAddress("T.coin.hAER_adcPedRaw", &T_coin_hAER_adcPedRaw, &b_T_coin_hAER_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hAER_adcPulseAmp", &T_coin_hAER_adcPulseAmp, &b_T_coin_hAER_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hAER_adcPulseAmpRaw", &T_coin_hAER_adcPulseAmpRaw, &b_T_coin_hAER_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hAER_adcPulseInt", &T_coin_hAER_adcPulseInt, &b_T_coin_hAER_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hAER_adcPulseIntRaw", &T_coin_hAER_adcPulseIntRaw, &b_T_coin_hAER_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hAER_adcPulseTime", &T_coin_hAER_adcPulseTime, &b_T_coin_hAER_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hAER_adcPulseTimeRaw", &T_coin_hAER_adcPulseTimeRaw, &b_T_coin_hAER_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hASUM_adcMultiplicity", &T_coin_hASUM_adcMultiplicity, &b_T_coin_hASUM_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hASUM_adcPed", &T_coin_hASUM_adcPed, &b_T_coin_hASUM_adcPed);
   fChain->SetBranchAddress("T.coin.hASUM_adcPedRaw", &T_coin_hASUM_adcPedRaw, &b_T_coin_hASUM_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hASUM_adcPulseAmp", &T_coin_hASUM_adcPulseAmp, &b_T_coin_hASUM_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hASUM_adcPulseAmpRaw", &T_coin_hASUM_adcPulseAmpRaw, &b_T_coin_hASUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hASUM_adcPulseInt", &T_coin_hASUM_adcPulseInt, &b_T_coin_hASUM_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hASUM_adcPulseIntRaw", &T_coin_hASUM_adcPulseIntRaw, &b_T_coin_hASUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hASUM_adcPulseTime", &T_coin_hASUM_adcPulseTime, &b_T_coin_hASUM_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hASUM_adcPulseTimeRaw", &T_coin_hASUM_adcPulseTimeRaw, &b_T_coin_hASUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hASUM_tdcMultiplicity", &T_coin_hASUM_tdcMultiplicity, &b_T_coin_hASUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hASUM_tdcTime", &T_coin_hASUM_tdcTime, &b_T_coin_hASUM_tdcTime);
   fChain->SetBranchAddress("T.coin.hASUM_tdcTimeRaw", &T_coin_hASUM_tdcTimeRaw, &b_T_coin_hASUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hBSUM_adcMultiplicity", &T_coin_hBSUM_adcMultiplicity, &b_T_coin_hBSUM_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPed", &T_coin_hBSUM_adcPed, &b_T_coin_hBSUM_adcPed);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPedRaw", &T_coin_hBSUM_adcPedRaw, &b_T_coin_hBSUM_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPulseAmp", &T_coin_hBSUM_adcPulseAmp, &b_T_coin_hBSUM_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPulseAmpRaw", &T_coin_hBSUM_adcPulseAmpRaw, &b_T_coin_hBSUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPulseInt", &T_coin_hBSUM_adcPulseInt, &b_T_coin_hBSUM_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPulseIntRaw", &T_coin_hBSUM_adcPulseIntRaw, &b_T_coin_hBSUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPulseTime", &T_coin_hBSUM_adcPulseTime, &b_T_coin_hBSUM_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hBSUM_adcPulseTimeRaw", &T_coin_hBSUM_adcPulseTimeRaw, &b_T_coin_hBSUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hBSUM_tdcMultiplicity", &T_coin_hBSUM_tdcMultiplicity, &b_T_coin_hBSUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hBSUM_tdcTime", &T_coin_hBSUM_tdcTime, &b_T_coin_hBSUM_tdcTime);
   fChain->SetBranchAddress("T.coin.hBSUM_tdcTimeRaw", &T_coin_hBSUM_tdcTimeRaw, &b_T_coin_hBSUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hCER_adcMultiplicity", &T_coin_hCER_adcMultiplicity, &b_T_coin_hCER_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hCER_adcPed", &T_coin_hCER_adcPed, &b_T_coin_hCER_adcPed);
   fChain->SetBranchAddress("T.coin.hCER_adcPedRaw", &T_coin_hCER_adcPedRaw, &b_T_coin_hCER_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hCER_adcPulseAmp", &T_coin_hCER_adcPulseAmp, &b_T_coin_hCER_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hCER_adcPulseAmpRaw", &T_coin_hCER_adcPulseAmpRaw, &b_T_coin_hCER_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hCER_adcPulseInt", &T_coin_hCER_adcPulseInt, &b_T_coin_hCER_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hCER_adcPulseIntRaw", &T_coin_hCER_adcPulseIntRaw, &b_T_coin_hCER_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hCER_adcPulseTime", &T_coin_hCER_adcPulseTime, &b_T_coin_hCER_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hCER_adcPulseTimeRaw", &T_coin_hCER_adcPulseTimeRaw, &b_T_coin_hCER_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hCER_tdcMultiplicity", &T_coin_hCER_tdcMultiplicity, &b_T_coin_hCER_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hCER_tdcTime", &T_coin_hCER_tdcTime, &b_T_coin_hCER_tdcTime);
   fChain->SetBranchAddress("T.coin.hCER_tdcTimeRaw", &T_coin_hCER_tdcTimeRaw, &b_T_coin_hCER_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hCSUM_adcMultiplicity", &T_coin_hCSUM_adcMultiplicity, &b_T_coin_hCSUM_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPed", &T_coin_hCSUM_adcPed, &b_T_coin_hCSUM_adcPed);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPedRaw", &T_coin_hCSUM_adcPedRaw, &b_T_coin_hCSUM_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPulseAmp", &T_coin_hCSUM_adcPulseAmp, &b_T_coin_hCSUM_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPulseAmpRaw", &T_coin_hCSUM_adcPulseAmpRaw, &b_T_coin_hCSUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPulseInt", &T_coin_hCSUM_adcPulseInt, &b_T_coin_hCSUM_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPulseIntRaw", &T_coin_hCSUM_adcPulseIntRaw, &b_T_coin_hCSUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPulseTime", &T_coin_hCSUM_adcPulseTime, &b_T_coin_hCSUM_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hCSUM_adcPulseTimeRaw", &T_coin_hCSUM_adcPulseTimeRaw, &b_T_coin_hCSUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hCSUM_tdcMultiplicity", &T_coin_hCSUM_tdcMultiplicity, &b_T_coin_hCSUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hCSUM_tdcTime", &T_coin_hCSUM_tdcTime, &b_T_coin_hCSUM_tdcTime);
   fChain->SetBranchAddress("T.coin.hCSUM_tdcTimeRaw", &T_coin_hCSUM_tdcTimeRaw, &b_T_coin_hCSUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hDCREF1_tdcMultiplicity", &T_coin_hDCREF1_tdcMultiplicity, &b_T_coin_hDCREF1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hDCREF1_tdcTime", &T_coin_hDCREF1_tdcTime, &b_T_coin_hDCREF1_tdcTime);
   fChain->SetBranchAddress("T.coin.hDCREF1_tdcTimeRaw", &T_coin_hDCREF1_tdcTimeRaw, &b_T_coin_hDCREF1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hDCREF2_tdcMultiplicity", &T_coin_hDCREF2_tdcMultiplicity, &b_T_coin_hDCREF2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hDCREF2_tdcTime", &T_coin_hDCREF2_tdcTime, &b_T_coin_hDCREF2_tdcTime);
   fChain->SetBranchAddress("T.coin.hDCREF2_tdcTimeRaw", &T_coin_hDCREF2_tdcTimeRaw, &b_T_coin_hDCREF2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hDCREF3_tdcMultiplicity", &T_coin_hDCREF3_tdcMultiplicity, &b_T_coin_hDCREF3_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hDCREF3_tdcTime", &T_coin_hDCREF3_tdcTime, &b_T_coin_hDCREF3_tdcTime);
   fChain->SetBranchAddress("T.coin.hDCREF3_tdcTimeRaw", &T_coin_hDCREF3_tdcTimeRaw, &b_T_coin_hDCREF3_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hDCREF4_tdcMultiplicity", &T_coin_hDCREF4_tdcMultiplicity, &b_T_coin_hDCREF4_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hDCREF4_tdcTime", &T_coin_hDCREF4_tdcTime, &b_T_coin_hDCREF4_tdcTime);
   fChain->SetBranchAddress("T.coin.hDCREF4_tdcTimeRaw", &T_coin_hDCREF4_tdcTimeRaw, &b_T_coin_hDCREF4_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hDCREF5_tdcMultiplicity", &T_coin_hDCREF5_tdcMultiplicity, &b_T_coin_hDCREF5_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hDCREF5_tdcTime", &T_coin_hDCREF5_tdcTime, &b_T_coin_hDCREF5_tdcTime);
   fChain->SetBranchAddress("T.coin.hDCREF5_tdcTimeRaw", &T_coin_hDCREF5_tdcTimeRaw, &b_T_coin_hDCREF5_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hDSUM_adcMultiplicity", &T_coin_hDSUM_adcMultiplicity, &b_T_coin_hDSUM_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPed", &T_coin_hDSUM_adcPed, &b_T_coin_hDSUM_adcPed);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPedRaw", &T_coin_hDSUM_adcPedRaw, &b_T_coin_hDSUM_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPulseAmp", &T_coin_hDSUM_adcPulseAmp, &b_T_coin_hDSUM_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPulseAmpRaw", &T_coin_hDSUM_adcPulseAmpRaw, &b_T_coin_hDSUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPulseInt", &T_coin_hDSUM_adcPulseInt, &b_T_coin_hDSUM_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPulseIntRaw", &T_coin_hDSUM_adcPulseIntRaw, &b_T_coin_hDSUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPulseTime", &T_coin_hDSUM_adcPulseTime, &b_T_coin_hDSUM_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hDSUM_adcPulseTimeRaw", &T_coin_hDSUM_adcPulseTimeRaw, &b_T_coin_hDSUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hDSUM_tdcMultiplicity", &T_coin_hDSUM_tdcMultiplicity, &b_T_coin_hDSUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hDSUM_tdcTime", &T_coin_hDSUM_tdcTime, &b_T_coin_hDSUM_tdcTime);
   fChain->SetBranchAddress("T.coin.hDSUM_tdcTimeRaw", &T_coin_hDSUM_tdcTimeRaw, &b_T_coin_hDSUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEDTM_tdcMultiplicity", &T_coin_hEDTM_tdcMultiplicity, &b_T_coin_hEDTM_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEDTM_tdcTime", &T_coin_hEDTM_tdcTime, &b_T_coin_hEDTM_tdcTime);
   fChain->SetBranchAddress("T.coin.hEDTM_tdcTimeRaw", &T_coin_hEDTM_tdcTimeRaw, &b_T_coin_hEDTM_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC1_tdcMultiplicity", &T_coin_hEL_CLEAN_ROC1_tdcMultiplicity, &b_T_coin_hEL_CLEAN_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC1_tdcTime", &T_coin_hEL_CLEAN_ROC1_tdcTime, &b_T_coin_hEL_CLEAN_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC1_tdcTimeRaw", &T_coin_hEL_CLEAN_ROC1_tdcTimeRaw, &b_T_coin_hEL_CLEAN_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC2_tdcMultiplicity", &T_coin_hEL_CLEAN_ROC2_tdcMultiplicity, &b_T_coin_hEL_CLEAN_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC2_tdcTime", &T_coin_hEL_CLEAN_ROC2_tdcTime, &b_T_coin_hEL_CLEAN_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC2_tdcTimeRaw", &T_coin_hEL_CLEAN_ROC2_tdcTimeRaw, &b_T_coin_hEL_CLEAN_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_HI_ROC1_tdcMultiplicity", &T_coin_hEL_HI_ROC1_tdcMultiplicity, &b_T_coin_hEL_HI_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_HI_ROC1_tdcTime", &T_coin_hEL_HI_ROC1_tdcTime, &b_T_coin_hEL_HI_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_HI_ROC1_tdcTimeRaw", &T_coin_hEL_HI_ROC1_tdcTimeRaw, &b_T_coin_hEL_HI_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_HI_ROC2_tdcMultiplicity", &T_coin_hEL_HI_ROC2_tdcMultiplicity, &b_T_coin_hEL_HI_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_HI_ROC2_tdcTime", &T_coin_hEL_HI_ROC2_tdcTime, &b_T_coin_hEL_HI_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_HI_ROC2_tdcTimeRaw", &T_coin_hEL_HI_ROC2_tdcTimeRaw, &b_T_coin_hEL_HI_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC1_tdcMultiplicity", &T_coin_hEL_LO_LO_ROC1_tdcMultiplicity, &b_T_coin_hEL_LO_LO_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC1_tdcTime", &T_coin_hEL_LO_LO_ROC1_tdcTime, &b_T_coin_hEL_LO_LO_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC1_tdcTimeRaw", &T_coin_hEL_LO_LO_ROC1_tdcTimeRaw, &b_T_coin_hEL_LO_LO_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC2_tdcMultiplicity", &T_coin_hEL_LO_LO_ROC2_tdcMultiplicity, &b_T_coin_hEL_LO_LO_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC2_tdcTime", &T_coin_hEL_LO_LO_ROC2_tdcTime, &b_T_coin_hEL_LO_LO_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC2_tdcTimeRaw", &T_coin_hEL_LO_LO_ROC2_tdcTimeRaw, &b_T_coin_hEL_LO_LO_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_LO_ROC1_tdcMultiplicity", &T_coin_hEL_LO_ROC1_tdcMultiplicity, &b_T_coin_hEL_LO_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_LO_ROC1_tdcTime", &T_coin_hEL_LO_ROC1_tdcTime, &b_T_coin_hEL_LO_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_LO_ROC1_tdcTimeRaw", &T_coin_hEL_LO_ROC1_tdcTimeRaw, &b_T_coin_hEL_LO_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_LO_ROC2_tdcMultiplicity", &T_coin_hEL_LO_ROC2_tdcMultiplicity, &b_T_coin_hEL_LO_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_LO_ROC2_tdcTime", &T_coin_hEL_LO_ROC2_tdcTime, &b_T_coin_hEL_LO_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_LO_ROC2_tdcTimeRaw", &T_coin_hEL_LO_ROC2_tdcTimeRaw, &b_T_coin_hEL_LO_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_REAL_ROC1_tdcMultiplicity", &T_coin_hEL_REAL_ROC1_tdcMultiplicity, &b_T_coin_hEL_REAL_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_REAL_ROC1_tdcTime", &T_coin_hEL_REAL_ROC1_tdcTime, &b_T_coin_hEL_REAL_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_REAL_ROC1_tdcTimeRaw", &T_coin_hEL_REAL_ROC1_tdcTimeRaw, &b_T_coin_hEL_REAL_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hEL_REAL_ROC2_tdcMultiplicity", &T_coin_hEL_REAL_ROC2_tdcMultiplicity, &b_T_coin_hEL_REAL_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hEL_REAL_ROC2_tdcTime", &T_coin_hEL_REAL_ROC2_tdcTime, &b_T_coin_hEL_REAL_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hEL_REAL_ROC2_tdcTimeRaw", &T_coin_hEL_REAL_ROC2_tdcTimeRaw, &b_T_coin_hEL_REAL_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcMultiplicity", &T_coin_hFADC_TREF_ROC1_adcMultiplicity, &b_T_coin_hFADC_TREF_ROC1_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPed", &T_coin_hFADC_TREF_ROC1_adcPed, &b_T_coin_hFADC_TREF_ROC1_adcPed);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPedRaw", &T_coin_hFADC_TREF_ROC1_adcPedRaw, &b_T_coin_hFADC_TREF_ROC1_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseAmp", &T_coin_hFADC_TREF_ROC1_adcPulseAmp, &b_T_coin_hFADC_TREF_ROC1_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseAmpRaw", &T_coin_hFADC_TREF_ROC1_adcPulseAmpRaw, &b_T_coin_hFADC_TREF_ROC1_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseInt", &T_coin_hFADC_TREF_ROC1_adcPulseInt, &b_T_coin_hFADC_TREF_ROC1_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseIntRaw", &T_coin_hFADC_TREF_ROC1_adcPulseIntRaw, &b_T_coin_hFADC_TREF_ROC1_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseTime", &T_coin_hFADC_TREF_ROC1_adcPulseTime, &b_T_coin_hFADC_TREF_ROC1_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseTimeRaw", &T_coin_hFADC_TREF_ROC1_adcPulseTimeRaw, &b_T_coin_hFADC_TREF_ROC1_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hHODO_RF_tdcMultiplicity", &T_coin_hHODO_RF_tdcMultiplicity, &b_T_coin_hHODO_RF_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hHODO_RF_tdcTime", &T_coin_hHODO_RF_tdcTime, &b_T_coin_hHODO_RF_tdcTime);
   fChain->SetBranchAddress("T.coin.hHODO_RF_tdcTimeRaw", &T_coin_hHODO_RF_tdcTimeRaw, &b_T_coin_hHODO_RF_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE100_ROC1_tdcMultiplicity", &T_coin_hPRE100_ROC1_tdcMultiplicity, &b_T_coin_hPRE100_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE100_ROC1_tdcTime", &T_coin_hPRE100_ROC1_tdcTime, &b_T_coin_hPRE100_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE100_ROC1_tdcTimeRaw", &T_coin_hPRE100_ROC1_tdcTimeRaw, &b_T_coin_hPRE100_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE100_ROC2_tdcMultiplicity", &T_coin_hPRE100_ROC2_tdcMultiplicity, &b_T_coin_hPRE100_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE100_ROC2_tdcTime", &T_coin_hPRE100_ROC2_tdcTime, &b_T_coin_hPRE100_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE100_ROC2_tdcTimeRaw", &T_coin_hPRE100_ROC2_tdcTimeRaw, &b_T_coin_hPRE100_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE150_ROC1_tdcMultiplicity", &T_coin_hPRE150_ROC1_tdcMultiplicity, &b_T_coin_hPRE150_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE150_ROC1_tdcTime", &T_coin_hPRE150_ROC1_tdcTime, &b_T_coin_hPRE150_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE150_ROC1_tdcTimeRaw", &T_coin_hPRE150_ROC1_tdcTimeRaw, &b_T_coin_hPRE150_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE150_ROC2_tdcMultiplicity", &T_coin_hPRE150_ROC2_tdcMultiplicity, &b_T_coin_hPRE150_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE150_ROC2_tdcTime", &T_coin_hPRE150_ROC2_tdcTime, &b_T_coin_hPRE150_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE150_ROC2_tdcTimeRaw", &T_coin_hPRE150_ROC2_tdcTimeRaw, &b_T_coin_hPRE150_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE200_ROC1_tdcMultiplicity", &T_coin_hPRE200_ROC1_tdcMultiplicity, &b_T_coin_hPRE200_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE200_ROC1_tdcTime", &T_coin_hPRE200_ROC1_tdcTime, &b_T_coin_hPRE200_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE200_ROC1_tdcTimeRaw", &T_coin_hPRE200_ROC1_tdcTimeRaw, &b_T_coin_hPRE200_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE200_ROC2_tdcMultiplicity", &T_coin_hPRE200_ROC2_tdcMultiplicity, &b_T_coin_hPRE200_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE200_ROC2_tdcTime", &T_coin_hPRE200_ROC2_tdcTime, &b_T_coin_hPRE200_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE200_ROC2_tdcTimeRaw", &T_coin_hPRE200_ROC2_tdcTimeRaw, &b_T_coin_hPRE200_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE40_ROC1_tdcMultiplicity", &T_coin_hPRE40_ROC1_tdcMultiplicity, &b_T_coin_hPRE40_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE40_ROC1_tdcTime", &T_coin_hPRE40_ROC1_tdcTime, &b_T_coin_hPRE40_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE40_ROC1_tdcTimeRaw", &T_coin_hPRE40_ROC1_tdcTimeRaw, &b_T_coin_hPRE40_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRE40_ROC2_tdcMultiplicity", &T_coin_hPRE40_ROC2_tdcMultiplicity, &b_T_coin_hPRE40_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRE40_ROC2_tdcTime", &T_coin_hPRE40_ROC2_tdcTime, &b_T_coin_hPRE40_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRE40_ROC2_tdcTimeRaw", &T_coin_hPRE40_ROC2_tdcTimeRaw, &b_T_coin_hPRE40_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRHI_tdcMultiplicity", &T_coin_hPRHI_tdcMultiplicity, &b_T_coin_hPRHI_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRHI_tdcTime", &T_coin_hPRHI_tdcTime, &b_T_coin_hPRHI_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRHI_tdcTimeRaw", &T_coin_hPRHI_tdcTimeRaw, &b_T_coin_hPRHI_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPRLO_tdcMultiplicity", &T_coin_hPRLO_tdcMultiplicity, &b_T_coin_hPRLO_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPRLO_tdcTime", &T_coin_hPRLO_tdcTime, &b_T_coin_hPRLO_tdcTime);
   fChain->SetBranchAddress("T.coin.hPRLO_tdcTimeRaw", &T_coin_hPRLO_tdcTimeRaw, &b_T_coin_hPRLO_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcMultiplicity", &T_coin_hPSHWR_adcMultiplicity, &b_T_coin_hPSHWR_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPed", &T_coin_hPSHWR_adcPed, &b_T_coin_hPSHWR_adcPed);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPedRaw", &T_coin_hPSHWR_adcPedRaw, &b_T_coin_hPSHWR_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPulseAmp", &T_coin_hPSHWR_adcPulseAmp, &b_T_coin_hPSHWR_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPulseAmpRaw", &T_coin_hPSHWR_adcPulseAmpRaw, &b_T_coin_hPSHWR_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPulseInt", &T_coin_hPSHWR_adcPulseInt, &b_T_coin_hPSHWR_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPulseIntRaw", &T_coin_hPSHWR_adcPulseIntRaw, &b_T_coin_hPSHWR_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPulseTime", &T_coin_hPSHWR_adcPulseTime, &b_T_coin_hPSHWR_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hPSHWR_adcPulseTimeRaw", &T_coin_hPSHWR_adcPulseTimeRaw, &b_T_coin_hPSHWR_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hRF_tdcMultiplicity", &T_coin_hRF_tdcMultiplicity, &b_T_coin_hRF_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hRF_tdcTime", &T_coin_hRF_tdcTime, &b_T_coin_hRF_tdcTime);
   fChain->SetBranchAddress("T.coin.hRF_tdcTimeRaw", &T_coin_hRF_tdcTimeRaw, &b_T_coin_hRF_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hSHWR_adcMultiplicity", &T_coin_hSHWR_adcMultiplicity, &b_T_coin_hSHWR_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPed", &T_coin_hSHWR_adcPed, &b_T_coin_hSHWR_adcPed);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPedRaw", &T_coin_hSHWR_adcPedRaw, &b_T_coin_hSHWR_adcPedRaw);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPulseAmp", &T_coin_hSHWR_adcPulseAmp, &b_T_coin_hSHWR_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPulseAmpRaw", &T_coin_hSHWR_adcPulseAmpRaw, &b_T_coin_hSHWR_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPulseInt", &T_coin_hSHWR_adcPulseInt, &b_T_coin_hSHWR_adcPulseInt);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPulseIntRaw", &T_coin_hSHWR_adcPulseIntRaw, &b_T_coin_hSHWR_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPulseTime", &T_coin_hSHWR_adcPulseTime, &b_T_coin_hSHWR_adcPulseTime);
   fChain->SetBranchAddress("T.coin.hSHWR_adcPulseTimeRaw", &T_coin_hSHWR_adcPulseTimeRaw, &b_T_coin_hSHWR_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.hSHWR_tdcMultiplicity", &T_coin_hSHWR_tdcMultiplicity, &b_T_coin_hSHWR_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hSHWR_tdcTime", &T_coin_hSHWR_tdcTime, &b_T_coin_hSHWR_tdcTime);
   fChain->SetBranchAddress("T.coin.hSHWR_tdcTimeRaw", &T_coin_hSHWR_tdcTimeRaw, &b_T_coin_hSHWR_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hSTOF_ROC1_tdcMultiplicity", &T_coin_hSTOF_ROC1_tdcMultiplicity, &b_T_coin_hSTOF_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hSTOF_ROC1_tdcTime", &T_coin_hSTOF_ROC1_tdcTime, &b_T_coin_hSTOF_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hSTOF_ROC1_tdcTimeRaw", &T_coin_hSTOF_ROC1_tdcTimeRaw, &b_T_coin_hSTOF_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hSTOF_ROC2_tdcMultiplicity", &T_coin_hSTOF_ROC2_tdcMultiplicity, &b_T_coin_hSTOF_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hSTOF_ROC2_tdcTime", &T_coin_hSTOF_ROC2_tdcTime, &b_T_coin_hSTOF_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hSTOF_ROC2_tdcTimeRaw", &T_coin_hSTOF_ROC2_tdcTimeRaw, &b_T_coin_hSTOF_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hT1_tdcMultiplicity", &T_coin_hT1_tdcMultiplicity, &b_T_coin_hT1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hT1_tdcTime", &T_coin_hT1_tdcTime, &b_T_coin_hT1_tdcTime);
   fChain->SetBranchAddress("T.coin.hT1_tdcTimeRaw", &T_coin_hT1_tdcTimeRaw, &b_T_coin_hT1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hT2_tdcMultiplicity", &T_coin_hT2_tdcMultiplicity, &b_T_coin_hT2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hT2_tdcTime", &T_coin_hT2_tdcTime, &b_T_coin_hT2_tdcTime);
   fChain->SetBranchAddress("T.coin.hT2_tdcTimeRaw", &T_coin_hT2_tdcTimeRaw, &b_T_coin_hT2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG1_ROC1_tdcMultiplicity", &T_coin_hTRIG1_ROC1_tdcMultiplicity, &b_T_coin_hTRIG1_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG1_ROC1_tdcTime", &T_coin_hTRIG1_ROC1_tdcTime, &b_T_coin_hTRIG1_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG1_ROC1_tdcTimeRaw", &T_coin_hTRIG1_ROC1_tdcTimeRaw, &b_T_coin_hTRIG1_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG1_ROC2_tdcMultiplicity", &T_coin_hTRIG1_ROC2_tdcMultiplicity, &b_T_coin_hTRIG1_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG1_ROC2_tdcTime", &T_coin_hTRIG1_ROC2_tdcTime, &b_T_coin_hTRIG1_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG1_ROC2_tdcTimeRaw", &T_coin_hTRIG1_ROC2_tdcTimeRaw, &b_T_coin_hTRIG1_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG2_ROC1_tdcMultiplicity", &T_coin_hTRIG2_ROC1_tdcMultiplicity, &b_T_coin_hTRIG2_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG2_ROC1_tdcTime", &T_coin_hTRIG2_ROC1_tdcTime, &b_T_coin_hTRIG2_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG2_ROC1_tdcTimeRaw", &T_coin_hTRIG2_ROC1_tdcTimeRaw, &b_T_coin_hTRIG2_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG2_ROC2_tdcMultiplicity", &T_coin_hTRIG2_ROC2_tdcMultiplicity, &b_T_coin_hTRIG2_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG2_ROC2_tdcTime", &T_coin_hTRIG2_ROC2_tdcTime, &b_T_coin_hTRIG2_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG2_ROC2_tdcTimeRaw", &T_coin_hTRIG2_ROC2_tdcTimeRaw, &b_T_coin_hTRIG2_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG3_ROC1_tdcMultiplicity", &T_coin_hTRIG3_ROC1_tdcMultiplicity, &b_T_coin_hTRIG3_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG3_ROC1_tdcTime", &T_coin_hTRIG3_ROC1_tdcTime, &b_T_coin_hTRIG3_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG3_ROC1_tdcTimeRaw", &T_coin_hTRIG3_ROC1_tdcTimeRaw, &b_T_coin_hTRIG3_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG3_ROC2_tdcMultiplicity", &T_coin_hTRIG3_ROC2_tdcMultiplicity, &b_T_coin_hTRIG3_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG3_ROC2_tdcTime", &T_coin_hTRIG3_ROC2_tdcTime, &b_T_coin_hTRIG3_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG3_ROC2_tdcTimeRaw", &T_coin_hTRIG3_ROC2_tdcTimeRaw, &b_T_coin_hTRIG3_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG4_ROC1_tdcMultiplicity", &T_coin_hTRIG4_ROC1_tdcMultiplicity, &b_T_coin_hTRIG4_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG4_ROC1_tdcTime", &T_coin_hTRIG4_ROC1_tdcTime, &b_T_coin_hTRIG4_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG4_ROC1_tdcTimeRaw", &T_coin_hTRIG4_ROC1_tdcTimeRaw, &b_T_coin_hTRIG4_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG4_ROC2_tdcMultiplicity", &T_coin_hTRIG4_ROC2_tdcMultiplicity, &b_T_coin_hTRIG4_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG4_ROC2_tdcTime", &T_coin_hTRIG4_ROC2_tdcTime, &b_T_coin_hTRIG4_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG4_ROC2_tdcTimeRaw", &T_coin_hTRIG4_ROC2_tdcTimeRaw, &b_T_coin_hTRIG4_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG5_ROC1_tdcMultiplicity", &T_coin_hTRIG5_ROC1_tdcMultiplicity, &b_T_coin_hTRIG5_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG5_ROC1_tdcTime", &T_coin_hTRIG5_ROC1_tdcTime, &b_T_coin_hTRIG5_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG5_ROC1_tdcTimeRaw", &T_coin_hTRIG5_ROC1_tdcTimeRaw, &b_T_coin_hTRIG5_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG5_ROC2_tdcMultiplicity", &T_coin_hTRIG5_ROC2_tdcMultiplicity, &b_T_coin_hTRIG5_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG5_ROC2_tdcTime", &T_coin_hTRIG5_ROC2_tdcTime, &b_T_coin_hTRIG5_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG5_ROC2_tdcTimeRaw", &T_coin_hTRIG5_ROC2_tdcTimeRaw, &b_T_coin_hTRIG5_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG6_ROC1_tdcMultiplicity", &T_coin_hTRIG6_ROC1_tdcMultiplicity, &b_T_coin_hTRIG6_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG6_ROC1_tdcTime", &T_coin_hTRIG6_ROC1_tdcTime, &b_T_coin_hTRIG6_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG6_ROC1_tdcTimeRaw", &T_coin_hTRIG6_ROC1_tdcTimeRaw, &b_T_coin_hTRIG6_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.hTRIG6_ROC2_tdcMultiplicity", &T_coin_hTRIG6_ROC2_tdcMultiplicity, &b_T_coin_hTRIG6_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.hTRIG6_ROC2_tdcTime", &T_coin_hTRIG6_ROC2_tdcTime, &b_T_coin_hTRIG6_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.hTRIG6_ROC2_tdcTimeRaw", &T_coin_hTRIG6_ROC2_tdcTimeRaw, &b_T_coin_hTRIG6_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.p1T_tdcMultiplicity", &T_coin_p1T_tdcMultiplicity, &b_T_coin_p1T_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.p1T_tdcTime", &T_coin_p1T_tdcTime, &b_T_coin_p1T_tdcTime);
   fChain->SetBranchAddress("T.coin.p1T_tdcTimeRaw", &T_coin_p1T_tdcTimeRaw, &b_T_coin_p1T_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.p1X_tdcMultiplicity", &T_coin_p1X_tdcMultiplicity, &b_T_coin_p1X_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.p1X_tdcTime", &T_coin_p1X_tdcTime, &b_T_coin_p1X_tdcTime);
   fChain->SetBranchAddress("T.coin.p1X_tdcTimeRaw", &T_coin_p1X_tdcTimeRaw, &b_T_coin_p1X_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.p1Y_tdcMultiplicity", &T_coin_p1Y_tdcMultiplicity, &b_T_coin_p1Y_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.p1Y_tdcTime", &T_coin_p1Y_tdcTime, &b_T_coin_p1Y_tdcTime);
   fChain->SetBranchAddress("T.coin.p1Y_tdcTimeRaw", &T_coin_p1Y_tdcTimeRaw, &b_T_coin_p1Y_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.p2T_tdcMultiplicity", &T_coin_p2T_tdcMultiplicity, &b_T_coin_p2T_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.p2T_tdcTime", &T_coin_p2T_tdcTime, &b_T_coin_p2T_tdcTime);
   fChain->SetBranchAddress("T.coin.p2T_tdcTimeRaw", &T_coin_p2T_tdcTimeRaw, &b_T_coin_p2T_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.p2X_tdcMultiplicity", &T_coin_p2X_tdcMultiplicity, &b_T_coin_p2X_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.p2X_tdcTime", &T_coin_p2X_tdcTime, &b_T_coin_p2X_tdcTime);
   fChain->SetBranchAddress("T.coin.p2X_tdcTimeRaw", &T_coin_p2X_tdcTimeRaw, &b_T_coin_p2X_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.p2Y_tdcMultiplicity", &T_coin_p2Y_tdcMultiplicity, &b_T_coin_p2Y_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.p2Y_tdcTime", &T_coin_p2Y_tdcTime, &b_T_coin_p2Y_tdcTime);
   fChain->SetBranchAddress("T.coin.p2Y_tdcTimeRaw", &T_coin_p2Y_tdcTimeRaw, &b_T_coin_p2Y_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pAER_adcMultiplicity", &T_coin_pAER_adcMultiplicity, &b_T_coin_pAER_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pAER_adcPed", &T_coin_pAER_adcPed, &b_T_coin_pAER_adcPed);
   fChain->SetBranchAddress("T.coin.pAER_adcPedRaw", &T_coin_pAER_adcPedRaw, &b_T_coin_pAER_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pAER_adcPulseAmp", &T_coin_pAER_adcPulseAmp, &b_T_coin_pAER_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pAER_adcPulseAmpRaw", &T_coin_pAER_adcPulseAmpRaw, &b_T_coin_pAER_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pAER_adcPulseInt", &T_coin_pAER_adcPulseInt, &b_T_coin_pAER_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pAER_adcPulseIntRaw", &T_coin_pAER_adcPulseIntRaw, &b_T_coin_pAER_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pAER_adcPulseTime", &T_coin_pAER_adcPulseTime, &b_T_coin_pAER_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pAER_adcPulseTimeRaw", &T_coin_pAER_adcPulseTimeRaw, &b_T_coin_pAER_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pAER_tdcMultiplicity", &T_coin_pAER_tdcMultiplicity, &b_T_coin_pAER_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pAER_tdcTime", &T_coin_pAER_tdcTime, &b_T_coin_pAER_tdcTime);
   fChain->SetBranchAddress("T.coin.pAER_tdcTimeRaw", &T_coin_pAER_tdcTimeRaw, &b_T_coin_pAER_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF10_tdcMultiplicity", &T_coin_pDCREF10_tdcMultiplicity, &b_T_coin_pDCREF10_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF10_tdcTime", &T_coin_pDCREF10_tdcTime, &b_T_coin_pDCREF10_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF10_tdcTimeRaw", &T_coin_pDCREF10_tdcTimeRaw, &b_T_coin_pDCREF10_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF1_tdcMultiplicity", &T_coin_pDCREF1_tdcMultiplicity, &b_T_coin_pDCREF1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF1_tdcTime", &T_coin_pDCREF1_tdcTime, &b_T_coin_pDCREF1_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF1_tdcTimeRaw", &T_coin_pDCREF1_tdcTimeRaw, &b_T_coin_pDCREF1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF2_tdcMultiplicity", &T_coin_pDCREF2_tdcMultiplicity, &b_T_coin_pDCREF2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF2_tdcTime", &T_coin_pDCREF2_tdcTime, &b_T_coin_pDCREF2_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF2_tdcTimeRaw", &T_coin_pDCREF2_tdcTimeRaw, &b_T_coin_pDCREF2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF3_tdcMultiplicity", &T_coin_pDCREF3_tdcMultiplicity, &b_T_coin_pDCREF3_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF3_tdcTime", &T_coin_pDCREF3_tdcTime, &b_T_coin_pDCREF3_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF3_tdcTimeRaw", &T_coin_pDCREF3_tdcTimeRaw, &b_T_coin_pDCREF3_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF4_tdcMultiplicity", &T_coin_pDCREF4_tdcMultiplicity, &b_T_coin_pDCREF4_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF4_tdcTime", &T_coin_pDCREF4_tdcTime, &b_T_coin_pDCREF4_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF4_tdcTimeRaw", &T_coin_pDCREF4_tdcTimeRaw, &b_T_coin_pDCREF4_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF5_tdcMultiplicity", &T_coin_pDCREF5_tdcMultiplicity, &b_T_coin_pDCREF5_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF5_tdcTime", &T_coin_pDCREF5_tdcTime, &b_T_coin_pDCREF5_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF5_tdcTimeRaw", &T_coin_pDCREF5_tdcTimeRaw, &b_T_coin_pDCREF5_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF6_tdcMultiplicity", &T_coin_pDCREF6_tdcMultiplicity, &b_T_coin_pDCREF6_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF6_tdcTime", &T_coin_pDCREF6_tdcTime, &b_T_coin_pDCREF6_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF6_tdcTimeRaw", &T_coin_pDCREF6_tdcTimeRaw, &b_T_coin_pDCREF6_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF7_tdcMultiplicity", &T_coin_pDCREF7_tdcMultiplicity, &b_T_coin_pDCREF7_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF7_tdcTime", &T_coin_pDCREF7_tdcTime, &b_T_coin_pDCREF7_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF7_tdcTimeRaw", &T_coin_pDCREF7_tdcTimeRaw, &b_T_coin_pDCREF7_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF8_tdcMultiplicity", &T_coin_pDCREF8_tdcMultiplicity, &b_T_coin_pDCREF8_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF8_tdcTime", &T_coin_pDCREF8_tdcTime, &b_T_coin_pDCREF8_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF8_tdcTimeRaw", &T_coin_pDCREF8_tdcTimeRaw, &b_T_coin_pDCREF8_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pDCREF9_tdcMultiplicity", &T_coin_pDCREF9_tdcMultiplicity, &b_T_coin_pDCREF9_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pDCREF9_tdcTime", &T_coin_pDCREF9_tdcTime, &b_T_coin_pDCREF9_tdcTime);
   fChain->SetBranchAddress("T.coin.pDCREF9_tdcTimeRaw", &T_coin_pDCREF9_tdcTimeRaw, &b_T_coin_pDCREF9_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEDTM_tdcMultiplicity", &T_coin_pEDTM_tdcMultiplicity, &b_T_coin_pEDTM_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEDTM_tdcTime", &T_coin_pEDTM_tdcTime, &b_T_coin_pEDTM_tdcTime);
   fChain->SetBranchAddress("T.coin.pEDTM_tdcTimeRaw", &T_coin_pEDTM_tdcTimeRaw, &b_T_coin_pEDTM_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC1_tdcMultiplicity", &T_coin_pEL_CLEAN_ROC1_tdcMultiplicity, &b_T_coin_pEL_CLEAN_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC1_tdcTime", &T_coin_pEL_CLEAN_ROC1_tdcTime, &b_T_coin_pEL_CLEAN_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC1_tdcTimeRaw", &T_coin_pEL_CLEAN_ROC1_tdcTimeRaw, &b_T_coin_pEL_CLEAN_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC2_tdcMultiplicity", &T_coin_pEL_CLEAN_ROC2_tdcMultiplicity, &b_T_coin_pEL_CLEAN_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC2_tdcTime", &T_coin_pEL_CLEAN_ROC2_tdcTime, &b_T_coin_pEL_CLEAN_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC2_tdcTimeRaw", &T_coin_pEL_CLEAN_ROC2_tdcTimeRaw, &b_T_coin_pEL_CLEAN_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_HI_ROC1_tdcMultiplicity", &T_coin_pEL_HI_ROC1_tdcMultiplicity, &b_T_coin_pEL_HI_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_HI_ROC1_tdcTime", &T_coin_pEL_HI_ROC1_tdcTime, &b_T_coin_pEL_HI_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_HI_ROC1_tdcTimeRaw", &T_coin_pEL_HI_ROC1_tdcTimeRaw, &b_T_coin_pEL_HI_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_HI_ROC2_tdcMultiplicity", &T_coin_pEL_HI_ROC2_tdcMultiplicity, &b_T_coin_pEL_HI_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_HI_ROC2_tdcTime", &T_coin_pEL_HI_ROC2_tdcTime, &b_T_coin_pEL_HI_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_HI_ROC2_tdcTimeRaw", &T_coin_pEL_HI_ROC2_tdcTimeRaw, &b_T_coin_pEL_HI_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC1_tdcMultiplicity", &T_coin_pEL_LO_LO_ROC1_tdcMultiplicity, &b_T_coin_pEL_LO_LO_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC1_tdcTime", &T_coin_pEL_LO_LO_ROC1_tdcTime, &b_T_coin_pEL_LO_LO_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC1_tdcTimeRaw", &T_coin_pEL_LO_LO_ROC1_tdcTimeRaw, &b_T_coin_pEL_LO_LO_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC2_tdcMultiplicity", &T_coin_pEL_LO_LO_ROC2_tdcMultiplicity, &b_T_coin_pEL_LO_LO_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC2_tdcTime", &T_coin_pEL_LO_LO_ROC2_tdcTime, &b_T_coin_pEL_LO_LO_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC2_tdcTimeRaw", &T_coin_pEL_LO_LO_ROC2_tdcTimeRaw, &b_T_coin_pEL_LO_LO_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_LO_ROC1_tdcMultiplicity", &T_coin_pEL_LO_ROC1_tdcMultiplicity, &b_T_coin_pEL_LO_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_LO_ROC1_tdcTime", &T_coin_pEL_LO_ROC1_tdcTime, &b_T_coin_pEL_LO_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_LO_ROC1_tdcTimeRaw", &T_coin_pEL_LO_ROC1_tdcTimeRaw, &b_T_coin_pEL_LO_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_LO_ROC2_tdcMultiplicity", &T_coin_pEL_LO_ROC2_tdcMultiplicity, &b_T_coin_pEL_LO_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_LO_ROC2_tdcTime", &T_coin_pEL_LO_ROC2_tdcTime, &b_T_coin_pEL_LO_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_LO_ROC2_tdcTimeRaw", &T_coin_pEL_LO_ROC2_tdcTimeRaw, &b_T_coin_pEL_LO_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_REAL_ROC1_tdcMultiplicity", &T_coin_pEL_REAL_ROC1_tdcMultiplicity, &b_T_coin_pEL_REAL_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_REAL_ROC1_tdcTime", &T_coin_pEL_REAL_ROC1_tdcTime, &b_T_coin_pEL_REAL_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_REAL_ROC1_tdcTimeRaw", &T_coin_pEL_REAL_ROC1_tdcTimeRaw, &b_T_coin_pEL_REAL_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pEL_REAL_ROC2_tdcMultiplicity", &T_coin_pEL_REAL_ROC2_tdcMultiplicity, &b_T_coin_pEL_REAL_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pEL_REAL_ROC2_tdcTime", &T_coin_pEL_REAL_ROC2_tdcTime, &b_T_coin_pEL_REAL_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pEL_REAL_ROC2_tdcTimeRaw", &T_coin_pEL_REAL_ROC2_tdcTimeRaw, &b_T_coin_pEL_REAL_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcMultiplicity", &T_coin_pFADC_TREF_ROC2_adcMultiplicity, &b_T_coin_pFADC_TREF_ROC2_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPed", &T_coin_pFADC_TREF_ROC2_adcPed, &b_T_coin_pFADC_TREF_ROC2_adcPed);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPedRaw", &T_coin_pFADC_TREF_ROC2_adcPedRaw, &b_T_coin_pFADC_TREF_ROC2_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseAmp", &T_coin_pFADC_TREF_ROC2_adcPulseAmp, &b_T_coin_pFADC_TREF_ROC2_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseAmpRaw", &T_coin_pFADC_TREF_ROC2_adcPulseAmpRaw, &b_T_coin_pFADC_TREF_ROC2_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseInt", &T_coin_pFADC_TREF_ROC2_adcPulseInt, &b_T_coin_pFADC_TREF_ROC2_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseIntRaw", &T_coin_pFADC_TREF_ROC2_adcPulseIntRaw, &b_T_coin_pFADC_TREF_ROC2_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseTime", &T_coin_pFADC_TREF_ROC2_adcPulseTime, &b_T_coin_pFADC_TREF_ROC2_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseTimeRaw", &T_coin_pFADC_TREF_ROC2_adcPulseTimeRaw, &b_T_coin_pFADC_TREF_ROC2_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcMultiplicity", &T_coin_pHEL_MPS_adcMultiplicity, &b_T_coin_pHEL_MPS_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPed", &T_coin_pHEL_MPS_adcPed, &b_T_coin_pHEL_MPS_adcPed);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPedRaw", &T_coin_pHEL_MPS_adcPedRaw, &b_T_coin_pHEL_MPS_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseAmp", &T_coin_pHEL_MPS_adcPulseAmp, &b_T_coin_pHEL_MPS_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseAmpRaw", &T_coin_pHEL_MPS_adcPulseAmpRaw, &b_T_coin_pHEL_MPS_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseInt", &T_coin_pHEL_MPS_adcPulseInt, &b_T_coin_pHEL_MPS_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseIntRaw", &T_coin_pHEL_MPS_adcPulseIntRaw, &b_T_coin_pHEL_MPS_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseTime", &T_coin_pHEL_MPS_adcPulseTime, &b_T_coin_pHEL_MPS_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseTimeRaw", &T_coin_pHEL_MPS_adcPulseTimeRaw, &b_T_coin_pHEL_MPS_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcMultiplicity", &T_coin_pHEL_NEG_adcMultiplicity, &b_T_coin_pHEL_NEG_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPed", &T_coin_pHEL_NEG_adcPed, &b_T_coin_pHEL_NEG_adcPed);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPedRaw", &T_coin_pHEL_NEG_adcPedRaw, &b_T_coin_pHEL_NEG_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseAmp", &T_coin_pHEL_NEG_adcPulseAmp, &b_T_coin_pHEL_NEG_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseAmpRaw", &T_coin_pHEL_NEG_adcPulseAmpRaw, &b_T_coin_pHEL_NEG_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseInt", &T_coin_pHEL_NEG_adcPulseInt, &b_T_coin_pHEL_NEG_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseIntRaw", &T_coin_pHEL_NEG_adcPulseIntRaw, &b_T_coin_pHEL_NEG_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseTime", &T_coin_pHEL_NEG_adcPulseTime, &b_T_coin_pHEL_NEG_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseTimeRaw", &T_coin_pHEL_NEG_adcPulseTimeRaw, &b_T_coin_pHEL_NEG_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcMultiplicity", &T_coin_pHEL_POS_adcMultiplicity, &b_T_coin_pHEL_POS_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPed", &T_coin_pHEL_POS_adcPed, &b_T_coin_pHEL_POS_adcPed);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPedRaw", &T_coin_pHEL_POS_adcPedRaw, &b_T_coin_pHEL_POS_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseAmp", &T_coin_pHEL_POS_adcPulseAmp, &b_T_coin_pHEL_POS_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseAmpRaw", &T_coin_pHEL_POS_adcPulseAmpRaw, &b_T_coin_pHEL_POS_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseInt", &T_coin_pHEL_POS_adcPulseInt, &b_T_coin_pHEL_POS_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseIntRaw", &T_coin_pHEL_POS_adcPulseIntRaw, &b_T_coin_pHEL_POS_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseTime", &T_coin_pHEL_POS_adcPulseTime, &b_T_coin_pHEL_POS_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseTimeRaw", &T_coin_pHEL_POS_adcPulseTimeRaw, &b_T_coin_pHEL_POS_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcMultiplicity", &T_coin_pHGCER_MOD_adcMultiplicity, &b_T_coin_pHGCER_MOD_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPed", &T_coin_pHGCER_MOD_adcPed, &b_T_coin_pHGCER_MOD_adcPed);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPedRaw", &T_coin_pHGCER_MOD_adcPedRaw, &b_T_coin_pHGCER_MOD_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseAmp", &T_coin_pHGCER_MOD_adcPulseAmp, &b_T_coin_pHGCER_MOD_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseAmpRaw", &T_coin_pHGCER_MOD_adcPulseAmpRaw, &b_T_coin_pHGCER_MOD_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseInt", &T_coin_pHGCER_MOD_adcPulseInt, &b_T_coin_pHGCER_MOD_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseIntRaw", &T_coin_pHGCER_MOD_adcPulseIntRaw, &b_T_coin_pHGCER_MOD_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseTime", &T_coin_pHGCER_MOD_adcPulseTime, &b_T_coin_pHGCER_MOD_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseTimeRaw", &T_coin_pHGCER_MOD_adcPulseTimeRaw, &b_T_coin_pHGCER_MOD_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_adcMultiplicity", &T_coin_pHGCER_adcMultiplicity, &b_T_coin_pHGCER_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPed", &T_coin_pHGCER_adcPed, &b_T_coin_pHGCER_adcPed);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPedRaw", &T_coin_pHGCER_adcPedRaw, &b_T_coin_pHGCER_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPulseAmp", &T_coin_pHGCER_adcPulseAmp, &b_T_coin_pHGCER_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPulseAmpRaw", &T_coin_pHGCER_adcPulseAmpRaw, &b_T_coin_pHGCER_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPulseInt", &T_coin_pHGCER_adcPulseInt, &b_T_coin_pHGCER_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPulseIntRaw", &T_coin_pHGCER_adcPulseIntRaw, &b_T_coin_pHGCER_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPulseTime", &T_coin_pHGCER_adcPulseTime, &b_T_coin_pHGCER_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pHGCER_adcPulseTimeRaw", &T_coin_pHGCER_adcPulseTimeRaw, &b_T_coin_pHGCER_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pHGCER_tdcMultiplicity", &T_coin_pHGCER_tdcMultiplicity, &b_T_coin_pHGCER_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pHGCER_tdcTime", &T_coin_pHGCER_tdcTime, &b_T_coin_pHGCER_tdcTime);
   fChain->SetBranchAddress("T.coin.pHGCER_tdcTimeRaw", &T_coin_pHGCER_tdcTimeRaw, &b_T_coin_pHGCER_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pHODO_RF_tdcMultiplicity", &T_coin_pHODO_RF_tdcMultiplicity, &b_T_coin_pHODO_RF_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pHODO_RF_tdcTime", &T_coin_pHODO_RF_tdcTime, &b_T_coin_pHODO_RF_tdcTime);
   fChain->SetBranchAddress("T.coin.pHODO_RF_tdcTimeRaw", &T_coin_pHODO_RF_tdcTimeRaw, &b_T_coin_pHODO_RF_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcMultiplicity", &T_coin_pNGCER_MOD_adcMultiplicity, &b_T_coin_pNGCER_MOD_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPed", &T_coin_pNGCER_MOD_adcPed, &b_T_coin_pNGCER_MOD_adcPed);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPedRaw", &T_coin_pNGCER_MOD_adcPedRaw, &b_T_coin_pNGCER_MOD_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseAmp", &T_coin_pNGCER_MOD_adcPulseAmp, &b_T_coin_pNGCER_MOD_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseAmpRaw", &T_coin_pNGCER_MOD_adcPulseAmpRaw, &b_T_coin_pNGCER_MOD_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseInt", &T_coin_pNGCER_MOD_adcPulseInt, &b_T_coin_pNGCER_MOD_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseIntRaw", &T_coin_pNGCER_MOD_adcPulseIntRaw, &b_T_coin_pNGCER_MOD_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseTime", &T_coin_pNGCER_MOD_adcPulseTime, &b_T_coin_pNGCER_MOD_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseTimeRaw", &T_coin_pNGCER_MOD_adcPulseTimeRaw, &b_T_coin_pNGCER_MOD_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_adcMultiplicity", &T_coin_pNGCER_adcMultiplicity, &b_T_coin_pNGCER_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPed", &T_coin_pNGCER_adcPed, &b_T_coin_pNGCER_adcPed);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPedRaw", &T_coin_pNGCER_adcPedRaw, &b_T_coin_pNGCER_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPulseAmp", &T_coin_pNGCER_adcPulseAmp, &b_T_coin_pNGCER_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPulseAmpRaw", &T_coin_pNGCER_adcPulseAmpRaw, &b_T_coin_pNGCER_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPulseInt", &T_coin_pNGCER_adcPulseInt, &b_T_coin_pNGCER_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPulseIntRaw", &T_coin_pNGCER_adcPulseIntRaw, &b_T_coin_pNGCER_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPulseTime", &T_coin_pNGCER_adcPulseTime, &b_T_coin_pNGCER_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pNGCER_adcPulseTimeRaw", &T_coin_pNGCER_adcPulseTimeRaw, &b_T_coin_pNGCER_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pNGCER_tdcMultiplicity", &T_coin_pNGCER_tdcMultiplicity, &b_T_coin_pNGCER_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pNGCER_tdcTime", &T_coin_pNGCER_tdcTime, &b_T_coin_pNGCER_tdcTime);
   fChain->SetBranchAddress("T.coin.pNGCER_tdcTimeRaw", &T_coin_pNGCER_tdcTimeRaw, &b_T_coin_pNGCER_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE100_ROC1_tdcMultiplicity", &T_coin_pPRE100_ROC1_tdcMultiplicity, &b_T_coin_pPRE100_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE100_ROC1_tdcTime", &T_coin_pPRE100_ROC1_tdcTime, &b_T_coin_pPRE100_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE100_ROC1_tdcTimeRaw", &T_coin_pPRE100_ROC1_tdcTimeRaw, &b_T_coin_pPRE100_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE100_ROC2_tdcMultiplicity", &T_coin_pPRE100_ROC2_tdcMultiplicity, &b_T_coin_pPRE100_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE100_ROC2_tdcTime", &T_coin_pPRE100_ROC2_tdcTime, &b_T_coin_pPRE100_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE100_ROC2_tdcTimeRaw", &T_coin_pPRE100_ROC2_tdcTimeRaw, &b_T_coin_pPRE100_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE150_ROC1_tdcMultiplicity", &T_coin_pPRE150_ROC1_tdcMultiplicity, &b_T_coin_pPRE150_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE150_ROC1_tdcTime", &T_coin_pPRE150_ROC1_tdcTime, &b_T_coin_pPRE150_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE150_ROC1_tdcTimeRaw", &T_coin_pPRE150_ROC1_tdcTimeRaw, &b_T_coin_pPRE150_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE150_ROC2_tdcMultiplicity", &T_coin_pPRE150_ROC2_tdcMultiplicity, &b_T_coin_pPRE150_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE150_ROC2_tdcTime", &T_coin_pPRE150_ROC2_tdcTime, &b_T_coin_pPRE150_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE150_ROC2_tdcTimeRaw", &T_coin_pPRE150_ROC2_tdcTimeRaw, &b_T_coin_pPRE150_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE200_ROC1_tdcMultiplicity", &T_coin_pPRE200_ROC1_tdcMultiplicity, &b_T_coin_pPRE200_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE200_ROC1_tdcTime", &T_coin_pPRE200_ROC1_tdcTime, &b_T_coin_pPRE200_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE200_ROC1_tdcTimeRaw", &T_coin_pPRE200_ROC1_tdcTimeRaw, &b_T_coin_pPRE200_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE200_ROC2_tdcMultiplicity", &T_coin_pPRE200_ROC2_tdcMultiplicity, &b_T_coin_pPRE200_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE200_ROC2_tdcTime", &T_coin_pPRE200_ROC2_tdcTime, &b_T_coin_pPRE200_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE200_ROC2_tdcTimeRaw", &T_coin_pPRE200_ROC2_tdcTimeRaw, &b_T_coin_pPRE200_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE40_ROC1_tdcMultiplicity", &T_coin_pPRE40_ROC1_tdcMultiplicity, &b_T_coin_pPRE40_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE40_ROC1_tdcTime", &T_coin_pPRE40_ROC1_tdcTime, &b_T_coin_pPRE40_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE40_ROC1_tdcTimeRaw", &T_coin_pPRE40_ROC1_tdcTimeRaw, &b_T_coin_pPRE40_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRE40_ROC2_tdcMultiplicity", &T_coin_pPRE40_ROC2_tdcMultiplicity, &b_T_coin_pPRE40_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRE40_ROC2_tdcTime", &T_coin_pPRE40_ROC2_tdcTime, &b_T_coin_pPRE40_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRE40_ROC2_tdcTimeRaw", &T_coin_pPRE40_ROC2_tdcTimeRaw, &b_T_coin_pPRE40_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRHI_tdcMultiplicity", &T_coin_pPRHI_tdcMultiplicity, &b_T_coin_pPRHI_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRHI_tdcTime", &T_coin_pPRHI_tdcTime, &b_T_coin_pPRHI_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRHI_tdcTimeRaw", &T_coin_pPRHI_tdcTimeRaw, &b_T_coin_pPRHI_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPRLO_tdcMultiplicity", &T_coin_pPRLO_tdcMultiplicity, &b_T_coin_pPRLO_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPRLO_tdcTime", &T_coin_pPRLO_tdcTime, &b_T_coin_pPRLO_tdcTime);
   fChain->SetBranchAddress("T.coin.pPRLO_tdcTimeRaw", &T_coin_pPRLO_tdcTimeRaw, &b_T_coin_pPRLO_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcMultiplicity", &T_coin_pPSHWR_adcMultiplicity, &b_T_coin_pPSHWR_adcMultiplicity);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPed", &T_coin_pPSHWR_adcPed, &b_T_coin_pPSHWR_adcPed);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPedRaw", &T_coin_pPSHWR_adcPedRaw, &b_T_coin_pPSHWR_adcPedRaw);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPulseAmp", &T_coin_pPSHWR_adcPulseAmp, &b_T_coin_pPSHWR_adcPulseAmp);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPulseAmpRaw", &T_coin_pPSHWR_adcPulseAmpRaw, &b_T_coin_pPSHWR_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPulseInt", &T_coin_pPSHWR_adcPulseInt, &b_T_coin_pPSHWR_adcPulseInt);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPulseIntRaw", &T_coin_pPSHWR_adcPulseIntRaw, &b_T_coin_pPSHWR_adcPulseIntRaw);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPulseTime", &T_coin_pPSHWR_adcPulseTime, &b_T_coin_pPSHWR_adcPulseTime);
   fChain->SetBranchAddress("T.coin.pPSHWR_adcPulseTimeRaw", &T_coin_pPSHWR_adcPulseTimeRaw, &b_T_coin_pPSHWR_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.coin.pRF_tdcMultiplicity", &T_coin_pRF_tdcMultiplicity, &b_T_coin_pRF_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pRF_tdcTime", &T_coin_pRF_tdcTime, &b_T_coin_pRF_tdcTime);
   fChain->SetBranchAddress("T.coin.pRF_tdcTimeRaw", &T_coin_pRF_tdcTimeRaw, &b_T_coin_pRF_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pSTOF_ROC1_tdcMultiplicity", &T_coin_pSTOF_ROC1_tdcMultiplicity, &b_T_coin_pSTOF_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pSTOF_ROC1_tdcTime", &T_coin_pSTOF_ROC1_tdcTime, &b_T_coin_pSTOF_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pSTOF_ROC1_tdcTimeRaw", &T_coin_pSTOF_ROC1_tdcTimeRaw, &b_T_coin_pSTOF_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pSTOF_ROC2_tdcMultiplicity", &T_coin_pSTOF_ROC2_tdcMultiplicity, &b_T_coin_pSTOF_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pSTOF_ROC2_tdcTime", &T_coin_pSTOF_ROC2_tdcTime, &b_T_coin_pSTOF_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pSTOF_ROC2_tdcTimeRaw", &T_coin_pSTOF_ROC2_tdcTimeRaw, &b_T_coin_pSTOF_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pT1_tdcMultiplicity", &T_coin_pT1_tdcMultiplicity, &b_T_coin_pT1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pT1_tdcTime", &T_coin_pT1_tdcTime, &b_T_coin_pT1_tdcTime);
   fChain->SetBranchAddress("T.coin.pT1_tdcTimeRaw", &T_coin_pT1_tdcTimeRaw, &b_T_coin_pT1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pT2_tdcMultiplicity", &T_coin_pT2_tdcMultiplicity, &b_T_coin_pT2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pT2_tdcTime", &T_coin_pT2_tdcTime, &b_T_coin_pT2_tdcTime);
   fChain->SetBranchAddress("T.coin.pT2_tdcTimeRaw", &T_coin_pT2_tdcTimeRaw, &b_T_coin_pT2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pT3_tdcMultiplicity", &T_coin_pT3_tdcMultiplicity, &b_T_coin_pT3_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pT3_tdcTime", &T_coin_pT3_tdcTime, &b_T_coin_pT3_tdcTime);
   fChain->SetBranchAddress("T.coin.pT3_tdcTimeRaw", &T_coin_pT3_tdcTimeRaw, &b_T_coin_pT3_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG1_ROC1_tdcMultiplicity", &T_coin_pTRIG1_ROC1_tdcMultiplicity, &b_T_coin_pTRIG1_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG1_ROC1_tdcTime", &T_coin_pTRIG1_ROC1_tdcTime, &b_T_coin_pTRIG1_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG1_ROC1_tdcTimeRaw", &T_coin_pTRIG1_ROC1_tdcTimeRaw, &b_T_coin_pTRIG1_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG1_ROC2_tdcMultiplicity", &T_coin_pTRIG1_ROC2_tdcMultiplicity, &b_T_coin_pTRIG1_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG1_ROC2_tdcTime", &T_coin_pTRIG1_ROC2_tdcTime, &b_T_coin_pTRIG1_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG1_ROC2_tdcTimeRaw", &T_coin_pTRIG1_ROC2_tdcTimeRaw, &b_T_coin_pTRIG1_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG2_ROC1_tdcMultiplicity", &T_coin_pTRIG2_ROC1_tdcMultiplicity, &b_T_coin_pTRIG2_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG2_ROC1_tdcTime", &T_coin_pTRIG2_ROC1_tdcTime, &b_T_coin_pTRIG2_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG2_ROC1_tdcTimeRaw", &T_coin_pTRIG2_ROC1_tdcTimeRaw, &b_T_coin_pTRIG2_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG2_ROC2_tdcMultiplicity", &T_coin_pTRIG2_ROC2_tdcMultiplicity, &b_T_coin_pTRIG2_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG2_ROC2_tdcTime", &T_coin_pTRIG2_ROC2_tdcTime, &b_T_coin_pTRIG2_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG2_ROC2_tdcTimeRaw", &T_coin_pTRIG2_ROC2_tdcTimeRaw, &b_T_coin_pTRIG2_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG3_ROC1_tdcMultiplicity", &T_coin_pTRIG3_ROC1_tdcMultiplicity, &b_T_coin_pTRIG3_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG3_ROC1_tdcTime", &T_coin_pTRIG3_ROC1_tdcTime, &b_T_coin_pTRIG3_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG3_ROC1_tdcTimeRaw", &T_coin_pTRIG3_ROC1_tdcTimeRaw, &b_T_coin_pTRIG3_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG3_ROC2_tdcMultiplicity", &T_coin_pTRIG3_ROC2_tdcMultiplicity, &b_T_coin_pTRIG3_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG3_ROC2_tdcTime", &T_coin_pTRIG3_ROC2_tdcTime, &b_T_coin_pTRIG3_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG3_ROC2_tdcTimeRaw", &T_coin_pTRIG3_ROC2_tdcTimeRaw, &b_T_coin_pTRIG3_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG4_ROC1_tdcMultiplicity", &T_coin_pTRIG4_ROC1_tdcMultiplicity, &b_T_coin_pTRIG4_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG4_ROC1_tdcTime", &T_coin_pTRIG4_ROC1_tdcTime, &b_T_coin_pTRIG4_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG4_ROC1_tdcTimeRaw", &T_coin_pTRIG4_ROC1_tdcTimeRaw, &b_T_coin_pTRIG4_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG4_ROC2_tdcMultiplicity", &T_coin_pTRIG4_ROC2_tdcMultiplicity, &b_T_coin_pTRIG4_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG4_ROC2_tdcTime", &T_coin_pTRIG4_ROC2_tdcTime, &b_T_coin_pTRIG4_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG4_ROC2_tdcTimeRaw", &T_coin_pTRIG4_ROC2_tdcTimeRaw, &b_T_coin_pTRIG4_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG5_ROC1_tdcMultiplicity", &T_coin_pTRIG5_ROC1_tdcMultiplicity, &b_T_coin_pTRIG5_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG5_ROC1_tdcTime", &T_coin_pTRIG5_ROC1_tdcTime, &b_T_coin_pTRIG5_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG5_ROC1_tdcTimeRaw", &T_coin_pTRIG5_ROC1_tdcTimeRaw, &b_T_coin_pTRIG5_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG5_ROC2_tdcMultiplicity", &T_coin_pTRIG5_ROC2_tdcMultiplicity, &b_T_coin_pTRIG5_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG5_ROC2_tdcTime", &T_coin_pTRIG5_ROC2_tdcTime, &b_T_coin_pTRIG5_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG5_ROC2_tdcTimeRaw", &T_coin_pTRIG5_ROC2_tdcTimeRaw, &b_T_coin_pTRIG5_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG6_ROC1_tdcMultiplicity", &T_coin_pTRIG6_ROC1_tdcMultiplicity, &b_T_coin_pTRIG6_ROC1_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG6_ROC1_tdcTime", &T_coin_pTRIG6_ROC1_tdcTime, &b_T_coin_pTRIG6_ROC1_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG6_ROC1_tdcTimeRaw", &T_coin_pTRIG6_ROC1_tdcTimeRaw, &b_T_coin_pTRIG6_ROC1_tdcTimeRaw);
   fChain->SetBranchAddress("T.coin.pTRIG6_ROC2_tdcMultiplicity", &T_coin_pTRIG6_ROC2_tdcMultiplicity, &b_T_coin_pTRIG6_ROC2_tdcMultiplicity);
   fChain->SetBranchAddress("T.coin.pTRIG6_ROC2_tdcTime", &T_coin_pTRIG6_ROC2_tdcTime, &b_T_coin_pTRIG6_ROC2_tdcTime);
   fChain->SetBranchAddress("T.coin.pTRIG6_ROC2_tdcTimeRaw", &T_coin_pTRIG6_ROC2_tdcTimeRaw, &b_T_coin_pTRIG6_ROC2_tdcTimeRaw);
   fChain->SetBranchAddress("g.evtyp", &g_evtyp, &b_g_evtyp);
   fChain->SetBranchAddress("IBC3H00CRCUR4", &IBC3H00CRCUR4, &b_IBC3H00CRCUR4);
   fChain->SetBranchAddress("IGL1I00OD16_16", &IGL1I00OD16_16, &b_IGL1I00OD16_16);
   fChain->SetBranchAddress("HELFREQ", &HELFREQ, &b_HELFREQ);
   fChain->SetBranchAddress("HELDELAYs", &HELDELAYs, &b_HELDELAYs);
   fChain->SetBranchAddress("hac_bcm_average", &hac_bcm_average, &b_hac_bcm_average);
   fChain->SetBranchAddress("ibcm1", &ibcm1, &b_ibcm1);
   fChain->SetBranchAddress("ibcm2", &ibcm2, &b_ibcm2);
   fChain->SetBranchAddress("iunser", &iunser, &b_iunser);
   fChain->SetBranchAddress("itov3out", &itov3out, &b_itov3out);
   fChain->SetBranchAddress("itov4out", &itov4out, &b_itov4out);
   fChain->SetBranchAddress("IPM3H07A.XPOS", &IPM3H07A_XPOS, &b_IPM3H07A_XPOS);
   fChain->SetBranchAddress("IPM3H07A.YPOS", &IPM3H07A_YPOS, &b_IPM3H07A_YPOS);
   fChain->SetBranchAddress("IPM3H07B.XPOS", &IPM3H07B_XPOS, &b_IPM3H07B_XPOS);
   fChain->SetBranchAddress("IPM3H07B.YPOS", &IPM3H07B_YPOS, &b_IPM3H07B_YPOS);
   fChain->SetBranchAddress("IPM3H07C.XPOS", &IPM3H07C_XPOS, &b_IPM3H07C_XPOS);
   fChain->SetBranchAddress("IPM3H07C.YPOS", &IPM3H07C_YPOS, &b_IPM3H07C_YPOS);
   fChain->SetBranchAddress("IPM3H07A.XRAW", &IPM3H07A_XRAW, &b_IPM3H07A_XRAW);
   fChain->SetBranchAddress("IPM3H07A.YRAW", &IPM3H07A_YRAW, &b_IPM3H07A_YRAW);
   fChain->SetBranchAddress("IPM3H07B.XRAW", &IPM3H07B_XRAW, &b_IPM3H07B_XRAW);
   fChain->SetBranchAddress("IPM3H07B.YRAW", &IPM3H07B_YRAW, &b_IPM3H07B_YRAW);
   fChain->SetBranchAddress("IPM3H07C.XRAW", &IPM3H07C_XRAW, &b_IPM3H07C_XRAW);
   fChain->SetBranchAddress("IPM3H07C.YRAW", &IPM3H07C_YRAW, &b_IPM3H07C_YRAW);
   fChain->SetBranchAddress("IPM3H07A.XSOF", &IPM3H07A_XSOF, &b_IPM3H07A_XSOF);
   fChain->SetBranchAddress("IPM3H07A.YSOF", &IPM3H07A_YSOF, &b_IPM3H07A_YSOF);
   fChain->SetBranchAddress("IPM3H07B.XSOF", &IPM3H07B_XSOF, &b_IPM3H07B_XSOF);
   fChain->SetBranchAddress("IPM3H07B.YSOF", &IPM3H07B_YSOF, &b_IPM3H07B_YSOF);
   fChain->SetBranchAddress("IPM3H07C.XSOF", &IPM3H07C_XSOF, &b_IPM3H07C_XSOF);
   fChain->SetBranchAddress("IPM3H07C.YSOF", &IPM3H07C_YSOF, &b_IPM3H07C_YSOF);
   fChain->SetBranchAddress("fEvtHdr.fEvtTime", &fEvtHdr_fEvtTime, &b_Event_Branch_fEvtHdr_fEvtTime);
   fChain->SetBranchAddress("fEvtHdr.fEvtNum", &fEvtHdr_fEvtNum, &b_Event_Branch_fEvtHdr_fEvtNum);
   fChain->SetBranchAddress("fEvtHdr.fEvtType", &fEvtHdr_fEvtType, &b_Event_Branch_fEvtHdr_fEvtType);
   fChain->SetBranchAddress("fEvtHdr.fEvtLen", &fEvtHdr_fEvtLen, &b_Event_Branch_fEvtHdr_fEvtLen);
   fChain->SetBranchAddress("fEvtHdr.fHelicity", &fEvtHdr_fHelicity, &b_Event_Branch_fEvtHdr_fHelicity);
   fChain->SetBranchAddress("fEvtHdr.fTargetPol", &fEvtHdr_fTargetPol, &b_Event_Branch_fEvtHdr_fTargetPol);
   fChain->SetBranchAddress("fEvtHdr.fRun", &fEvtHdr_fRun, &b_Event_Branch_fEvtHdr_fRun);
   Notify();
}

Bool_t T::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void T::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t T::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef T_cxx
