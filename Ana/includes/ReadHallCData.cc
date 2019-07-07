#define ReadHallCData_cxx
#include "ReadHallCData.h"
using namespace std;

// move to constants parameter file
const double m_el=510.998910e-6;
const double PI=3.141592, M_Neutron=0.939566, M_Proton=0.9382723;

// move to parameter / cuts files

// timing cuts
float trig_time_cut_low = 20;
float trig_time_cut_up = 90;
float roc_time_cut_low = 20;
float roc_time_cut_up = 65;

// fiducial cuts
float hdp_low = -8.0, hdp_up= +8.0, sdp_low=-10.0, sdp_up=+20.0;
float th_hms_up = 0.08, phi_hms_up = 0.045, th_shms_up = 0.06, phi_shms_up = 0.04;

// PID cuts
float hms_cal_en_cut = 0.4, hms_cer_npe_cut = 2;
float shms_aero_npe_cut = 2, shms_hgcer_npe_cut = 2;


void ReadHallCData::Loop (vector <string> vector_name, int runID, string  process, string what, string target){

	iChain=new TChain("T");
	for (unsigned int i=0;i<vector_name.size();i++){
		iChain->Add(Form("%s",vector_name[i].c_str())); 
	}
	test=Init();
	if (test=0 || iChain == 0){
		cout<<"problem init files, tree not found"<<endl;
		return;
	}
	cout<<"number of entries in Chain: "<<iChain->GetEntries()<<endl;	

	cout<<"Start producing the new Tree"<<endl;

        // add here entries related to the normalization file . init second tree.
        TFile *file = new TFile("/home/cdaq/mboer/hallc_replay_vcs/Ana/files/Data.root","RECREATE");
        TTree *HallCTree = new TTree("HallCTree","HallC tree + internal format");
	HallCTree->Branch("runindex",&runindex, "runindex/I");
        HallCTree->Branch("ALV_el_out_data",&ALV_el_out_data,"ALV_el_out_data[4]/F");
        HallCTree->Branch("ALV_el_in_data",&ALV_el_in_data,"ALV_el_in_data[4]/F");
        HallCTree->Branch("ALV_gamma_out_data",&ALV_gamma_out_data,"ALV_gamma_out_data[4]/F");
        HallCTree->Branch("ALV_proton_out_data",&ALV_proton_out_data,"ALV_proton_out_data[4]/F");
        HallCTree->Branch("ALV_proton_in_data",&ALV_proton_in_data,"ALV_proton_in_data[4]/F");
	HallCTree->Branch("M2miss_data",&M2miss_data,"M2miss_data/F");
	HallCTree->Branch("Mmiss_data",&Mmiss_data,"Mmiss_data/F");
	HallCTree->Branch("Emiss_data",&Emiss_data,"Emiss_data/F");
	HallCTree->Branch("PTmiss_data",&PTmiss_data,"PTmiss_data/F");
	HallCTree->Branch("PT2miss_data",&PT2miss_data,"PT2miss_data/F");
	HallCTree->Branch("Pmiss_ref_data",&Pmiss_ref_data,"Pmiss_ref_data/F");
	HallCTree->Branch("Thmiss_ref_data",&Thmiss_ref_data,"Thmiss_ref_data/F");
	HallCTree->Branch("Q2_kinmod", &Q2_kinmod,"Q2_kinmod/F");
	HallCTree->Branch("W_kinmod", &W_kinmod,"W_kinmod/F");
	HallCTree->Branch("nu_kinmod", &nu_kinmod,"nu_kinmod/F");
	HallCTree->Branch("mt_kinmod", &mt_kinmod,"mt_kinmod/F");
	HallCTree->Branch("epsilon_kinmod", &epsilon_kinmod,"epsilon_kinmod/F");
	HallCTree->Branch("Xbj_kinmod", &Xbj_kinmod,"Xbj_kinmod/F");
	HallCTree->Branch("Q2_data", &Q2_data,"Q2_data/F");
	HallCTree->Branch("W_data", &W_data,"W_data/F");
	HallCTree->Branch("nu_data", &nu_data,"nu_data/F");
	HallCTree->Branch("mt_data", &mt_data,"mt_data/F");
	HallCTree->Branch("epsilon_data", &epsilon_data,"epsilon_data/F");
	HallCTree->Branch("Xbj_data", &Xbj_data,"Xbj_data/F");
	HallCTree->Branch("CosThCM_data", &CosThCM_data,"CosThCM_data/F");
	HallCTree->Branch("ThCM_data", &ThCM_data,"ThCM_data/F");
	HallCTree->Branch("Phi_data", &Phi_data,"Phi_data/F");
	HallCTree->Branch("beta_electron", &beta_electron, "beta_electron/F");
	HallCTree->Branch("beta_proton", &beta_proton, "beta_proton/F");


	//float beamE = 4.55;
	cout<<"Start loop over entries"<<endl;


        for (Int_t i=0; i<iChain -> GetEntries(); i++) {

                if (i%5000==0) cout<<"i= "<<i<<endl;
                entry = iChain->GetEntry(i);
		//if (i==10) return; // temporary
                if (i==0) cerr<<"enter loop"<<endl;
		
		h_CTime_epCoinTime_ROC1[0]->Fill(CTime_epCoinTime_ROC1);
		h_CTime_epCoinTime_ROC2[0]->Fill(CTime_epCoinTime_ROC2);
		h_CTime_epCoinTime_TRIG1[0]->Fill(CTime_epCoinTime_TRIG1);
		h_CTime_epCoinTime_TRIG2[0]->Fill(CTime_epCoinTime_TRIG4);
		
		// acceptance fiducial cuts
		if (H_gtr_dp<hdp_low || H_gtr_dp>hdp_up) continue; // hms fiducial cut
		if (P_gtr_dp<sdp_low || P_gtr_dp>sdp_up) continue; // shms fiducial cut
		if (H_gtr_th>th_hms_up || H_gtr_ph>phi_hms_up || P_gtr_th>th_shms_up || P_gtr_ph>phi_shms_up) continue; // angular fiducial cuts; process dependent adjust
		
		h2_Pebeta[1]->Fill(H_gtr_p, H_gtr_beta);
		h2_elebeta[1]->Fill(P_gtr_p, P_gtr_beta);
		h2_COIN_H_beta[1]->Fill(CTime_epCoinTime_ROC2, H_gtr_beta);
		h2_COIN_P_beta[1]->Fill(CTime_epCoinTime_ROC1, P_gtr_beta);
		
		h_CTime_epCoinTime_ROC1[1]->Fill(CTime_epCoinTime_ROC1);
		h_CTime_epCoinTime_ROC2[1]->Fill(CTime_epCoinTime_ROC2);
		h_CTime_epCoinTime_TRIG1[1]->Fill(CTime_epCoinTime_TRIG1);
		h_CTime_epCoinTime_TRIG2[1]->Fill(CTime_epCoinTime_TRIG4);

		// PID cuts
		if (H_cal_etotnorm<hms_cal_en_cut || H_cer_npeSum<hms_cer_npe_cut) continue; // electron in HMS
		//if (H_cal_etotnorm>hms_cal_en_cut || H_cer_npeSum>hms_cer_npe_cut) continue; // proton in HMS
		if (P_aero_npeSum>shms_aero_npe_cut || P_hgcer_npeSum>shms_hgcer_npe_cut) continue;  // proton in SHMS
		//if (P_aero_npeSum<shms_aero_npe_cut || P_hgcer_npeSum<shms_hgcer_npe_cut) continue;  // electron in SHMS

		h_CTime_epCoinTime_ROC1[2]->Fill(CTime_epCoinTime_ROC1);
		h_CTime_epCoinTime_ROC2[2]->Fill(CTime_epCoinTime_ROC2);
		h_CTime_epCoinTime_TRIG1[2]->Fill(CTime_epCoinTime_TRIG1);
		h_CTime_epCoinTime_TRIG2[2]->Fill(CTime_epCoinTime_TRIG4);

		h2_Pebeta[2]->Fill(H_gtr_p, H_gtr_beta);
		h2_elebeta[2]->Fill(P_gtr_p, P_gtr_beta);
		h2_COIN_H_beta[2]->Fill(CTime_epCoinTime_ROC2, H_gtr_beta);
		h2_COIN_P_beta[2]->Fill(CTime_epCoinTime_ROC1, P_gtr_beta);

		// timing cuts
		
	/*	if (CTime_epCoinTime_ROC1>roc_time_cut_up || CTime_epCoinTime_ROC1<roc_time_cut_low
		    || CTime_epCoinTime_ROC2>roc_time_cut_up || CTime_epCoinTime_ROC2<roc_time_cut_low
		    || CTime_epCoinTime_TRIG1>trig_time_cut_up || CTime_epCoinTime_TRIG1<trig_time_cut_low
		    || CTime_epCoinTime_TRIG4>trig_time_cut_up || CTime_epCoinTime_TRIG4<trig_time_cut_low) {
			continue;
		}
	*/
		// allocations to new tree
		beta_proton = H_gtr_beta; 
		beta_electron = P_gtr_beta;

   		Q2_kinmod = H_kin_primary_Q2;
      		W_kinmod = H_kin_primary_W;
	    	epsilon_kinmod = H_kin_primary_epsilon;
	        nu_kinmod = H_kin_primary_nu;
		Xbj_kinmod = H_kin_primary_x_bj;
		mt_kinmod = -P_kin_secondary_MandelT; 


		LV_el_out_data.SetPxPyPzE(P_gtr_px, P_gtr_py, P_gtr_pz, sqrt(pow(P_gtr_px,2)+pow(P_gtr_py,2)+pow(P_gtr_pz,2)+pow(m_el,2))); 
		LV_proton_out_data.SetPxPyPzE(H_gtr_px, H_gtr_py, H_gtr_pz, sqrt(pow(H_gtr_px,2)+pow(H_gtr_py,2)+pow(H_gtr_pz,2)+pow(M_Proton,2))); 
		

		h_Q2[0]->Fill(Q2_kinmod);
		h_epsilon[0]->Fill(epsilon_kinmod);
		h_Xbj[0]->Fill(Xbj_kinmod);
		h_W[0]->Fill(W_kinmod);
		h_nu[0]->Fill(nu_kinmod);
		h_mt[0]->Fill(mt_kinmod);


		
		//LV_gamma_out_data, LV_proton_out_data, LV_el_in_data, LV_proton_in_data

		// fill array
		FillArray_LV(LV_el_out_data, ALV_el_out_data);
		FillArray_LV(LV_proton_out_data, ALV_proton_out_data);

		HallCTree->Fill();

	}


	cout<<"Write output file"<<endl;
	file->Write();
	file->Close();
	
	return ;

}

////////////////////////////////////////////////////////////////////////

int ReadHallCData::InitHist(){

	h_ebeam = new TH1F("h_ebeam","E beam; E(GeV);events",50,4.5,4.6);
	h_pzbeam = new TH1F("h_pzbeam","pz beam; pz(GeV);events",50,4.5,4.6);
	h2_pxpybeam = new TH2F("h2_pxpybeam","py vs px beam; py(GeV);px (GeV)",50,-1,1, 50,-1, 1);

	for (int i=0; i<10; i++){
	
		h_CTime_epCoinTime_ROC1[i] = new TH1F(Form("h_CTime_epCoinTime_ROC1[%d]",i),"coin time roc 1;time;events", 50, 0, 100);
		h_CTime_epCoinTime_ROC2[i] = new TH1F(Form("h_CTime_epCoinTime_ROC2[%d]",i),"coin time roc 2;time;events", 50, 0, 100);
		h_CTime_epCoinTime_TRIG1[i] = new TH1F(Form("h_CTime_epCoinTime_TRIG1[%d]",i),"coin time trig 1;time;events", 50, 0, 100);
		h_CTime_epCoinTime_TRIG2[i] = new TH1F(Form("h_CTime_epCoinTime_TRIG2[%d]",i),"coin time trig 2;time;events", 50, 0, 100);
		h_Pmom[i] = new TH1F(Form("h_Pmom[%d]",i),"proton mom.;p (GeV);events",50,0,2);	
		h_elmom[i] = new TH1F(Form("h_elmom[%d]",i),"electron mom.;p (GeV);events",50,0,6);	
		h_gmom[i] = new TH1F(Form("h_gmom[%d]",i),"missing mom. (g);p (GeV);events",50,-1,1);	
		h_Emiss[i] = new TH1F(Form("h_Emiss[%d]",i),"missing energy;Emiss (GeV);events",50,-2,2);	
		h_Mmiss[i] = new TH1F(Form("h_Mmiss[%d]",i),"missing mass;Mmiss (GeV);events",50,-2,2);	
		h_M2miss[i] = new TH1F(Form("h_M2miss[%d]",i),"missing mass sq;M2miss (GeV2);events",50,-2,2);	
		h_PTmiss[i] = new TH1F(Form("h_PTmiss[%d]",i),"missing PT;PTmiss (GeV);events",50,0,2);	
		h_PT2miss[i] = new TH1F(Form("h_PT2miss[%d]",i),"missing PT2;PT2miss (GeV2);events",50,0,2);	
		h_Pmiss_ref[i] = new TH1F(Form("h_Pmiss_ref[%d]",i),"missing ref P (GeV);P-ref (GeV);events",50,-2,2);
		h_Thmiss_ref[i] = new TH1F(Form("h_Thmiss_ref[%d]",i),"missing ref Th (deg);Th-ref (deg);events",50,-2,2);
		h_Q2[i] = new TH1F(Form("h_Q2[%d]",i),"Q2;Q2 (GeV2);events", 50, -0.1, 1);
		h_epsilon[i] = new TH1F(Form("h_epsilon[%d]",i),"epsilon;epsilon;events", 50, -0.1, 1);
		h_Xbj[i] = new TH1F(Form("h_Xbj[%d]",i),"Xbj;Xbj;events", 50, -0.1, 1);
		h_CosThCM[i] = new TH1F(Form("h_CosThCM[%d]",i),"CosTh CM;CosTh CM;events", 50, -1, 1);
		h_ThCM[i] = new TH1F(Form("h_ThCM[%d]",i),"Th CM;Th CM (deg);events", 50, 60, 180);
		h_mt[i] = new TH1F(Form("h_mt[%d]",i),"mt;mt (GeV2);events", 50, 0.2, 1.5);
		h_W[i] = new TH1F(Form("h_W[%d]",i),"W;W (GeV);events", 50, -0.1, 4);
		h_nu[i] = new TH1F(Form("h_nu[%d]",i),"nu;#nu (GeV);events", 50, 0, 4.55);
		h_Phi[i] = new TH1F(Form("h_Phi[%d]",i),"Phi;Phi (deg);events", 50, 0, 360);

		h2_Pebeta[i] = new TH2F(Form("h2_Pebeta[%d]",i),"proton #beta vs P;E (GeV); p (GeV)",50,0,4.5, 50,0.7, 1);
		h2_elebeta[i] = new TH2F(Form("h2_elebeta[%d]",i),"el #beta vs P;E (GeV); p (GeV)",50,0,4.5, 50,0.7, 1);
		h2_COIN_P_beta[i] = new TH2F(Form("h2_COIN_P_beta[%d]",i),"SHMS: ROC2 coin time vs #beta;coin time ns; p (GeV)",50,0,120, 50,0.7, 1);
		h2_COIN_H_beta[i] = new TH2F(Form("h2_COIN_H_beta[%d]",i),"HMS: ROC2 coin time vs #beta;coin time ns; p (GeV)",50,0,120, 50,0.7, 1);
		h2_Pemom[i] = new TH2F(Form("h2_Pemom[%d]",i),"proton E vs p;E (GeV); p (GeV)",50,0,2, 50,0, 2);
		h2_elemom[i] = new TH2F(Form("h2_elemom[%d]",i),"el E vs p;E (GeV); p (GeV)", 50,0,2, 50,0, 2);
		h2_gemom[i] = new TH2F(Form("h2_gemom[%d]",i),"missing E vs p;E (GeV); p (GeV)",50,0,2, 50,0, 2);

	}

	return 1;

}

/////////////////////////////////////////////////////////////////////////////

int ReadHallCData::DeleteHist(){
	h_ebeam->Delete(); h_pzbeam->Delete();h2_pxpybeam->Delete();
	for (int i=0; i<10; i++){
		h2_elebeta[i]->Delete(); h2_Pebeta[i]->Delete(); h2_COIN_P_beta[i]->Delete(); h2_COIN_H_beta[i]->Delete();
		h_CTime_epCoinTime_ROC1[i]->Delete();h_CTime_epCoinTime_ROC2[i]->Delete(); h_CTime_epCoinTime_TRIG1[i]->Delete(); h_CTime_epCoinTime_TRIG2[i]->Delete();
		h_Pmom[i]->Delete();  h_elmom[i]->Delete();  h_gmom[i]->Delete();  h_nu[i]->Delete(); h_Emiss[i]->Delete();  h_Mmiss[i]->Delete();  
		h_M2miss[i]->Delete();  h_PTmiss[i]->Delete();  h_PT2miss[i]->Delete();   h_Pmiss_ref[i]->Delete();  
		h_Thmiss_ref[i]->Delete();   h_Q2[i]->Delete();   h_epsilon[i]->Delete();  h_Xbj[i]->Delete();    
		h_CosThCM[i]->Delete();  h_ThCM[i]->Delete();    h_mt[i]->Delete();    h_W[i]->Delete();   h_Phi[i]->Delete(); 
		h2_Pemom[i]->Delete(); h2_elemom[i]->Delete(); h2_gemom[i]->Delete();
	}
	return 1;
}

////////////////////////////////////////////

int ReadHallCData::DrawHist(){

	TCanvas *c1 = new TCanvas();

	// timing
	c1->cd(1);
	h_CTime_epCoinTime_ROC1[0]->Draw(); gPad->SetLogy(1);
	h_CTime_epCoinTime_ROC1[1]->SetLineColor(8); h_CTime_epCoinTime_ROC1[1]->Draw("same");
	h_CTime_epCoinTime_ROC1[1]->SetLineColor(2); h_CTime_epCoinTime_ROC1[1]->Draw("same");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/cointime.pdf("); c1->Clear(); c1->cd(1);
	h_CTime_epCoinTime_ROC2[0]->Draw(); gPad->SetLogy(1);
	h_CTime_epCoinTime_ROC2[1]->SetLineColor(8); h_CTime_epCoinTime_ROC2[1]->Draw("same");
	h_CTime_epCoinTime_ROC2[1]->SetLineColor(2); h_CTime_epCoinTime_ROC2[1]->Draw("same");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/cointime.pdf"); c1->Clear(); c1->cd(1);
	h_CTime_epCoinTime_TRIG1[0]->Draw(); gPad->SetLogy(0);
	h_CTime_epCoinTime_TRIG1[1]->SetLineColor(8); h_CTime_epCoinTime_TRIG1[1]->Draw("same");
	h_CTime_epCoinTime_TRIG1[1]->SetLineColor(2); h_CTime_epCoinTime_TRIG1[1]->Draw("same");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/cointime.pdf"); c1->Clear(); c1->cd(1);
	h_CTime_epCoinTime_TRIG2[0]->Draw(); gPad->SetLogy(0);
	h_CTime_epCoinTime_TRIG2[1]->SetLineColor(8); h_CTime_epCoinTime_TRIG2[1]->Draw("same");
	h_CTime_epCoinTime_TRIG2[1]->SetLineColor(2); h_CTime_epCoinTime_TRIG2[1]->Draw("same");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/cointime.pdf"); c1->Clear(); 
	c1->Divide(2,1); c1->cd(1);
	h2_COIN_H_beta[1]->SetLineColor(8); h2_COIN_H_beta[1]->Draw("col");
	c1->cd(2); h2_COIN_H_beta[2]->SetLineColor(2); h2_COIN_H_beta[2]->Draw("col");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/cointime.pdf"); c1->Clear();
	c1->Divide(2,1); c1->cd(1);
	h2_COIN_P_beta[1]->SetLineColor(8); h2_COIN_P_beta[1]->Draw("col");
	c1->cd(2); h2_COIN_P_beta[2]->SetLineColor(2); h2_COIN_P_beta[2]->Draw("col");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/cointime.pdf"); c1->Clear(); c1->cd(1);
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/cointime.pdf)"); c1->Clear(); c1->cd(1);

	// positions

	// kinematics
	c1->Clear(); c1->cd(1);
	h_Q2[0]->Draw();
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf(");
	c1->Clear(); c1->cd(1);
	h_Xbj[0]->Draw();
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf");
	c1->Clear(); c1->cd(1);
	h_mt[0]->Draw();
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf");
	c1->Clear(); c1->cd(1);
	h_nu[0]->Draw();
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf");
	c1->Clear(); c1->cd(1);
	h_W[0]->Draw();
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf");
	c1->Clear(); c1->cd(1);
	h_epsilon[0]->Draw();
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf");
	c1->Clear(); c1->cd(1);
	h_Q2[0]->Draw();
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf");
	c1->Clear();
	c1->Divide(2,1); c1->cd(1);
	h2_elebeta[1]->SetLineColor(8); h2_elebeta[1]->Draw("col"); 
	c1->cd(2); h2_elebeta[2]->SetLineColor(2); h2_elebeta[2]->Draw("col");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf");
	c1->Clear(); c1->Divide(2,1); c1->cd(1);
	h2_Pebeta[1]->SetLineColor(8); h2_Pebeta[1]->Draw("col"); 
	c1->cd(2); h2_Pebeta[2]->SetLineColor(2); h2_Pebeta[2]->Draw("col");
	c1->SaveAs("/home/cdaq/mboer/hallc_replay_vcs/Ana/Results/kinematics.pdf)");
	

	return 1;
}

//////////////////////////////////////////////////////////////////////////
bool ReadHallCData::Notify()
{
        return kTRUE;

}


//////////////////////////////////////////////////////////////////////////

ReadHallCData::~ReadHallCData()
{
        cerr<<"call destructor"<<endl;
   if (!iChain) return;
        cerr<<"tree found, will be deleted"<<endl;


   delete iChain->  GetCurrentFile()->GetName();
   // fermer tous les files
   //  regarder https://root.cern.ch/doc/master/classTChain.html#aad668d387765b84f90c8df6508c620f2
   // trouver solution sinon systematique frag fault a la fin de la fonction; 

    //delete iChain;
}

//////////////////////////////////////////////////////////////////////////




ReadHallCData::ReadHallCData () : iChain(0) 
{
	cout<<"init class"<< endl;
}
//////////////////////////////////////////////////////////////////////////

ReadHallCData::ReadHallCData ( vector <string> files ) //: fChain(0) 
{

        iChain=new TChain("T");
        for (unsigned int i=0;i<files.size();i++){
                iChain->Add(Form("%s",files[i].c_str()));

        }
                cerr<<"before init"<<endl;
        int test=Init();
                cerr<<"after init"<<endl;

        /*chainbis = new TChain ("T1");
        for (unsigned int i=0;i<files.size();i++){
                chainbis->Add(Form("%s",files[i].c_str()));
        }*/
         //(TChain*)gDirectory->Get("T1");


        if (test==0) {
                cout<<"Initialization issues, check it!"<<endl;
        }


}


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


Int_t ReadHallCData::GetEntry(long long entry)
{
// Read contents of entry.
   if (!iChain) {
        cout<<"cannot open the tree"<<endl;
        return 0;
   }
   return iChain->GetEntry(entry);
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

long long ReadHallCData::LoadTree(long long entry)
{
// Set the environment to read one entry
   if (!iChain) return -5;
   long long centry = iChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!iChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)iChain;
   if (chain->GetTreeNumber() != fCurrent) {
   // if (iChain->GetTreeNumber() != fCurrent) {
        fCurrent = iChain->GetTreeNumber();
        Notify();
   }
   return centry;
}

////////////////////////////////////////

int ReadHallCData::Init(){

	InitValues();
	InitBranch();
	return 1;
}


//////////////////////////////////////////
//

Int_t ReadHallCData::InitValues(){

	//Event_Branch=0;
   g_evtyp =0;
   IPM3H07A_XPOS =0;
   IPM3H07A_YPOS =0;
   IPM3H07B_XPOS =0;
   IPM3H07B_YPOS =0;
   IPM3H07C_XPOS =0;
   IPM3H07C_YPOS =0;
   IPM3H07A_XRAW =0;
   IPM3H07A_YRAW =0;
   IPM3H07B_XRAW =0;
   IPM3H07B_YRAW =0;
   IPM3H07C_XRAW =0;
   IPM3H07C_YRAW =0;
   IPM3H07A_XSOF =0;
   IPM3H07A_YSOF =0;
   IPM3H07B_XSOF =0;
   IPM3H07B_YSOF =0;
   IPM3H07C_XSOF =0;
   IPM3H07C_YSOF=0;
   fEvtHdr_fEvtTime=0;
   fEvtHdr_fEvtNum=0;
   fEvtHdr_fEvtType=0;
   fEvtHdr_fEvtLen=0;
   fEvtHdr_fHelicity=0;
   fEvtHdr_fTargetPol=0;
   fEvtHdr_fRun=0;
   IBC3H00CRCUR4=0;
   IGL1I00OD16_16=0;
   HELFREQ=0;
   HELDELAYs=0;
   hac_bcm_average=0;
   ibcm1=0;
   ibcm2=0;
   iunser=0;
   itov3out=0;
   itov4out=0;
   H_gtr_xptar=0;
    H_gtr_yptar=0;
    P_gtr_xptar=0;
    P_gtr_yptar=0;
    mmiss=0;
    CTime_epCoinTime_ROC1=0;
    CTime_epCoinTime_ROC2=0;
    CTime_epCoinTime_TRIG1=0;
    CTime_epCoinTime_TRIG4=0;
    H_cal_eprtrack=0;
    H_cal_eprtracknorm=0;
    H_cal_etot=0;
    H_cal_etotnorm=0;
    H_cal_etottracknorm=0;
    H_cal_etrack=0;
    H_cal_etracknorm=0;
    H_cer_npeSum=0;
    H_dc_ntrack=0;
    H_dc_x_fp=0;
    H_dc_xp_fp=0;
    H_dc_y_fp=0;
    H_dc_yp_fp=0;
    H_extcor_xsieve=0;
    H_extcor_ysieve=0;
    H_gtr_beta=0;
    H_gtr_dp=0;
    H_gtr_index=0;
    H_gtr_ok=0;
    H_gtr_p=0;
    H_gtr_ph=0;
    H_gtr_px=0;
    H_gtr_py=0;
    H_gtr_pz=0;
    H_gtr_th=0;
    H_gtr_x=0;
    H_gtr_y=0;
    H_hod_beta=0;
    H_hod_betachisqnotrack=0;
    H_hod_betanotrack=0;
    H_hod_fpHitsTime=0;
    H_hod_starttime=0;
    H_kin_primary_Q2=0;
    H_kin_primary_W=0;
    H_kin_primary_W2=0;
    H_kin_primary_epsilon=0;
    H_kin_primary_nu=0;
    H_kin_primary_omega=0;
    H_kin_primary_ph_q=0;
    H_kin_primary_q3m=0;
    H_kin_primary_q_x=0;
    H_kin_primary_q_y=0;
    H_kin_primary_q_z=0;
    H_kin_primary_scat_ang_deg=0;
    H_kin_primary_scat_ang_rad=0;
    H_kin_primary_th_q=0;
    H_kin_primary_x_bj=0;
    H_rb_raster_fr_xbpm_tar=0;
    H_rb_raster_fr_ybpm_tar=0;
    H_react_x=0;
    H_react_y=0;
    H_react_z=0;
    P_aero_npeSum=0;
    P_cal_eprtrack=0;
    P_cal_eprtracknorm=0;
    P_cal_etot=0;
    P_cal_etotnorm=0;
    P_cal_etottracknorm=0;
    P_cal_etracknorm=0;
    P_cal_pr_eplane=0;
    P_dc_ntrack=0;
    P_dc_x_fp=0;
    P_dc_xp_fp=0;
    P_dc_y_fp=0;
    P_dc_yp_fp=0;
    P_extcor_xsieve=0;
    P_extcor_ysieve=0;
    P_gtr_beta=0;
    P_gtr_dp=0;
    P_gtr_index=0;
    P_gtr_ok=0;
    P_gtr_p=0;
    P_gtr_ph=0;
    P_gtr_px=0;
    P_gtr_py=0;
    P_gtr_pz=0;
    P_gtr_th=0;
    P_gtr_x=0;
    P_gtr_y=0;
    P_hgcer_npeSum=0;
    P_hod_beta=0;
    P_hod_betachisqnotrack=0;
    P_hod_betanotrack=0;
    P_hod_fpHitsTime=0;
    P_hod_goodscinhit=0;
    P_hod_starttime=0;
    P_kin_secondary_Erecoil=0;
    P_kin_secondary_MandelS=0;
    P_kin_secondary_MandelT=0;
    P_kin_secondary_MandelU=0;
    P_kin_secondary_Mrecoil=0;
    P_kin_secondary_Prec_x=0;
    P_kin_secondary_Prec_y=0;
    P_kin_secondary_Prec_z=0;
    P_kin_secondary_emiss=0;
    P_kin_secondary_emiss_nuc=0;
    P_kin_secondary_ph_bq=0;
    P_kin_secondary_ph_xq=0;
    P_kin_secondary_phb_cm=0;
    P_kin_secondary_phx_cm=0;
    P_kin_secondary_pmiss=0;
    P_kin_secondary_pmiss_x=0;
    P_kin_secondary_pmiss_y=0;
    P_kin_secondary_pmiss_z=0;
    P_kin_secondary_px_cm=0;
    P_kin_secondary_t_tot_cm=0;
    P_kin_secondary_tb=0;
    P_kin_secondary_tb_cm=0;
    P_kin_secondary_th_bq=0;
    P_kin_secondary_th_xq=0;
    P_kin_secondary_thb_cm=0;
    P_kin_secondary_thx_cm=0;
    P_kin_secondary_tx=0;
    P_kin_secondary_tx_cm=0;
    P_kin_secondary_xangle=0;
    P_ngcer_npeSum=0;
    P_react_z=0;
    T_coin_h1T_tdcMultiplicity=0;
    T_coin_h1T_tdcTime=0;
    T_coin_h1T_tdcTimeRaw=0;
    T_coin_h1X_tdcMultiplicity=0;
    T_coin_h1X_tdcTime=0;
    T_coin_h1X_tdcTimeRaw=0;
    T_coin_h1Y_tdcMultiplicity=0;
    T_coin_h1Y_tdcTime=0;
    T_coin_h1Y_tdcTimeRaw=0;
    T_coin_h2T_tdcMultiplicity=0;
    T_coin_h2T_tdcTime=0;
    T_coin_h2T_tdcTimeRaw=0;
    T_coin_h2X_tdcMultiplicity=0;
    T_coin_h2X_tdcTime=0;
    T_coin_h2X_tdcTimeRaw=0;
    T_coin_h2Y_tdcMultiplicity=0;
    T_coin_h2Y_tdcTime=0;
    T_coin_h2Y_tdcTimeRaw=0;
    T_coin_hAER_adcMultiplicity=0;
    T_coin_hAER_adcPed=0;
    T_coin_hAER_adcPedRaw=0;
    T_coin_hAER_adcPulseAmp=0;
    T_coin_hAER_adcPulseAmpRaw=0;
    T_coin_hAER_adcPulseInt=0;
    T_coin_hAER_adcPulseIntRaw=0;
    T_coin_hAER_adcPulseTime=0;
    T_coin_hAER_adcPulseTimeRaw=0;
    T_coin_hASUM_adcMultiplicity=0;
    T_coin_hASUM_adcPed=0;
    T_coin_hASUM_adcPedRaw=0;
    T_coin_hASUM_adcPulseAmp=0;
    T_coin_hASUM_adcPulseAmpRaw=0;
    T_coin_hASUM_adcPulseInt=0;
    T_coin_hASUM_adcPulseIntRaw=0;
    T_coin_hASUM_adcPulseTime=0;
    T_coin_hASUM_adcPulseTimeRaw=0;
    T_coin_hASUM_tdcMultiplicity=0;
    T_coin_hASUM_tdcTime=0;
    T_coin_hASUM_tdcTimeRaw=0;
    T_coin_hBSUM_adcMultiplicity=0;
    T_coin_hBSUM_adcPed=0;
    T_coin_hBSUM_adcPedRaw=0;
    T_coin_hBSUM_adcPulseAmp=0;
    T_coin_hBSUM_adcPulseAmpRaw=0;
    T_coin_hBSUM_adcPulseInt=0;
    T_coin_hBSUM_adcPulseIntRaw=0;
    T_coin_hBSUM_adcPulseTime=0;
    T_coin_hBSUM_adcPulseTimeRaw=0;
    T_coin_hBSUM_tdcMultiplicity=0;
    T_coin_hBSUM_tdcTime=0;
    T_coin_hBSUM_tdcTimeRaw=0;
    T_coin_hCER_adcMultiplicity=0;
    T_coin_hCER_adcPed=0;
    T_coin_hCER_adcPedRaw=0;
    T_coin_hCER_adcPulseAmp=0;
    T_coin_hCER_adcPulseAmpRaw=0;
    T_coin_hCER_adcPulseInt=0;
    T_coin_hCER_adcPulseIntRaw=0;
    T_coin_hCER_adcPulseTime=0;
    T_coin_hCER_adcPulseTimeRaw=0;
    T_coin_hCER_tdcMultiplicity=0;
    T_coin_hCER_tdcTime=0;
    T_coin_hCER_tdcTimeRaw=0;
    T_coin_hCSUM_adcMultiplicity=0;
    T_coin_hCSUM_adcPed=0;
    T_coin_hCSUM_adcPedRaw=0;
    T_coin_hCSUM_adcPulseAmp=0;
    T_coin_hCSUM_adcPulseAmpRaw=0;
    T_coin_hCSUM_adcPulseInt=0;
    T_coin_hCSUM_adcPulseIntRaw=0;
    T_coin_hCSUM_adcPulseTime=0;
    T_coin_hCSUM_adcPulseTimeRaw=0;
    T_coin_hCSUM_tdcMultiplicity=0;
    T_coin_hCSUM_tdcTime=0;
    T_coin_hCSUM_tdcTimeRaw=0;
    T_coin_hDCREF1_tdcMultiplicity=0;
    T_coin_hDCREF1_tdcTime=0;
    T_coin_hDCREF1_tdcTimeRaw=0;
    T_coin_hDCREF2_tdcMultiplicity=0;
    T_coin_hDCREF2_tdcTime=0;
    T_coin_hDCREF2_tdcTimeRaw=0;
    T_coin_hDCREF3_tdcMultiplicity=0;
    T_coin_hDCREF3_tdcTime=0;
    T_coin_hDCREF3_tdcTimeRaw=0;
    T_coin_hDCREF4_tdcMultiplicity=0;
    T_coin_hDCREF4_tdcTime=0;
    T_coin_hDCREF4_tdcTimeRaw=0;
    T_coin_hDCREF5_tdcMultiplicity=0;
    T_coin_hDCREF5_tdcTime=0;
    T_coin_hDCREF5_tdcTimeRaw=0;
    T_coin_hDSUM_adcMultiplicity=0;
    T_coin_hDSUM_adcPed=0;
    T_coin_hDSUM_adcPedRaw=0;
    T_coin_hDSUM_adcPulseAmp=0;
    T_coin_hDSUM_adcPulseAmpRaw=0;
    T_coin_hDSUM_adcPulseInt=0;
    T_coin_hDSUM_adcPulseIntRaw=0;
    T_coin_hDSUM_adcPulseTime=0;
    T_coin_hDSUM_adcPulseTimeRaw=0;
    T_coin_hDSUM_tdcMultiplicity=0;
    T_coin_hDSUM_tdcTime=0;
    T_coin_hDSUM_tdcTimeRaw=0;
    T_coin_hEDTM_tdcMultiplicity=0;
    T_coin_hEDTM_tdcTime=0;
    T_coin_hEDTM_tdcTimeRaw=0;
    T_coin_hEL_CLEAN_ROC1_tdcMultiplicity=0;
    T_coin_hEL_CLEAN_ROC1_tdcTime=0;
    T_coin_hEL_CLEAN_ROC1_tdcTimeRaw=0;
    T_coin_hEL_CLEAN_ROC2_tdcMultiplicity=0;
    T_coin_hEL_CLEAN_ROC2_tdcTime=0;
    T_coin_hEL_CLEAN_ROC2_tdcTimeRaw=0;
    T_coin_hEL_HI_ROC1_tdcMultiplicity=0;
    T_coin_hEL_CLEAN_ROC1_tdcTime=0;
    T_coin_hEL_CLEAN_ROC1_tdcTimeRaw=0;
    T_coin_hEL_CLEAN_ROC2_tdcMultiplicity=0;
    T_coin_hEL_CLEAN_ROC2_tdcTime=0;
    T_coin_hEL_CLEAN_ROC2_tdcTimeRaw=0;
    T_coin_hEL_HI_ROC1_tdcMultiplicity=0;
    T_coin_hEL_HI_ROC1_tdcTime=0;
    T_coin_hEL_HI_ROC1_tdcTimeRaw=0;
    T_coin_hEL_HI_ROC2_tdcMultiplicity=0;
    T_coin_hEL_HI_ROC2_tdcTime=0;
    T_coin_hEL_HI_ROC2_tdcTimeRaw=0;
    T_coin_hEL_LO_LO_ROC1_tdcMultiplicity=0;
    T_coin_hEL_LO_LO_ROC1_tdcTime=0;
    T_coin_hEL_LO_LO_ROC1_tdcTimeRaw=0;
    T_coin_hEL_LO_LO_ROC2_tdcMultiplicity=0;
    T_coin_hEL_LO_LO_ROC2_tdcTime=0;
    T_coin_hEL_LO_LO_ROC2_tdcTimeRaw=0;
    T_coin_hEL_LO_ROC1_tdcMultiplicity=0;
    T_coin_hEL_LO_ROC1_tdcTime=0;
    T_coin_hEL_LO_ROC1_tdcTimeRaw=0;
    T_coin_hEL_LO_ROC2_tdcMultiplicity=0;
    T_coin_hEL_LO_ROC2_tdcTime=0;
    T_coin_hEL_LO_ROC2_tdcTimeRaw=0;
    T_coin_hEL_REAL_ROC1_tdcMultiplicity=0;
    T_coin_hEL_REAL_ROC1_tdcTime=0;
    T_coin_hEL_REAL_ROC1_tdcTimeRaw=0;
    T_coin_hEL_REAL_ROC2_tdcMultiplicity=0;
    T_coin_hEL_REAL_ROC2_tdcTime=0;
    T_coin_hEL_REAL_ROC2_tdcTimeRaw=0;
    T_coin_hFADC_TREF_ROC1_adcMultiplicity=0;
    T_coin_hFADC_TREF_ROC1_adcPed=0;
    T_coin_hFADC_TREF_ROC1_adcPedRaw=0;
    T_coin_hFADC_TREF_ROC1_adcPulseAmp=0;
    T_coin_hFADC_TREF_ROC1_adcPulseAmpRaw=0;
    T_coin_hFADC_TREF_ROC1_adcPulseInt=0;
    T_coin_hFADC_TREF_ROC1_adcPulseIntRaw=0;
    T_coin_hFADC_TREF_ROC1_adcPulseTime=0;
    T_coin_hFADC_TREF_ROC1_adcPulseTimeRaw=0;
    T_coin_hHODO_RF_tdcMultiplicity=0;
    T_coin_hHODO_RF_tdcTime=0;
    T_coin_hHODO_RF_tdcTimeRaw=0;
    T_coin_hPRE100_ROC1_tdcMultiplicity=0;
    T_coin_hPRE100_ROC1_tdcTime=0;
    T_coin_hPRE100_ROC1_tdcTimeRaw=0;
    T_coin_hPRE100_ROC2_tdcMultiplicity=0;
    T_coin_hPRE100_ROC2_tdcTime=0;
    T_coin_hPRE100_ROC2_tdcTimeRaw=0;
    T_coin_hPRE150_ROC1_tdcMultiplicity=0;
    T_coin_hPRE150_ROC1_tdcTime=0;
    T_coin_hPRE150_ROC1_tdcTimeRaw=0;
    T_coin_hPRE150_ROC2_tdcMultiplicity=0;
    T_coin_hPRE150_ROC2_tdcTime=0;
    T_coin_hPRE150_ROC2_tdcTimeRaw=0;
    T_coin_hPRE200_ROC1_tdcMultiplicity=0;
    T_coin_hPRE200_ROC1_tdcTime=0;
    T_coin_hPRE200_ROC1_tdcTimeRaw=0;
    T_coin_hPRE200_ROC2_tdcMultiplicity=0;
    T_coin_hPRE200_ROC2_tdcTime=0;
    T_coin_hPRE200_ROC2_tdcTimeRaw=0;
    T_coin_hPRE40_ROC1_tdcMultiplicity=0;
    T_coin_hPRE40_ROC1_tdcTime=0;
    T_coin_hPRE40_ROC1_tdcTimeRaw=0;
    T_coin_hPRE40_ROC2_tdcMultiplicity=0;
    T_coin_hPRE40_ROC2_tdcTime=0;
    T_coin_hPRE40_ROC2_tdcTimeRaw=0;
    T_coin_hPRHI_tdcMultiplicity=0;
    T_coin_hPRHI_tdcTime=0;
    T_coin_hPRHI_tdcTimeRaw=0;
    T_coin_hPRLO_tdcMultiplicity=0;
    T_coin_hPRLO_tdcTime=0;
    T_coin_hPRLO_tdcTimeRaw=0;
    T_coin_hPSHWR_adcMultiplicity=0;
    T_coin_hPSHWR_adcPed=0;
    T_coin_hPSHWR_adcPedRaw=0;
    T_coin_hPSHWR_adcPulseAmp=0;
    T_coin_hPSHWR_adcPulseAmpRaw=0;
    T_coin_hPSHWR_adcPulseInt=0;
    T_coin_hPSHWR_adcPulseIntRaw=0;
    T_coin_hPSHWR_adcPulseTime=0;
    T_coin_hPSHWR_adcPulseTimeRaw=0;
    T_coin_hRF_tdcMultiplicity=0;
    T_coin_hRF_tdcTime=0;
    T_coin_hRF_tdcTimeRaw=0;
    T_coin_hSHWR_adcMultiplicity=0;
    T_coin_hSHWR_adcPed=0;
    T_coin_hSHWR_adcPedRaw=0;
    T_coin_hSHWR_adcPulseAmp=0;
    T_coin_hSHWR_adcPulseAmpRaw=0;
    T_coin_hSHWR_adcPulseInt=0;
    T_coin_hSHWR_adcPulseIntRaw=0;
    T_coin_hSHWR_adcPulseTime=0;
    T_coin_hSHWR_adcPulseTimeRaw=0;
    T_coin_hSHWR_tdcMultiplicity=0;
    T_coin_hSHWR_tdcTime=0;
    T_coin_hSHWR_tdcTimeRaw=0;
    T_coin_hSTOF_ROC1_tdcMultiplicity=0;
    T_coin_hSTOF_ROC1_tdcTime=0;
    T_coin_hSTOF_ROC1_tdcTimeRaw=0;
    T_coin_hSTOF_ROC2_tdcMultiplicity=0;
    T_coin_hSTOF_ROC2_tdcTime=0;
    T_coin_hSTOF_ROC2_tdcTimeRaw=0;
    T_coin_hT1_tdcMultiplicity=0;
    T_coin_hT1_tdcTime=0;
    T_coin_hT1_tdcTimeRaw=0;
    T_coin_hT2_tdcMultiplicity=0;
    T_coin_hT2_tdcTime=0;
    T_coin_hT2_tdcTimeRaw=0;
    T_coin_hTRIG1_ROC1_tdcMultiplicity=0;
    T_coin_hTRIG1_ROC1_tdcTime=0;
    T_coin_hTRIG1_ROC1_tdcTimeRaw=0;
    T_coin_hTRIG1_ROC2_tdcMultiplicity=0;
    T_coin_hTRIG1_ROC2_tdcTime=0;
    T_coin_hTRIG1_ROC2_tdcTimeRaw=0;
    T_coin_hTRIG2_ROC1_tdcMultiplicity=0;
    T_coin_hTRIG2_ROC1_tdcTime=0;
    T_coin_hTRIG2_ROC1_tdcTimeRaw=0;
    T_coin_hTRIG2_ROC2_tdcMultiplicity=0;
    T_coin_hTRIG2_ROC2_tdcTime=0;
    T_coin_hTRIG2_ROC2_tdcTimeRaw=0;
    T_coin_hTRIG3_ROC1_tdcMultiplicity=0;
    T_coin_hTRIG3_ROC1_tdcTime=0;
    T_coin_hTRIG3_ROC1_tdcTimeRaw=0;
    T_coin_hTRIG3_ROC2_tdcMultiplicity=0;
    T_coin_hTRIG3_ROC2_tdcTime=0;
    T_coin_hTRIG3_ROC2_tdcTimeRaw=0;
    T_coin_hTRIG4_ROC1_tdcMultiplicity=0;
    T_coin_hTRIG4_ROC1_tdcTime=0;
    T_coin_hTRIG4_ROC1_tdcTimeRaw=0;
    T_coin_hTRIG4_ROC2_tdcMultiplicity=0;
    T_coin_hTRIG4_ROC2_tdcTime=0;
    T_coin_hTRIG4_ROC2_tdcTimeRaw=0;
    T_coin_hTRIG5_ROC1_tdcMultiplicity=0;
    T_coin_hTRIG5_ROC1_tdcTime=0;
    T_coin_hTRIG5_ROC1_tdcTimeRaw=0;
    T_coin_hTRIG5_ROC2_tdcMultiplicity=0;
    T_coin_hTRIG5_ROC2_tdcTime=0;
    T_coin_hTRIG5_ROC2_tdcTimeRaw=0;
    T_coin_hTRIG6_ROC1_tdcMultiplicity=0;
    T_coin_hTRIG6_ROC1_tdcTime=0;
    T_coin_hTRIG6_ROC1_tdcTimeRaw=0;
    T_coin_hTRIG6_ROC2_tdcMultiplicity=0;
    T_coin_hTRIG6_ROC2_tdcTime=0;
    T_coin_hTRIG6_ROC2_tdcTimeRaw=0;
    T_coin_p1T_tdcMultiplicity=0;
    T_coin_p1T_tdcTime=0;
    T_coin_p1T_tdcTimeRaw=0;
    T_coin_p1X_tdcMultiplicity=0;
    T_coin_p1X_tdcTime=0;
    T_coin_p1X_tdcTimeRaw=0;
    T_coin_p1Y_tdcMultiplicity=0;
    T_coin_p1Y_tdcTime=0;
    T_coin_p1Y_tdcTimeRaw=0;
    T_coin_p2T_tdcMultiplicity=0;
    T_coin_p2T_tdcTime=0;
    T_coin_p2T_tdcTimeRaw=0;
    T_coin_p2X_tdcMultiplicity=0;
    T_coin_p2X_tdcTime=0;
    T_coin_p2X_tdcTimeRaw=0;
    T_coin_p2Y_tdcMultiplicity=0;
    T_coin_p2Y_tdcTime=0;
    T_coin_p2Y_tdcTimeRaw=0;
    T_coin_pAER_adcMultiplicity=0;
    T_coin_pAER_adcPed=0;
    T_coin_pAER_adcPedRaw=0;
    T_coin_pAER_adcPulseAmp=0;
    T_coin_pAER_adcPulseAmpRaw=0;
    T_coin_pAER_adcPulseInt=0;
    T_coin_pAER_adcPulseIntRaw=0;
    T_coin_pAER_adcPulseTime=0;
    T_coin_pAER_adcPulseTimeRaw=0;
    T_coin_pAER_tdcMultiplicity=0;
    T_coin_pAER_tdcTime=0;
    T_coin_pAER_tdcTimeRaw=0;
    T_coin_pDCREF10_tdcMultiplicity=0;
    T_coin_pDCREF10_tdcTime=0;
    T_coin_pDCREF10_tdcTimeRaw=0;
    T_coin_pDCREF1_tdcMultiplicity=0;
    T_coin_pDCREF1_tdcTime=0;
    T_coin_pDCREF1_tdcTimeRaw=0;
    T_coin_pDCREF2_tdcMultiplicity=0;
    T_coin_pDCREF2_tdcTime=0;
    T_coin_pDCREF2_tdcTimeRaw=0;
    T_coin_pDCREF3_tdcMultiplicity=0;
    T_coin_pDCREF3_tdcTime=0;
    T_coin_pDCREF3_tdcTimeRaw=0;
    T_coin_pDCREF4_tdcMultiplicity=0;
    T_coin_pDCREF4_tdcTime=0;
    T_coin_pDCREF4_tdcTimeRaw=0;
    T_coin_pDCREF5_tdcMultiplicity=0;
    T_coin_pDCREF5_tdcTime=0;
    T_coin_pDCREF5_tdcTimeRaw=0;
    T_coin_pDCREF6_tdcMultiplicity=0;
    T_coin_pDCREF6_tdcTime=0;
    T_coin_pDCREF6_tdcTimeRaw=0;
    T_coin_pDCREF7_tdcMultiplicity=0;
    T_coin_pDCREF7_tdcTime=0;
    T_coin_pDCREF7_tdcTimeRaw=0;
    T_coin_pDCREF8_tdcMultiplicity=0;
    T_coin_pDCREF8_tdcTime=0;
    T_coin_pDCREF8_tdcTimeRaw=0;
    T_coin_pDCREF9_tdcMultiplicity=0;
    T_coin_pDCREF9_tdcTime=0;
    T_coin_pDCREF9_tdcTimeRaw=0;
    T_coin_pEDTM_tdcMultiplicity=0;
    T_coin_pEDTM_tdcTime=0;
    T_coin_pEDTM_tdcTimeRaw=0;
    T_coin_pEL_CLEAN_ROC1_tdcMultiplicity=0;
    T_coin_pEL_CLEAN_ROC1_tdcTime=0;
    T_coin_pEL_CLEAN_ROC1_tdcTimeRaw=0;
    T_coin_pEL_CLEAN_ROC2_tdcMultiplicity=0;
    T_coin_pEL_CLEAN_ROC2_tdcTime=0;
    T_coin_pEL_CLEAN_ROC2_tdcTimeRaw=0;
    T_coin_pEL_HI_ROC1_tdcMultiplicity=0;
    T_coin_pEL_HI_ROC1_tdcTime=0;
    T_coin_pEL_HI_ROC1_tdcTimeRaw=0;
    T_coin_pEL_HI_ROC2_tdcMultiplicity=0;
    T_coin_pEL_HI_ROC2_tdcTime=0;
    T_coin_pEL_HI_ROC2_tdcTimeRaw=0;
    T_coin_pEL_LO_LO_ROC1_tdcMultiplicity=0;
    T_coin_pEL_LO_LO_ROC1_tdcTime=0;
    T_coin_pEL_LO_LO_ROC1_tdcTimeRaw=0;
    T_coin_pEL_LO_LO_ROC2_tdcMultiplicity=0;
    T_coin_pEL_LO_LO_ROC2_tdcTime=0;
    T_coin_pEL_LO_LO_ROC2_tdcTimeRaw=0;
    T_coin_pEL_LO_ROC1_tdcMultiplicity=0;
    T_coin_pEL_LO_ROC1_tdcTime=0;
    T_coin_pEL_LO_ROC1_tdcTimeRaw=0;
    T_coin_pEL_LO_ROC2_tdcMultiplicity=0;
    T_coin_pEL_LO_ROC2_tdcTime=0;
    T_coin_pEL_LO_ROC2_tdcTimeRaw=0;
    T_coin_pEL_REAL_ROC1_tdcMultiplicity=0;
    T_coin_pEL_REAL_ROC1_tdcTime=0;
    T_coin_pEL_REAL_ROC1_tdcTimeRaw=0;
    T_coin_pEL_REAL_ROC2_tdcMultiplicity=0;
    T_coin_pEL_REAL_ROC2_tdcTime=0;
    T_coin_pEL_REAL_ROC2_tdcTimeRaw=0;
    T_coin_pFADC_TREF_ROC2_adcMultiplicity=0;
    T_coin_pFADC_TREF_ROC2_adcPed=0;
    T_coin_pFADC_TREF_ROC2_adcPedRaw=0;
    T_coin_pFADC_TREF_ROC2_adcPulseAmp=0;
    T_coin_pFADC_TREF_ROC2_adcPulseAmpRaw=0;
    T_coin_pFADC_TREF_ROC2_adcPulseInt=0;
    T_coin_pFADC_TREF_ROC2_adcPulseIntRaw=0;
    T_coin_pFADC_TREF_ROC2_adcPulseTime=0;
    T_coin_pFADC_TREF_ROC2_adcPulseTimeRaw=0;
    T_coin_pHEL_MPS_adcMultiplicity=0;
    T_coin_pHEL_MPS_adcPed=0;
    T_coin_pHEL_MPS_adcPedRaw=0;
    T_coin_pHEL_MPS_adcPulseAmp=0;
    T_coin_pHEL_MPS_adcPulseAmpRaw=0;
    T_coin_pHEL_MPS_adcPulseInt=0;
    T_coin_pHEL_MPS_adcPulseIntRaw=0;
    T_coin_pHEL_MPS_adcPulseTime=0;
    T_coin_pHEL_MPS_adcPulseTimeRaw=0;
    T_coin_pHEL_NEG_adcMultiplicity=0;
    T_coin_pHEL_NEG_adcPed=0;
    T_coin_pHEL_NEG_adcPedRaw=0;
    T_coin_pHEL_NEG_adcPulseAmp=0;
    T_coin_pHEL_NEG_adcPulseAmpRaw=0;
    T_coin_pHEL_NEG_adcPulseInt=0;
    T_coin_pHEL_NEG_adcPulseIntRaw=0;
    T_coin_pHEL_NEG_adcPulseTime=0;
    T_coin_pHEL_NEG_adcPulseTimeRaw=0;
    T_coin_pHEL_POS_adcMultiplicity=0;
    T_coin_pHEL_POS_adcPed=0;
    T_coin_pHEL_POS_adcPedRaw=0;
    T_coin_pHEL_POS_adcPulseAmp=0;
    T_coin_pHEL_POS_adcPulseAmpRaw=0;
    T_coin_pHEL_POS_adcPulseInt=0;
    T_coin_pHEL_POS_adcPulseIntRaw=0;
    T_coin_pHEL_POS_adcPulseTime=0;
    T_coin_pHEL_POS_adcPulseTimeRaw=0;
    T_coin_pHGCER_MOD_adcMultiplicity=0;
    T_coin_pHGCER_MOD_adcPed=0;
    T_coin_pHGCER_MOD_adcPedRaw=0;
    T_coin_pHGCER_MOD_adcPulseAmp=0;
    T_coin_pHGCER_MOD_adcPulseAmpRaw=0;
    T_coin_pHGCER_MOD_adcPulseInt=0;
    T_coin_pHGCER_MOD_adcPulseIntRaw=0;
    T_coin_pHGCER_MOD_adcPulseTime=0;
    T_coin_pHGCER_MOD_adcPulseTimeRaw=0;
    T_coin_pHGCER_adcMultiplicity=0;
    T_coin_pHGCER_adcPed=0;
    T_coin_pHGCER_adcPedRaw=0;
    T_coin_pHGCER_adcPulseAmp=0;
    T_coin_pHGCER_adcPulseAmpRaw=0;
    T_coin_pHGCER_adcPulseInt=0;
    T_coin_pHGCER_adcPulseIntRaw=0;
    T_coin_pHGCER_adcPulseTime=0;
    T_coin_pHGCER_adcPulseTimeRaw=0;
    T_coin_pHGCER_tdcMultiplicity=0;
    T_coin_pHGCER_tdcTime=0;
    T_coin_pHGCER_tdcTimeRaw=0;
    T_coin_pHODO_RF_tdcMultiplicity=0;
    T_coin_pHODO_RF_tdcTime=0;
    T_coin_pHODO_RF_tdcTimeRaw=0;
    T_coin_pNGCER_MOD_adcMultiplicity=0;
    T_coin_pNGCER_MOD_adcPed=0;
    T_coin_pNGCER_MOD_adcPedRaw=0;
    T_coin_pNGCER_MOD_adcPulseAmp=0;
    T_coin_pNGCER_MOD_adcPulseAmpRaw=0;
    T_coin_pNGCER_MOD_adcPulseInt=0;
    T_coin_pNGCER_MOD_adcPulseIntRaw=0;
    T_coin_pNGCER_MOD_adcPulseTime=0;
    T_coin_pNGCER_MOD_adcPulseTimeRaw=0;
    T_coin_pNGCER_adcMultiplicity=0;
    T_coin_pNGCER_adcPed=0;
    T_coin_pNGCER_adcPedRaw=0;
    T_coin_pNGCER_adcPulseAmp=0;
    T_coin_pNGCER_adcPulseAmpRaw=0;
    T_coin_pNGCER_adcPulseInt=0;
    T_coin_pNGCER_adcPulseIntRaw=0;
    T_coin_pNGCER_adcPulseTime=0;
    T_coin_pNGCER_adcPulseTimeRaw=0;
    T_coin_pNGCER_tdcMultiplicity=0;
    T_coin_pNGCER_tdcTime=0;
    T_coin_pNGCER_tdcTimeRaw=0;
    T_coin_pPRE100_ROC1_tdcMultiplicity=0;
    T_coin_pPRE100_ROC1_tdcTime=0;
    T_coin_pPRE100_ROC1_tdcTimeRaw=0;
    T_coin_pPRE100_ROC2_tdcMultiplicity=0;
    T_coin_pPRE100_ROC2_tdcTime=0;
    T_coin_pPRE100_ROC2_tdcTimeRaw=0;
    T_coin_pPRE150_ROC1_tdcMultiplicity=0;
    T_coin_pPRE150_ROC1_tdcTime=0;
    T_coin_pPRE150_ROC1_tdcTimeRaw=0;
    T_coin_pPRE150_ROC2_tdcMultiplicity=0;
    T_coin_pPRE150_ROC2_tdcTime=0;
    T_coin_pPRE150_ROC2_tdcTimeRaw=0;
    T_coin_pPRE200_ROC1_tdcMultiplicity=0;
    T_coin_pPRE200_ROC1_tdcTime=0;
    T_coin_pPRE200_ROC1_tdcTimeRaw=0;
    T_coin_pPRE200_ROC2_tdcMultiplicity=0;
    T_coin_pPRE200_ROC2_tdcTime=0;
    T_coin_pPRE200_ROC2_tdcTimeRaw=0;
    T_coin_pPRE40_ROC1_tdcMultiplicity=0;
    T_coin_pPRE40_ROC1_tdcTime=0;
    T_coin_pPRE40_ROC1_tdcTimeRaw=0;
    T_coin_pPRE40_ROC2_tdcMultiplicity=0;
    T_coin_pPRE40_ROC2_tdcTime=0;
    T_coin_pPRE40_ROC2_tdcTimeRaw=0;
    T_coin_pPRHI_tdcMultiplicity=0;
    T_coin_pPRHI_tdcTime=0;
    T_coin_pPRHI_tdcTimeRaw=0;
    T_coin_pPRLO_tdcMultiplicity=0;
    T_coin_pPRLO_tdcTime=0;
    T_coin_pPRLO_tdcTimeRaw=0;
    T_coin_pPSHWR_adcMultiplicity=0;
    T_coin_pPSHWR_adcPed=0;
    T_coin_pPSHWR_adcPedRaw=0;
    T_coin_pPSHWR_adcPulseAmp=0;
    T_coin_pPSHWR_adcPulseAmpRaw=0;
    T_coin_pPSHWR_adcPulseInt=0;
    T_coin_pPSHWR_adcPulseIntRaw=0;
    T_coin_pPSHWR_adcPulseTime=0;
    T_coin_pPSHWR_adcPulseTimeRaw=0;
    T_coin_pRF_tdcMultiplicity=0;
    T_coin_pRF_tdcTime=0;
    T_coin_pRF_tdcTimeRaw=0;
    T_coin_pSTOF_ROC1_tdcMultiplicity=0;
    T_coin_pSTOF_ROC1_tdcTime=0;
    T_coin_pSTOF_ROC1_tdcTimeRaw=0;
    T_coin_pSTOF_ROC2_tdcMultiplicity=0;
    T_coin_pSTOF_ROC2_tdcTime=0;
    T_coin_pSTOF_ROC2_tdcTimeRaw=0;
    T_coin_pT1_tdcMultiplicity=0;
    T_coin_pT1_tdcTime=0;
    T_coin_pT1_tdcTimeRaw=0;
    T_coin_pT2_tdcMultiplicity=0;
    T_coin_pT2_tdcTime=0;
    T_coin_pT2_tdcTimeRaw=0;
    T_coin_pT3_tdcMultiplicity=0;
    T_coin_pT3_tdcTime=0;
    T_coin_pT3_tdcTimeRaw=0;
    T_coin_pTRIG1_ROC1_tdcMultiplicity=0;
    T_coin_pTRIG1_ROC1_tdcTime=0;
    T_coin_pTRIG1_ROC1_tdcTimeRaw=0;
    T_coin_pTRIG1_ROC2_tdcMultiplicity=0;
    T_coin_pTRIG1_ROC2_tdcTime=0;
    T_coin_pTRIG1_ROC2_tdcTimeRaw=0;
    T_coin_pTRIG2_ROC1_tdcMultiplicity=0;
    T_coin_pTRIG2_ROC1_tdcTime=0;
    T_coin_pTRIG2_ROC1_tdcTimeRaw=0;
    T_coin_pTRIG2_ROC2_tdcMultiplicity=0;
    T_coin_pTRIG2_ROC2_tdcTime=0;
    T_coin_pTRIG2_ROC2_tdcTimeRaw=0;
    T_coin_pTRIG3_ROC1_tdcMultiplicity=0;
    T_coin_pTRIG3_ROC1_tdcTime=0;
    T_coin_pTRIG3_ROC1_tdcTimeRaw=0;
    T_coin_pTRIG3_ROC2_tdcMultiplicity=0;
    T_coin_pTRIG3_ROC2_tdcTime=0;
    T_coin_pTRIG3_ROC2_tdcTimeRaw=0;
    T_coin_pTRIG4_ROC1_tdcMultiplicity=0;
    T_coin_pTRIG4_ROC1_tdcTime=0;
    T_coin_pTRIG4_ROC1_tdcTimeRaw=0;
    T_coin_pTRIG4_ROC2_tdcMultiplicity=0;
    T_coin_pTRIG4_ROC2_tdcTime=0;
    T_coin_pTRIG4_ROC2_tdcTimeRaw=0;
    T_coin_pTRIG5_ROC1_tdcMultiplicity=0;
    T_coin_pTRIG5_ROC1_tdcTime=0;
    T_coin_pTRIG5_ROC1_tdcTimeRaw=0;
    T_coin_pTRIG5_ROC2_tdcMultiplicity=0;
    T_coin_pTRIG5_ROC2_tdcTime=0;
    T_coin_pTRIG5_ROC2_tdcTimeRaw=0;
    T_coin_pTRIG6_ROC1_tdcMultiplicity=0;
    T_coin_pTRIG6_ROC1_tdcTime=0;
    T_coin_pTRIG6_ROC1_tdcTimeRaw=0;
    T_coin_pTRIG6_ROC2_tdcMultiplicity=0;
    T_coin_pTRIG6_ROC2_tdcTime=0;
    T_coin_pTRIG6_ROC2_tdcTimeRaw=0;

    return 1;

}

////////////////////////////////////////////////////////////////////:

int ReadHallCData::InitBranch(){
	if (!iChain) return 0;

//	fChain->SetBranchAddress("mmiss", &mmiss, &b_mmiss);

   iChain->SetBranchAddress("H.gtr.xptar", &H_gtr_xptar, &b_H_gtr_xptar);
   iChain->SetBranchAddress("H.gtr.yptar", &H_gtr_yptar, &b_H_gtr_yptar);
   iChain->SetBranchAddress("P.gtr.xptar", &P_gtr_xptar, &b_P_gtr_xptar);
   iChain->SetBranchAddress("P.gtr.yptar", &P_gtr_yptar, &b_P_gtr_yptar);
   iChain->SetBranchAddress("mmiss", &mmiss, &b_mmiss);
   iChain->SetBranchAddress("CTime.epCoinTime_ROC1", &CTime_epCoinTime_ROC1, &b_CTime_epCoinTime_ROC1);
   iChain->SetBranchAddress("CTime.epCoinTime_ROC2", &CTime_epCoinTime_ROC2, &b_CTime_epCoinTime_ROC2);
   iChain->SetBranchAddress("CTime.epCoinTime_TRIG1", &CTime_epCoinTime_TRIG1, &b_CTime_epCoinTime_TRIG1);
   iChain->SetBranchAddress("CTime.epCoinTime_TRIG4", &CTime_epCoinTime_TRIG4, &b_CTime_epCoinTime_TRIG4);
   iChain->SetBranchAddress("H.cal.eprtrack", &H_cal_eprtrack, &b_H_cal_eprtrack);
   iChain->SetBranchAddress("H.cal.eprtracknorm", &H_cal_eprtracknorm, &b_H_cal_eprtracknorm);
   iChain->SetBranchAddress("H.cal.etot", &H_cal_etot, &b_H_cal_etot);
   iChain->SetBranchAddress("H.cal.etotnorm", &H_cal_etotnorm, &b_H_cal_etotnorm);
   iChain->SetBranchAddress("H.cal.etottracknorm", &H_cal_etottracknorm, &b_H_cal_etottracknorm);
   iChain->SetBranchAddress("H.cal.etrack", &H_cal_etrack, &b_H_cal_etrack);
   iChain->SetBranchAddress("H.cal.etracknorm", &H_cal_etracknorm, &b_H_cal_etracknorm);
   iChain->SetBranchAddress("H.cer.npeSum", &H_cer_npeSum, &b_H_cer_npeSum);
   iChain->SetBranchAddress("H.dc.ntrack", &H_dc_ntrack, &b_H_dc_ntrack);
   iChain->SetBranchAddress("H.dc.x_fp", &H_dc_x_fp, &b_H_dc_x_fp);
   iChain->SetBranchAddress("H.dc.xp_fp", &H_dc_xp_fp, &b_H_dc_xp_fp);
   iChain->SetBranchAddress("H.dc.y_fp", &H_dc_y_fp, &b_H_dc_y_fp);
   iChain->SetBranchAddress("H.dc.yp_fp", &H_dc_yp_fp, &b_H_dc_yp_fp);
   iChain->SetBranchAddress("H.extcor.xsieve", &H_extcor_xsieve, &b_H_extcor_xsieve);
   iChain->SetBranchAddress("H.extcor.ysieve", &H_extcor_ysieve, &b_H_extcor_ysieve);
   iChain->SetBranchAddress("H.gtr.beta", &H_gtr_beta, &b_H_gtr_beta);
   iChain->SetBranchAddress("H.gtr.dp", &H_gtr_dp, &b_H_gtr_dp);
   iChain->SetBranchAddress("H.gtr.index", &H_gtr_index, &b_H_gtr_index);
   iChain->SetBranchAddress("H.gtr.ok", &H_gtr_ok, &b_H_gtr_ok);
   iChain->SetBranchAddress("H.gtr.p", &H_gtr_p, &b_H_gtr_p);
   iChain->SetBranchAddress("H.gtr.ph", &H_gtr_ph, &b_H_gtr_ph);
   iChain->SetBranchAddress("H.gtr.px", &H_gtr_px, &b_H_gtr_px);
   iChain->SetBranchAddress("H.gtr.py", &H_gtr_py, &b_H_gtr_py);
   iChain->SetBranchAddress("H.gtr.pz", &H_gtr_pz, &b_H_gtr_pz);
   iChain->SetBranchAddress("H.gtr.th", &H_gtr_th, &b_H_gtr_th);
   iChain->SetBranchAddress("H.gtr.x", &H_gtr_x, &b_H_gtr_x);
   iChain->SetBranchAddress("H.gtr.y", &H_gtr_y, &b_H_gtr_y);
   iChain->SetBranchAddress("H.hod.beta", &H_hod_beta, &b_H_hod_beta);
   iChain->SetBranchAddress("H.hod.betachisqnotrack", &H_hod_betachisqnotrack, &b_H_hod_betachisqnotrack);
   iChain->SetBranchAddress("H.hod.betanotrack", &H_hod_betanotrack, &b_H_hod_betanotrack);
   iChain->SetBranchAddress("H.hod.fpHitsTime", &H_hod_fpHitsTime, &b_H_hod_fpHitsTime);
   iChain->SetBranchAddress("H.hod.starttime", &H_hod_starttime, &b_H_hod_starttime);
   iChain->SetBranchAddress("H.kin.primary.Q2", &H_kin_primary_Q2, &b_H_kin_primary_Q2);
   iChain->SetBranchAddress("H.kin.primary.W", &H_kin_primary_W, &b_H_kin_primary_W);
   iChain->SetBranchAddress("H.kin.primary.W2", &H_kin_primary_W2, &b_H_kin_primary_W2);
   iChain->SetBranchAddress("H.kin.primary.epsilon", &H_kin_primary_epsilon, &b_H_kin_primary_epsilon);
   iChain->SetBranchAddress("H.kin.primary.nu", &H_kin_primary_nu, &b_H_kin_primary_nu);
   iChain->SetBranchAddress("H.kin.primary.omega", &H_kin_primary_omega, &b_H_kin_primary_omega);
   iChain->SetBranchAddress("H.kin.primary.ph_q", &H_kin_primary_ph_q, &b_H_kin_primary_ph_q);
   iChain->SetBranchAddress("H.kin.primary.q3m", &H_kin_primary_q3m, &b_H_kin_primary_q3m);
   iChain->SetBranchAddress("H.kin.primary.q_x", &H_kin_primary_q_x, &b_H_kin_primary_q_x);
   iChain->SetBranchAddress("H.kin.primary.q_y", &H_kin_primary_q_y, &b_H_kin_primary_q_y);
   iChain->SetBranchAddress("H.kin.primary.q_z", &H_kin_primary_q_z, &b_H_kin_primary_q_z);
   iChain->SetBranchAddress("H.kin.primary.scat_ang_deg", &H_kin_primary_scat_ang_deg, &b_H_kin_primary_scat_ang_deg);
   iChain->SetBranchAddress("H.kin.primary.scat_ang_rad", &H_kin_primary_scat_ang_rad, &b_H_kin_primary_scat_ang_rad);
   iChain->SetBranchAddress("H.kin.primary.th_q", &H_kin_primary_th_q, &b_H_kin_primary_th_q);
   iChain->SetBranchAddress("H.kin.primary.x_bj", &H_kin_primary_x_bj, &b_H_kin_primary_x_bj);
   iChain->SetBranchAddress("H.rb.raster.fr_xbpm_tar", &H_rb_raster_fr_xbpm_tar, &b_H_rb_raster_fr_xbpm_tar);
   iChain->SetBranchAddress("H.rb.raster.fr_ybpm_tar", &H_rb_raster_fr_ybpm_tar, &b_H_rb_raster_fr_ybpm_tar);
   iChain->SetBranchAddress("H.react.x", &H_react_x, &b_H_react_x);
   iChain->SetBranchAddress("H.react.y", &H_react_y, &b_H_react_y);
   iChain->SetBranchAddress("H.react.z", &H_react_z, &b_H_react_z);
   iChain->SetBranchAddress("P.aero.npeSum", &P_aero_npeSum, &b_P_aero_npeSum);
   iChain->SetBranchAddress("P.cal.eprtrack", &P_cal_eprtrack, &b_P_cal_eprtrack);
   iChain->SetBranchAddress("P.cal.eprtracknorm", &P_cal_eprtracknorm, &b_P_cal_eprtracknorm);
   iChain->SetBranchAddress("P.cal.etot", &P_cal_etot, &b_P_cal_etot);
   iChain->SetBranchAddress("P.cal.etotnorm", &P_cal_etotnorm, &b_P_cal_etotnorm);
   iChain->SetBranchAddress("P.cal.etottracknorm", &P_cal_etottracknorm, &b_P_cal_etottracknorm);
   iChain->SetBranchAddress("P.cal.etracknorm", &P_cal_etracknorm, &b_P_cal_etracknorm);
   iChain->SetBranchAddress("P.cal.pr.eplane", &P_cal_pr_eplane, &b_P_cal_pr_eplane);
   iChain->SetBranchAddress("P.dc.ntrack", &P_dc_ntrack, &b_P_dc_ntrack);
   iChain->SetBranchAddress("P.dc.x_fp", &P_dc_x_fp, &b_P_dc_x_fp);
   iChain->SetBranchAddress("P.dc.xp_fp", &P_dc_xp_fp, &b_P_dc_xp_fp);
   iChain->SetBranchAddress("P.dc.y_fp", &P_dc_y_fp, &b_P_dc_y_fp);
   iChain->SetBranchAddress("P.dc.yp_fp", &P_dc_yp_fp, &b_P_dc_yp_fp);
   iChain->SetBranchAddress("P.extcor.xsieve", &P_extcor_xsieve, &b_P_extcor_xsieve);
   iChain->SetBranchAddress("P.extcor.ysieve", &P_extcor_ysieve, &b_P_extcor_ysieve);
   iChain->SetBranchAddress("P.gtr.beta", &P_gtr_beta, &b_P_gtr_beta);
   iChain->SetBranchAddress("P.gtr.dp", &P_gtr_dp, &b_P_gtr_dp);
   iChain->SetBranchAddress("P.gtr.index", &P_gtr_index, &b_P_gtr_index);
   iChain->SetBranchAddress("P.gtr.ok", &P_gtr_ok, &b_P_gtr_ok);
   iChain->SetBranchAddress("P.gtr.p", &P_gtr_p, &b_P_gtr_p);
   iChain->SetBranchAddress("P.gtr.ph", &P_gtr_ph, &b_P_gtr_ph);
   iChain->SetBranchAddress("P.gtr.px", &P_gtr_px, &b_P_gtr_px);
   iChain->SetBranchAddress("P.gtr.py", &P_gtr_py, &b_P_gtr_py);
   iChain->SetBranchAddress("P.gtr.pz", &P_gtr_pz, &b_P_gtr_pz);
   iChain->SetBranchAddress("P.gtr.th", &P_gtr_th, &b_P_gtr_th);
   iChain->SetBranchAddress("P.gtr.x", &P_gtr_x, &b_P_gtr_x);
   iChain->SetBranchAddress("P.gtr.y", &P_gtr_y, &b_P_gtr_y);
   iChain->SetBranchAddress("P.hgcer.npeSum", &P_hgcer_npeSum, &b_P_hgcer_npeSum);
   iChain->SetBranchAddress("P.hod.beta", &P_hod_beta, &b_P_hod_beta);
   iChain->SetBranchAddress("P.hod.betachisqnotrack", &P_hod_betachisqnotrack, &b_P_hod_betachisqnotrack);
   iChain->SetBranchAddress("P.hod.betanotrack", &P_hod_betanotrack, &b_P_hod_betanotrack);
   iChain->SetBranchAddress("P.hod.fpHitsTime", &P_hod_fpHitsTime, &b_P_hod_fpHitsTime);
   iChain->SetBranchAddress("P.hod.goodscinhit", &P_hod_goodscinhit, &b_P_hod_goodscinhit);
   iChain->SetBranchAddress("P.hod.starttime", &P_hod_starttime, &b_P_hod_starttime);
   iChain->SetBranchAddress("P.kin.secondary.Erecoil", &P_kin_secondary_Erecoil, &b_P_kin_secondary_Erecoil);
   iChain->SetBranchAddress("P.kin.secondary.MandelS", &P_kin_secondary_MandelS, &b_P_kin_secondary_MandelS);
   iChain->SetBranchAddress("P.kin.secondary.MandelT", &P_kin_secondary_MandelT, &b_P_kin_secondary_MandelT);
   iChain->SetBranchAddress("P.kin.secondary.MandelU", &P_kin_secondary_MandelU, &b_P_kin_secondary_MandelU);
   iChain->SetBranchAddress("P.kin.secondary.Mrecoil", &P_kin_secondary_Mrecoil, &b_P_kin_secondary_Mrecoil);
   iChain->SetBranchAddress("P.kin.secondary.Prec_x", &P_kin_secondary_Prec_x, &b_P_kin_secondary_Prec_x);
   iChain->SetBranchAddress("P.kin.secondary.Prec_y", &P_kin_secondary_Prec_y, &b_P_kin_secondary_Prec_y);
   iChain->SetBranchAddress("P.kin.secondary.Prec_z", &P_kin_secondary_Prec_z, &b_P_kin_secondary_Prec_z);
   iChain->SetBranchAddress("P.kin.secondary.emiss", &P_kin_secondary_emiss, &b_P_kin_secondary_emiss);
   iChain->SetBranchAddress("P.kin.secondary.emiss_nuc", &P_kin_secondary_emiss_nuc, &b_P_kin_secondary_emiss_nuc);
   iChain->SetBranchAddress("P.kin.secondary.ph_bq", &P_kin_secondary_ph_bq, &b_P_kin_secondary_ph_bq);
   iChain->SetBranchAddress("P.kin.secondary.ph_xq", &P_kin_secondary_ph_xq, &b_P_kin_secondary_ph_xq);
   iChain->SetBranchAddress("P.kin.secondary.phb_cm", &P_kin_secondary_phb_cm, &b_P_kin_secondary_phb_cm);
   iChain->SetBranchAddress("P.kin.secondary.phx_cm", &P_kin_secondary_phx_cm, &b_P_kin_secondary_phx_cm);
   iChain->SetBranchAddress("P.kin.secondary.pmiss", &P_kin_secondary_pmiss, &b_P_kin_secondary_pmiss);
   iChain->SetBranchAddress("P.kin.secondary.pmiss_x", &P_kin_secondary_pmiss_x, &b_P_kin_secondary_pmiss_x);
   iChain->SetBranchAddress("P.kin.secondary.pmiss_y", &P_kin_secondary_pmiss_y, &b_P_kin_secondary_pmiss_y);
   iChain->SetBranchAddress("P.kin.secondary.pmiss_z", &P_kin_secondary_pmiss_z, &b_P_kin_secondary_pmiss_z);
   iChain->SetBranchAddress("P.kin.secondary.px_cm", &P_kin_secondary_px_cm, &b_P_kin_secondary_px_cm);
   iChain->SetBranchAddress("P.kin.secondary.t_tot_cm", &P_kin_secondary_t_tot_cm, &b_P_kin_secondary_t_tot_cm);
   iChain->SetBranchAddress("P.kin.secondary.tb", &P_kin_secondary_tb, &b_P_kin_secondary_tb);
   iChain->SetBranchAddress("P.kin.secondary.tb_cm", &P_kin_secondary_tb_cm, &b_P_kin_secondary_tb_cm);
   iChain->SetBranchAddress("P.kin.secondary.th_bq", &P_kin_secondary_th_bq, &b_P_kin_secondary_th_bq);
   iChain->SetBranchAddress("P.kin.secondary.th_xq", &P_kin_secondary_th_xq, &b_P_kin_secondary_th_xq);
   iChain->SetBranchAddress("P.kin.secondary.thb_cm", &P_kin_secondary_thb_cm, &b_P_kin_secondary_thb_cm);
   iChain->SetBranchAddress("P.kin.secondary.thx_cm", &P_kin_secondary_thx_cm, &b_P_kin_secondary_thx_cm);
   iChain->SetBranchAddress("P.kin.secondary.tx", &P_kin_secondary_tx, &b_P_kin_secondary_tx);
   iChain->SetBranchAddress("P.kin.secondary.tx_cm", &P_kin_secondary_tx_cm, &b_P_kin_secondary_tx_cm);
   iChain->SetBranchAddress("P.kin.secondary.xangle", &P_kin_secondary_xangle, &b_P_kin_secondary_xangle);
   iChain->SetBranchAddress("P.ngcer.npeSum", &P_ngcer_npeSum, &b_P_ngcer_npeSum);
   iChain->SetBranchAddress("P.react.z", &P_react_z, &b_P_react_z);
   iChain->SetBranchAddress("T.coin.h1T_tdcMultiplicity", &T_coin_h1T_tdcMultiplicity, &b_T_coin_h1T_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.h1T_tdcTime", &T_coin_h1T_tdcTime, &b_T_coin_h1T_tdcTime);
   iChain->SetBranchAddress("T.coin.h1T_tdcTimeRaw", &T_coin_h1T_tdcTimeRaw, &b_T_coin_h1T_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.h1X_tdcMultiplicity", &T_coin_h1X_tdcMultiplicity, &b_T_coin_h1X_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.h1X_tdcTime", &T_coin_h1X_tdcTime, &b_T_coin_h1X_tdcTime);
   iChain->SetBranchAddress("T.coin.h1X_tdcTimeRaw", &T_coin_h1X_tdcTimeRaw, &b_T_coin_h1X_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.h1Y_tdcMultiplicity", &T_coin_h1Y_tdcMultiplicity, &b_T_coin_h1Y_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.h1Y_tdcTime", &T_coin_h1Y_tdcTime, &b_T_coin_h1Y_tdcTime);
   iChain->SetBranchAddress("T.coin.h1Y_tdcTimeRaw", &T_coin_h1Y_tdcTimeRaw, &b_T_coin_h1Y_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.h2T_tdcMultiplicity", &T_coin_h2T_tdcMultiplicity, &b_T_coin_h2T_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.h2T_tdcTime", &T_coin_h2T_tdcTime, &b_T_coin_h2T_tdcTime);
   iChain->SetBranchAddress("T.coin.h2T_tdcTimeRaw", &T_coin_h2T_tdcTimeRaw, &b_T_coin_h2T_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.h2X_tdcMultiplicity", &T_coin_h2X_tdcMultiplicity, &b_T_coin_h2X_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.h2X_tdcTime", &T_coin_h2X_tdcTime, &b_T_coin_h2X_tdcTime);
   iChain->SetBranchAddress("T.coin.h2X_tdcTimeRaw", &T_coin_h2X_tdcTimeRaw, &b_T_coin_h2X_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.h2Y_tdcMultiplicity", &T_coin_h2Y_tdcMultiplicity, &b_T_coin_h2Y_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.h2Y_tdcTime", &T_coin_h2Y_tdcTime, &b_T_coin_h2Y_tdcTime);
   iChain->SetBranchAddress("T.coin.h2Y_tdcTimeRaw", &T_coin_h2Y_tdcTimeRaw, &b_T_coin_h2Y_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hAER_adcMultiplicity", &T_coin_hAER_adcMultiplicity, &b_T_coin_hAER_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hAER_adcPed", &T_coin_hAER_adcPed, &b_T_coin_hAER_adcPed);
   iChain->SetBranchAddress("T.coin.hAER_adcPedRaw", &T_coin_hAER_adcPedRaw, &b_T_coin_hAER_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hAER_adcPulseAmp", &T_coin_hAER_adcPulseAmp, &b_T_coin_hAER_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hAER_adcPulseAmpRaw", &T_coin_hAER_adcPulseAmpRaw, &b_T_coin_hAER_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hAER_adcPulseInt", &T_coin_hAER_adcPulseInt, &b_T_coin_hAER_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hAER_adcPulseIntRaw", &T_coin_hAER_adcPulseIntRaw, &b_T_coin_hAER_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hAER_adcPulseTime", &T_coin_hAER_adcPulseTime, &b_T_coin_hAER_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hAER_adcPulseTimeRaw", &T_coin_hAER_adcPulseTimeRaw, &b_T_coin_hAER_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hASUM_adcMultiplicity", &T_coin_hASUM_adcMultiplicity, &b_T_coin_hASUM_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hASUM_adcPed", &T_coin_hASUM_adcPed, &b_T_coin_hASUM_adcPed);
   iChain->SetBranchAddress("T.coin.hASUM_adcPedRaw", &T_coin_hASUM_adcPedRaw, &b_T_coin_hASUM_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hASUM_adcPulseAmp", &T_coin_hASUM_adcPulseAmp, &b_T_coin_hASUM_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hASUM_adcPulseAmpRaw", &T_coin_hASUM_adcPulseAmpRaw, &b_T_coin_hASUM_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hASUM_adcPulseInt", &T_coin_hASUM_adcPulseInt, &b_T_coin_hASUM_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hASUM_adcPulseIntRaw", &T_coin_hASUM_adcPulseIntRaw, &b_T_coin_hASUM_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hASUM_adcPulseTime", &T_coin_hASUM_adcPulseTime, &b_T_coin_hASUM_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hASUM_adcPulseTimeRaw", &T_coin_hASUM_adcPulseTimeRaw, &b_T_coin_hASUM_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hASUM_tdcMultiplicity", &T_coin_hASUM_tdcMultiplicity, &b_T_coin_hASUM_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hASUM_tdcTime", &T_coin_hASUM_tdcTime, &b_T_coin_hASUM_tdcTime);
   iChain->SetBranchAddress("T.coin.hASUM_tdcTimeRaw", &T_coin_hASUM_tdcTimeRaw, &b_T_coin_hASUM_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hBSUM_adcMultiplicity", &T_coin_hBSUM_adcMultiplicity, &b_T_coin_hBSUM_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPed", &T_coin_hBSUM_adcPed, &b_T_coin_hBSUM_adcPed);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPedRaw", &T_coin_hBSUM_adcPedRaw, &b_T_coin_hBSUM_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPulseAmp", &T_coin_hBSUM_adcPulseAmp, &b_T_coin_hBSUM_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPulseAmpRaw", &T_coin_hBSUM_adcPulseAmpRaw, &b_T_coin_hBSUM_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPulseInt", &T_coin_hBSUM_adcPulseInt, &b_T_coin_hBSUM_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPulseIntRaw", &T_coin_hBSUM_adcPulseIntRaw, &b_T_coin_hBSUM_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPulseTime", &T_coin_hBSUM_adcPulseTime, &b_T_coin_hBSUM_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hBSUM_adcPulseTimeRaw", &T_coin_hBSUM_adcPulseTimeRaw, &b_T_coin_hBSUM_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hBSUM_tdcMultiplicity", &T_coin_hBSUM_tdcMultiplicity, &b_T_coin_hBSUM_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hBSUM_tdcTime", &T_coin_hBSUM_tdcTime, &b_T_coin_hBSUM_tdcTime);
   iChain->SetBranchAddress("T.coin.hBSUM_tdcTimeRaw", &T_coin_hBSUM_tdcTimeRaw, &b_T_coin_hBSUM_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hCER_adcMultiplicity", &T_coin_hCER_adcMultiplicity, &b_T_coin_hCER_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hCER_adcPed", &T_coin_hCER_adcPed, &b_T_coin_hCER_adcPed);
   iChain->SetBranchAddress("T.coin.hCER_adcPedRaw", &T_coin_hCER_adcPedRaw, &b_T_coin_hCER_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hCER_adcPulseAmp", &T_coin_hCER_adcPulseAmp, &b_T_coin_hCER_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hCER_adcPulseAmpRaw", &T_coin_hCER_adcPulseAmpRaw, &b_T_coin_hCER_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hCER_adcPulseInt", &T_coin_hCER_adcPulseInt, &b_T_coin_hCER_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hCER_adcPulseIntRaw", &T_coin_hCER_adcPulseIntRaw, &b_T_coin_hCER_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hCER_adcPulseTime", &T_coin_hCER_adcPulseTime, &b_T_coin_hCER_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hCER_adcPulseTimeRaw", &T_coin_hCER_adcPulseTimeRaw, &b_T_coin_hCER_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hCER_tdcMultiplicity", &T_coin_hCER_tdcMultiplicity, &b_T_coin_hCER_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hCER_tdcTime", &T_coin_hCER_tdcTime, &b_T_coin_hCER_tdcTime);
   iChain->SetBranchAddress("T.coin.hCER_tdcTimeRaw", &T_coin_hCER_tdcTimeRaw, &b_T_coin_hCER_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hCSUM_adcMultiplicity", &T_coin_hCSUM_adcMultiplicity, &b_T_coin_hCSUM_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPed", &T_coin_hCSUM_adcPed, &b_T_coin_hCSUM_adcPed);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPedRaw", &T_coin_hCSUM_adcPedRaw, &b_T_coin_hCSUM_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPulseAmp", &T_coin_hCSUM_adcPulseAmp, &b_T_coin_hCSUM_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPulseAmpRaw", &T_coin_hCSUM_adcPulseAmpRaw, &b_T_coin_hCSUM_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPulseInt", &T_coin_hCSUM_adcPulseInt, &b_T_coin_hCSUM_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPulseIntRaw", &T_coin_hCSUM_adcPulseIntRaw, &b_T_coin_hCSUM_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPulseTime", &T_coin_hCSUM_adcPulseTime, &b_T_coin_hCSUM_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hCSUM_adcPulseTimeRaw", &T_coin_hCSUM_adcPulseTimeRaw, &b_T_coin_hCSUM_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hCSUM_tdcMultiplicity", &T_coin_hCSUM_tdcMultiplicity, &b_T_coin_hCSUM_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hCSUM_tdcTime", &T_coin_hCSUM_tdcTime, &b_T_coin_hCSUM_tdcTime);
   iChain->SetBranchAddress("T.coin.hCSUM_tdcTimeRaw", &T_coin_hCSUM_tdcTimeRaw, &b_T_coin_hCSUM_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hDCREF1_tdcMultiplicity", &T_coin_hDCREF1_tdcMultiplicity, &b_T_coin_hDCREF1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hDCREF1_tdcTime", &T_coin_hDCREF1_tdcTime, &b_T_coin_hDCREF1_tdcTime);
   iChain->SetBranchAddress("T.coin.hDCREF1_tdcTimeRaw", &T_coin_hDCREF1_tdcTimeRaw, &b_T_coin_hDCREF1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hDCREF2_tdcMultiplicity", &T_coin_hDCREF2_tdcMultiplicity, &b_T_coin_hDCREF2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hDCREF2_tdcTime", &T_coin_hDCREF2_tdcTime, &b_T_coin_hDCREF2_tdcTime);
   iChain->SetBranchAddress("T.coin.hDCREF2_tdcTimeRaw", &T_coin_hDCREF2_tdcTimeRaw, &b_T_coin_hDCREF2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hDCREF3_tdcMultiplicity", &T_coin_hDCREF3_tdcMultiplicity, &b_T_coin_hDCREF3_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hDCREF3_tdcTime", &T_coin_hDCREF3_tdcTime, &b_T_coin_hDCREF3_tdcTime);
   iChain->SetBranchAddress("T.coin.hDCREF3_tdcTimeRaw", &T_coin_hDCREF3_tdcTimeRaw, &b_T_coin_hDCREF3_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hDCREF4_tdcMultiplicity", &T_coin_hDCREF4_tdcMultiplicity, &b_T_coin_hDCREF4_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hDCREF4_tdcTime", &T_coin_hDCREF4_tdcTime, &b_T_coin_hDCREF4_tdcTime);
   iChain->SetBranchAddress("T.coin.hDCREF4_tdcTimeRaw", &T_coin_hDCREF4_tdcTimeRaw, &b_T_coin_hDCREF4_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hDCREF5_tdcMultiplicity", &T_coin_hDCREF5_tdcMultiplicity, &b_T_coin_hDCREF5_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hDCREF5_tdcTime", &T_coin_hDCREF5_tdcTime, &b_T_coin_hDCREF5_tdcTime);
   iChain->SetBranchAddress("T.coin.hDCREF5_tdcTimeRaw", &T_coin_hDCREF5_tdcTimeRaw, &b_T_coin_hDCREF5_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hDSUM_adcMultiplicity", &T_coin_hDSUM_adcMultiplicity, &b_T_coin_hDSUM_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPed", &T_coin_hDSUM_adcPed, &b_T_coin_hDSUM_adcPed);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPedRaw", &T_coin_hDSUM_adcPedRaw, &b_T_coin_hDSUM_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPulseAmp", &T_coin_hDSUM_adcPulseAmp, &b_T_coin_hDSUM_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPulseAmpRaw", &T_coin_hDSUM_adcPulseAmpRaw, &b_T_coin_hDSUM_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPulseInt", &T_coin_hDSUM_adcPulseInt, &b_T_coin_hDSUM_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPulseIntRaw", &T_coin_hDSUM_adcPulseIntRaw, &b_T_coin_hDSUM_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPulseTime", &T_coin_hDSUM_adcPulseTime, &b_T_coin_hDSUM_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hDSUM_adcPulseTimeRaw", &T_coin_hDSUM_adcPulseTimeRaw, &b_T_coin_hDSUM_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hDSUM_tdcMultiplicity", &T_coin_hDSUM_tdcMultiplicity, &b_T_coin_hDSUM_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hDSUM_tdcTime", &T_coin_hDSUM_tdcTime, &b_T_coin_hDSUM_tdcTime);
   iChain->SetBranchAddress("T.coin.hDSUM_tdcTimeRaw", &T_coin_hDSUM_tdcTimeRaw, &b_T_coin_hDSUM_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEDTM_tdcMultiplicity", &T_coin_hEDTM_tdcMultiplicity, &b_T_coin_hEDTM_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEDTM_tdcTime", &T_coin_hEDTM_tdcTime, &b_T_coin_hEDTM_tdcTime);
   iChain->SetBranchAddress("T.coin.hEDTM_tdcTimeRaw", &T_coin_hEDTM_tdcTimeRaw, &b_T_coin_hEDTM_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC1_tdcMultiplicity", &T_coin_hEL_CLEAN_ROC1_tdcMultiplicity, &b_T_coin_hEL_CLEAN_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC1_tdcTime", &T_coin_hEL_CLEAN_ROC1_tdcTime, &b_T_coin_hEL_CLEAN_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC1_tdcTimeRaw", &T_coin_hEL_CLEAN_ROC1_tdcTimeRaw, &b_T_coin_hEL_CLEAN_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC2_tdcMultiplicity", &T_coin_hEL_CLEAN_ROC2_tdcMultiplicity, &b_T_coin_hEL_CLEAN_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC2_tdcTime", &T_coin_hEL_CLEAN_ROC2_tdcTime, &b_T_coin_hEL_CLEAN_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_CLEAN_ROC2_tdcTimeRaw", &T_coin_hEL_CLEAN_ROC2_tdcTimeRaw, &b_T_coin_hEL_CLEAN_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_HI_ROC1_tdcMultiplicity", &T_coin_hEL_HI_ROC1_tdcMultiplicity, &b_T_coin_hEL_HI_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_HI_ROC1_tdcTime", &T_coin_hEL_HI_ROC1_tdcTime, &b_T_coin_hEL_HI_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_HI_ROC1_tdcTimeRaw", &T_coin_hEL_HI_ROC1_tdcTimeRaw, &b_T_coin_hEL_HI_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_HI_ROC2_tdcMultiplicity", &T_coin_hEL_HI_ROC2_tdcMultiplicity, &b_T_coin_hEL_HI_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_HI_ROC2_tdcTime", &T_coin_hEL_HI_ROC2_tdcTime, &b_T_coin_hEL_HI_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_HI_ROC2_tdcTimeRaw", &T_coin_hEL_HI_ROC2_tdcTimeRaw, &b_T_coin_hEL_HI_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC1_tdcMultiplicity", &T_coin_hEL_LO_LO_ROC1_tdcMultiplicity, &b_T_coin_hEL_LO_LO_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC1_tdcTime", &T_coin_hEL_LO_LO_ROC1_tdcTime, &b_T_coin_hEL_LO_LO_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC1_tdcTimeRaw", &T_coin_hEL_LO_LO_ROC1_tdcTimeRaw, &b_T_coin_hEL_LO_LO_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC2_tdcMultiplicity", &T_coin_hEL_LO_LO_ROC2_tdcMultiplicity, &b_T_coin_hEL_LO_LO_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC2_tdcTime", &T_coin_hEL_LO_LO_ROC2_tdcTime, &b_T_coin_hEL_LO_LO_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_LO_LO_ROC2_tdcTimeRaw", &T_coin_hEL_LO_LO_ROC2_tdcTimeRaw, &b_T_coin_hEL_LO_LO_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_LO_ROC1_tdcMultiplicity", &T_coin_hEL_LO_ROC1_tdcMultiplicity, &b_T_coin_hEL_LO_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_LO_ROC1_tdcTime", &T_coin_hEL_LO_ROC1_tdcTime, &b_T_coin_hEL_LO_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_LO_ROC1_tdcTimeRaw", &T_coin_hEL_LO_ROC1_tdcTimeRaw, &b_T_coin_hEL_LO_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_LO_ROC2_tdcMultiplicity", &T_coin_hEL_LO_ROC2_tdcMultiplicity, &b_T_coin_hEL_LO_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_LO_ROC2_tdcTime", &T_coin_hEL_LO_ROC2_tdcTime, &b_T_coin_hEL_LO_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_LO_ROC2_tdcTimeRaw", &T_coin_hEL_LO_ROC2_tdcTimeRaw, &b_T_coin_hEL_LO_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_REAL_ROC1_tdcMultiplicity", &T_coin_hEL_REAL_ROC1_tdcMultiplicity, &b_T_coin_hEL_REAL_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_REAL_ROC1_tdcTime", &T_coin_hEL_REAL_ROC1_tdcTime, &b_T_coin_hEL_REAL_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_REAL_ROC1_tdcTimeRaw", &T_coin_hEL_REAL_ROC1_tdcTimeRaw, &b_T_coin_hEL_REAL_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hEL_REAL_ROC2_tdcMultiplicity", &T_coin_hEL_REAL_ROC2_tdcMultiplicity, &b_T_coin_hEL_REAL_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hEL_REAL_ROC2_tdcTime", &T_coin_hEL_REAL_ROC2_tdcTime, &b_T_coin_hEL_REAL_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hEL_REAL_ROC2_tdcTimeRaw", &T_coin_hEL_REAL_ROC2_tdcTimeRaw, &b_T_coin_hEL_REAL_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcMultiplicity", &T_coin_hFADC_TREF_ROC1_adcMultiplicity, &b_T_coin_hFADC_TREF_ROC1_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPed", &T_coin_hFADC_TREF_ROC1_adcPed, &b_T_coin_hFADC_TREF_ROC1_adcPed);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPedRaw", &T_coin_hFADC_TREF_ROC1_adcPedRaw, &b_T_coin_hFADC_TREF_ROC1_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseAmp", &T_coin_hFADC_TREF_ROC1_adcPulseAmp, &b_T_coin_hFADC_TREF_ROC1_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseAmpRaw", &T_coin_hFADC_TREF_ROC1_adcPulseAmpRaw, &b_T_coin_hFADC_TREF_ROC1_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseInt", &T_coin_hFADC_TREF_ROC1_adcPulseInt, &b_T_coin_hFADC_TREF_ROC1_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseIntRaw", &T_coin_hFADC_TREF_ROC1_adcPulseIntRaw, &b_T_coin_hFADC_TREF_ROC1_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseTime", &T_coin_hFADC_TREF_ROC1_adcPulseTime, &b_T_coin_hFADC_TREF_ROC1_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hFADC_TREF_ROC1_adcPulseTimeRaw", &T_coin_hFADC_TREF_ROC1_adcPulseTimeRaw, &b_T_coin_hFADC_TREF_ROC1_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hHODO_RF_tdcMultiplicity", &T_coin_hHODO_RF_tdcMultiplicity, &b_T_coin_hHODO_RF_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hHODO_RF_tdcTime", &T_coin_hHODO_RF_tdcTime, &b_T_coin_hHODO_RF_tdcTime);
   iChain->SetBranchAddress("T.coin.hHODO_RF_tdcTimeRaw", &T_coin_hHODO_RF_tdcTimeRaw, &b_T_coin_hHODO_RF_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE100_ROC1_tdcMultiplicity", &T_coin_hPRE100_ROC1_tdcMultiplicity, &b_T_coin_hPRE100_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE100_ROC1_tdcTime", &T_coin_hPRE100_ROC1_tdcTime, &b_T_coin_hPRE100_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE100_ROC1_tdcTimeRaw", &T_coin_hPRE100_ROC1_tdcTimeRaw, &b_T_coin_hPRE100_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE100_ROC2_tdcMultiplicity", &T_coin_hPRE100_ROC2_tdcMultiplicity, &b_T_coin_hPRE100_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE100_ROC2_tdcTime", &T_coin_hPRE100_ROC2_tdcTime, &b_T_coin_hPRE100_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE100_ROC2_tdcTimeRaw", &T_coin_hPRE100_ROC2_tdcTimeRaw, &b_T_coin_hPRE100_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE150_ROC1_tdcMultiplicity", &T_coin_hPRE150_ROC1_tdcMultiplicity, &b_T_coin_hPRE150_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE150_ROC1_tdcTime", &T_coin_hPRE150_ROC1_tdcTime, &b_T_coin_hPRE150_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE150_ROC1_tdcTimeRaw", &T_coin_hPRE150_ROC1_tdcTimeRaw, &b_T_coin_hPRE150_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE150_ROC2_tdcMultiplicity", &T_coin_hPRE150_ROC2_tdcMultiplicity, &b_T_coin_hPRE150_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE150_ROC2_tdcTime", &T_coin_hPRE150_ROC2_tdcTime, &b_T_coin_hPRE150_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE150_ROC2_tdcTimeRaw", &T_coin_hPRE150_ROC2_tdcTimeRaw, &b_T_coin_hPRE150_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE200_ROC1_tdcMultiplicity", &T_coin_hPRE200_ROC1_tdcMultiplicity, &b_T_coin_hPRE200_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE200_ROC1_tdcTime", &T_coin_hPRE200_ROC1_tdcTime, &b_T_coin_hPRE200_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE200_ROC1_tdcTimeRaw", &T_coin_hPRE200_ROC1_tdcTimeRaw, &b_T_coin_hPRE200_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE200_ROC2_tdcMultiplicity", &T_coin_hPRE200_ROC2_tdcMultiplicity, &b_T_coin_hPRE200_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE200_ROC2_tdcTime", &T_coin_hPRE200_ROC2_tdcTime, &b_T_coin_hPRE200_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE200_ROC2_tdcTimeRaw", &T_coin_hPRE200_ROC2_tdcTimeRaw, &b_T_coin_hPRE200_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE40_ROC1_tdcMultiplicity", &T_coin_hPRE40_ROC1_tdcMultiplicity, &b_T_coin_hPRE40_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE40_ROC1_tdcTime", &T_coin_hPRE40_ROC1_tdcTime, &b_T_coin_hPRE40_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE40_ROC1_tdcTimeRaw", &T_coin_hPRE40_ROC1_tdcTimeRaw, &b_T_coin_hPRE40_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRE40_ROC2_tdcMultiplicity", &T_coin_hPRE40_ROC2_tdcMultiplicity, &b_T_coin_hPRE40_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRE40_ROC2_tdcTime", &T_coin_hPRE40_ROC2_tdcTime, &b_T_coin_hPRE40_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRE40_ROC2_tdcTimeRaw", &T_coin_hPRE40_ROC2_tdcTimeRaw, &b_T_coin_hPRE40_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRHI_tdcMultiplicity", &T_coin_hPRHI_tdcMultiplicity, &b_T_coin_hPRHI_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRHI_tdcTime", &T_coin_hPRHI_tdcTime, &b_T_coin_hPRHI_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRHI_tdcTimeRaw", &T_coin_hPRHI_tdcTimeRaw, &b_T_coin_hPRHI_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPRLO_tdcMultiplicity", &T_coin_hPRLO_tdcMultiplicity, &b_T_coin_hPRLO_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPRLO_tdcTime", &T_coin_hPRLO_tdcTime, &b_T_coin_hPRLO_tdcTime);
   iChain->SetBranchAddress("T.coin.hPRLO_tdcTimeRaw", &T_coin_hPRLO_tdcTimeRaw, &b_T_coin_hPRLO_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcMultiplicity", &T_coin_hPSHWR_adcMultiplicity, &b_T_coin_hPSHWR_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPed", &T_coin_hPSHWR_adcPed, &b_T_coin_hPSHWR_adcPed);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPedRaw", &T_coin_hPSHWR_adcPedRaw, &b_T_coin_hPSHWR_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPulseAmp", &T_coin_hPSHWR_adcPulseAmp, &b_T_coin_hPSHWR_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPulseAmpRaw", &T_coin_hPSHWR_adcPulseAmpRaw, &b_T_coin_hPSHWR_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPulseInt", &T_coin_hPSHWR_adcPulseInt, &b_T_coin_hPSHWR_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPulseIntRaw", &T_coin_hPSHWR_adcPulseIntRaw, &b_T_coin_hPSHWR_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPulseTime", &T_coin_hPSHWR_adcPulseTime, &b_T_coin_hPSHWR_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hPSHWR_adcPulseTimeRaw", &T_coin_hPSHWR_adcPulseTimeRaw, &b_T_coin_hPSHWR_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hRF_tdcMultiplicity", &T_coin_hRF_tdcMultiplicity, &b_T_coin_hRF_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hRF_tdcTime", &T_coin_hRF_tdcTime, &b_T_coin_hRF_tdcTime);
   iChain->SetBranchAddress("T.coin.hRF_tdcTimeRaw", &T_coin_hRF_tdcTimeRaw, &b_T_coin_hRF_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hSHWR_adcMultiplicity", &T_coin_hSHWR_adcMultiplicity, &b_T_coin_hSHWR_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPed", &T_coin_hSHWR_adcPed, &b_T_coin_hSHWR_adcPed);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPedRaw", &T_coin_hSHWR_adcPedRaw, &b_T_coin_hSHWR_adcPedRaw);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPulseAmp", &T_coin_hSHWR_adcPulseAmp, &b_T_coin_hSHWR_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPulseAmpRaw", &T_coin_hSHWR_adcPulseAmpRaw, &b_T_coin_hSHWR_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPulseInt", &T_coin_hSHWR_adcPulseInt, &b_T_coin_hSHWR_adcPulseInt);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPulseIntRaw", &T_coin_hSHWR_adcPulseIntRaw, &b_T_coin_hSHWR_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPulseTime", &T_coin_hSHWR_adcPulseTime, &b_T_coin_hSHWR_adcPulseTime);
   iChain->SetBranchAddress("T.coin.hSHWR_adcPulseTimeRaw", &T_coin_hSHWR_adcPulseTimeRaw, &b_T_coin_hSHWR_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.hSHWR_tdcMultiplicity", &T_coin_hSHWR_tdcMultiplicity, &b_T_coin_hSHWR_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hSHWR_tdcTime", &T_coin_hSHWR_tdcTime, &b_T_coin_hSHWR_tdcTime);
   iChain->SetBranchAddress("T.coin.hSHWR_tdcTimeRaw", &T_coin_hSHWR_tdcTimeRaw, &b_T_coin_hSHWR_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hSTOF_ROC1_tdcMultiplicity", &T_coin_hSTOF_ROC1_tdcMultiplicity, &b_T_coin_hSTOF_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hSTOF_ROC1_tdcTime", &T_coin_hSTOF_ROC1_tdcTime, &b_T_coin_hSTOF_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hSTOF_ROC1_tdcTimeRaw", &T_coin_hSTOF_ROC1_tdcTimeRaw, &b_T_coin_hSTOF_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hSTOF_ROC2_tdcMultiplicity", &T_coin_hSTOF_ROC2_tdcMultiplicity, &b_T_coin_hSTOF_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hSTOF_ROC2_tdcTime", &T_coin_hSTOF_ROC2_tdcTime, &b_T_coin_hSTOF_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hSTOF_ROC2_tdcTimeRaw", &T_coin_hSTOF_ROC2_tdcTimeRaw, &b_T_coin_hSTOF_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hT1_tdcMultiplicity", &T_coin_hT1_tdcMultiplicity, &b_T_coin_hT1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hT1_tdcTime", &T_coin_hT1_tdcTime, &b_T_coin_hT1_tdcTime);
   iChain->SetBranchAddress("T.coin.hT1_tdcTimeRaw", &T_coin_hT1_tdcTimeRaw, &b_T_coin_hT1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hT2_tdcMultiplicity", &T_coin_hT2_tdcMultiplicity, &b_T_coin_hT2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hT2_tdcTime", &T_coin_hT2_tdcTime, &b_T_coin_hT2_tdcTime);
   iChain->SetBranchAddress("T.coin.hT2_tdcTimeRaw", &T_coin_hT2_tdcTimeRaw, &b_T_coin_hT2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG1_ROC1_tdcMultiplicity", &T_coin_hTRIG1_ROC1_tdcMultiplicity, &b_T_coin_hTRIG1_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG1_ROC1_tdcTime", &T_coin_hTRIG1_ROC1_tdcTime, &b_T_coin_hTRIG1_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG1_ROC1_tdcTimeRaw", &T_coin_hTRIG1_ROC1_tdcTimeRaw, &b_T_coin_hTRIG1_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG1_ROC2_tdcMultiplicity", &T_coin_hTRIG1_ROC2_tdcMultiplicity, &b_T_coin_hTRIG1_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG1_ROC2_tdcTime", &T_coin_hTRIG1_ROC2_tdcTime, &b_T_coin_hTRIG1_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG1_ROC2_tdcTimeRaw", &T_coin_hTRIG1_ROC2_tdcTimeRaw, &b_T_coin_hTRIG1_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG2_ROC1_tdcMultiplicity", &T_coin_hTRIG2_ROC1_tdcMultiplicity, &b_T_coin_hTRIG2_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG2_ROC1_tdcTime", &T_coin_hTRIG2_ROC1_tdcTime, &b_T_coin_hTRIG2_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG2_ROC1_tdcTimeRaw", &T_coin_hTRIG2_ROC1_tdcTimeRaw, &b_T_coin_hTRIG2_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG2_ROC2_tdcMultiplicity", &T_coin_hTRIG2_ROC2_tdcMultiplicity, &b_T_coin_hTRIG2_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG2_ROC2_tdcTime", &T_coin_hTRIG2_ROC2_tdcTime, &b_T_coin_hTRIG2_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG2_ROC2_tdcTimeRaw", &T_coin_hTRIG2_ROC2_tdcTimeRaw, &b_T_coin_hTRIG2_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG3_ROC1_tdcMultiplicity", &T_coin_hTRIG3_ROC1_tdcMultiplicity, &b_T_coin_hTRIG3_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG3_ROC1_tdcTime", &T_coin_hTRIG3_ROC1_tdcTime, &b_T_coin_hTRIG3_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG3_ROC1_tdcTimeRaw", &T_coin_hTRIG3_ROC1_tdcTimeRaw, &b_T_coin_hTRIG3_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG3_ROC2_tdcMultiplicity", &T_coin_hTRIG3_ROC2_tdcMultiplicity, &b_T_coin_hTRIG3_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG3_ROC2_tdcTime", &T_coin_hTRIG3_ROC2_tdcTime, &b_T_coin_hTRIG3_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG3_ROC2_tdcTimeRaw", &T_coin_hTRIG3_ROC2_tdcTimeRaw, &b_T_coin_hTRIG3_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG4_ROC1_tdcMultiplicity", &T_coin_hTRIG4_ROC1_tdcMultiplicity, &b_T_coin_hTRIG4_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG4_ROC1_tdcTime", &T_coin_hTRIG4_ROC1_tdcTime, &b_T_coin_hTRIG4_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG4_ROC1_tdcTimeRaw", &T_coin_hTRIG4_ROC1_tdcTimeRaw, &b_T_coin_hTRIG4_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG4_ROC2_tdcMultiplicity", &T_coin_hTRIG4_ROC2_tdcMultiplicity, &b_T_coin_hTRIG4_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG4_ROC2_tdcTime", &T_coin_hTRIG4_ROC2_tdcTime, &b_T_coin_hTRIG4_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG4_ROC2_tdcTimeRaw", &T_coin_hTRIG4_ROC2_tdcTimeRaw, &b_T_coin_hTRIG4_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG5_ROC1_tdcMultiplicity", &T_coin_hTRIG5_ROC1_tdcMultiplicity, &b_T_coin_hTRIG5_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG5_ROC1_tdcTime", &T_coin_hTRIG5_ROC1_tdcTime, &b_T_coin_hTRIG5_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG5_ROC1_tdcTimeRaw", &T_coin_hTRIG5_ROC1_tdcTimeRaw, &b_T_coin_hTRIG5_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG5_ROC2_tdcMultiplicity", &T_coin_hTRIG5_ROC2_tdcMultiplicity, &b_T_coin_hTRIG5_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG5_ROC2_tdcTime", &T_coin_hTRIG5_ROC2_tdcTime, &b_T_coin_hTRIG5_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG5_ROC2_tdcTimeRaw", &T_coin_hTRIG5_ROC2_tdcTimeRaw, &b_T_coin_hTRIG5_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG6_ROC1_tdcMultiplicity", &T_coin_hTRIG6_ROC1_tdcMultiplicity, &b_T_coin_hTRIG6_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG6_ROC1_tdcTime", &T_coin_hTRIG6_ROC1_tdcTime, &b_T_coin_hTRIG6_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG6_ROC1_tdcTimeRaw", &T_coin_hTRIG6_ROC1_tdcTimeRaw, &b_T_coin_hTRIG6_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.hTRIG6_ROC2_tdcMultiplicity", &T_coin_hTRIG6_ROC2_tdcMultiplicity, &b_T_coin_hTRIG6_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.hTRIG6_ROC2_tdcTime", &T_coin_hTRIG6_ROC2_tdcTime, &b_T_coin_hTRIG6_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.hTRIG6_ROC2_tdcTimeRaw", &T_coin_hTRIG6_ROC2_tdcTimeRaw, &b_T_coin_hTRIG6_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.p1T_tdcMultiplicity", &T_coin_p1T_tdcMultiplicity, &b_T_coin_p1T_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.p1T_tdcTime", &T_coin_p1T_tdcTime, &b_T_coin_p1T_tdcTime);
   iChain->SetBranchAddress("T.coin.p1T_tdcTimeRaw", &T_coin_p1T_tdcTimeRaw, &b_T_coin_p1T_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.p1X_tdcMultiplicity", &T_coin_p1X_tdcMultiplicity, &b_T_coin_p1X_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.p1X_tdcTime", &T_coin_p1X_tdcTime, &b_T_coin_p1X_tdcTime);
   iChain->SetBranchAddress("T.coin.p1X_tdcTimeRaw", &T_coin_p1X_tdcTimeRaw, &b_T_coin_p1X_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.p1Y_tdcMultiplicity", &T_coin_p1Y_tdcMultiplicity, &b_T_coin_p1Y_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.p1Y_tdcTime", &T_coin_p1Y_tdcTime, &b_T_coin_p1Y_tdcTime);
   iChain->SetBranchAddress("T.coin.p1Y_tdcTimeRaw", &T_coin_p1Y_tdcTimeRaw, &b_T_coin_p1Y_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.p2T_tdcMultiplicity", &T_coin_p2T_tdcMultiplicity, &b_T_coin_p2T_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.p2T_tdcTime", &T_coin_p2T_tdcTime, &b_T_coin_p2T_tdcTime);
   iChain->SetBranchAddress("T.coin.p2T_tdcTimeRaw", &T_coin_p2T_tdcTimeRaw, &b_T_coin_p2T_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.p2X_tdcMultiplicity", &T_coin_p2X_tdcMultiplicity, &b_T_coin_p2X_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.p2X_tdcTime", &T_coin_p2X_tdcTime, &b_T_coin_p2X_tdcTime);
   iChain->SetBranchAddress("T.coin.p2X_tdcTimeRaw", &T_coin_p2X_tdcTimeRaw, &b_T_coin_p2X_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.p2Y_tdcMultiplicity", &T_coin_p2Y_tdcMultiplicity, &b_T_coin_p2Y_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.p2Y_tdcTime", &T_coin_p2Y_tdcTime, &b_T_coin_p2Y_tdcTime);
   iChain->SetBranchAddress("T.coin.p2Y_tdcTimeRaw", &T_coin_p2Y_tdcTimeRaw, &b_T_coin_p2Y_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pAER_adcMultiplicity", &T_coin_pAER_adcMultiplicity, &b_T_coin_pAER_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pAER_adcPed", &T_coin_pAER_adcPed, &b_T_coin_pAER_adcPed);
   iChain->SetBranchAddress("T.coin.pAER_adcPedRaw", &T_coin_pAER_adcPedRaw, &b_T_coin_pAER_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pAER_adcPulseAmp", &T_coin_pAER_adcPulseAmp, &b_T_coin_pAER_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pAER_adcPulseAmpRaw", &T_coin_pAER_adcPulseAmpRaw, &b_T_coin_pAER_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pAER_adcPulseInt", &T_coin_pAER_adcPulseInt, &b_T_coin_pAER_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pAER_adcPulseIntRaw", &T_coin_pAER_adcPulseIntRaw, &b_T_coin_pAER_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pAER_adcPulseTime", &T_coin_pAER_adcPulseTime, &b_T_coin_pAER_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pAER_adcPulseTimeRaw", &T_coin_pAER_adcPulseTimeRaw, &b_T_coin_pAER_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pAER_tdcMultiplicity", &T_coin_pAER_tdcMultiplicity, &b_T_coin_pAER_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pAER_tdcTime", &T_coin_pAER_tdcTime, &b_T_coin_pAER_tdcTime);
   iChain->SetBranchAddress("T.coin.pAER_tdcTimeRaw", &T_coin_pAER_tdcTimeRaw, &b_T_coin_pAER_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF10_tdcMultiplicity", &T_coin_pDCREF10_tdcMultiplicity, &b_T_coin_pDCREF10_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF10_tdcTime", &T_coin_pDCREF10_tdcTime, &b_T_coin_pDCREF10_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF10_tdcTimeRaw", &T_coin_pDCREF10_tdcTimeRaw, &b_T_coin_pDCREF10_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF1_tdcMultiplicity", &T_coin_pDCREF1_tdcMultiplicity, &b_T_coin_pDCREF1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF1_tdcTime", &T_coin_pDCREF1_tdcTime, &b_T_coin_pDCREF1_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF1_tdcTimeRaw", &T_coin_pDCREF1_tdcTimeRaw, &b_T_coin_pDCREF1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF2_tdcMultiplicity", &T_coin_pDCREF2_tdcMultiplicity, &b_T_coin_pDCREF2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF2_tdcTime", &T_coin_pDCREF2_tdcTime, &b_T_coin_pDCREF2_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF2_tdcTimeRaw", &T_coin_pDCREF2_tdcTimeRaw, &b_T_coin_pDCREF2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF3_tdcMultiplicity", &T_coin_pDCREF3_tdcMultiplicity, &b_T_coin_pDCREF3_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF3_tdcTime", &T_coin_pDCREF3_tdcTime, &b_T_coin_pDCREF3_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF3_tdcTimeRaw", &T_coin_pDCREF3_tdcTimeRaw, &b_T_coin_pDCREF3_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF4_tdcMultiplicity", &T_coin_pDCREF4_tdcMultiplicity, &b_T_coin_pDCREF4_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF4_tdcTime", &T_coin_pDCREF4_tdcTime, &b_T_coin_pDCREF4_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF4_tdcTimeRaw", &T_coin_pDCREF4_tdcTimeRaw, &b_T_coin_pDCREF4_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF5_tdcMultiplicity", &T_coin_pDCREF5_tdcMultiplicity, &b_T_coin_pDCREF5_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF5_tdcTime", &T_coin_pDCREF5_tdcTime, &b_T_coin_pDCREF5_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF5_tdcTimeRaw", &T_coin_pDCREF5_tdcTimeRaw, &b_T_coin_pDCREF5_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF6_tdcMultiplicity", &T_coin_pDCREF6_tdcMultiplicity, &b_T_coin_pDCREF6_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF6_tdcTime", &T_coin_pDCREF6_tdcTime, &b_T_coin_pDCREF6_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF6_tdcTimeRaw", &T_coin_pDCREF6_tdcTimeRaw, &b_T_coin_pDCREF6_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF7_tdcMultiplicity", &T_coin_pDCREF7_tdcMultiplicity, &b_T_coin_pDCREF7_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF7_tdcTime", &T_coin_pDCREF7_tdcTime, &b_T_coin_pDCREF7_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF7_tdcTimeRaw", &T_coin_pDCREF7_tdcTimeRaw, &b_T_coin_pDCREF7_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF8_tdcMultiplicity", &T_coin_pDCREF8_tdcMultiplicity, &b_T_coin_pDCREF8_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF8_tdcTime", &T_coin_pDCREF8_tdcTime, &b_T_coin_pDCREF8_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF8_tdcTimeRaw", &T_coin_pDCREF8_tdcTimeRaw, &b_T_coin_pDCREF8_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pDCREF9_tdcMultiplicity", &T_coin_pDCREF9_tdcMultiplicity, &b_T_coin_pDCREF9_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pDCREF9_tdcTime", &T_coin_pDCREF9_tdcTime, &b_T_coin_pDCREF9_tdcTime);
   iChain->SetBranchAddress("T.coin.pDCREF9_tdcTimeRaw", &T_coin_pDCREF9_tdcTimeRaw, &b_T_coin_pDCREF9_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEDTM_tdcMultiplicity", &T_coin_pEDTM_tdcMultiplicity, &b_T_coin_pEDTM_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEDTM_tdcTime", &T_coin_pEDTM_tdcTime, &b_T_coin_pEDTM_tdcTime);
   iChain->SetBranchAddress("T.coin.pEDTM_tdcTimeRaw", &T_coin_pEDTM_tdcTimeRaw, &b_T_coin_pEDTM_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC1_tdcMultiplicity", &T_coin_pEL_CLEAN_ROC1_tdcMultiplicity, &b_T_coin_pEL_CLEAN_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC1_tdcTime", &T_coin_pEL_CLEAN_ROC1_tdcTime, &b_T_coin_pEL_CLEAN_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC1_tdcTimeRaw", &T_coin_pEL_CLEAN_ROC1_tdcTimeRaw, &b_T_coin_pEL_CLEAN_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC2_tdcMultiplicity", &T_coin_pEL_CLEAN_ROC2_tdcMultiplicity, &b_T_coin_pEL_CLEAN_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC2_tdcTime", &T_coin_pEL_CLEAN_ROC2_tdcTime, &b_T_coin_pEL_CLEAN_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_CLEAN_ROC2_tdcTimeRaw", &T_coin_pEL_CLEAN_ROC2_tdcTimeRaw, &b_T_coin_pEL_CLEAN_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_HI_ROC1_tdcMultiplicity", &T_coin_pEL_HI_ROC1_tdcMultiplicity, &b_T_coin_pEL_HI_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_HI_ROC1_tdcTime", &T_coin_pEL_HI_ROC1_tdcTime, &b_T_coin_pEL_HI_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_HI_ROC1_tdcTimeRaw", &T_coin_pEL_HI_ROC1_tdcTimeRaw, &b_T_coin_pEL_HI_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_HI_ROC2_tdcMultiplicity", &T_coin_pEL_HI_ROC2_tdcMultiplicity, &b_T_coin_pEL_HI_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_HI_ROC2_tdcTime", &T_coin_pEL_HI_ROC2_tdcTime, &b_T_coin_pEL_HI_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_HI_ROC2_tdcTimeRaw", &T_coin_pEL_HI_ROC2_tdcTimeRaw, &b_T_coin_pEL_HI_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC1_tdcMultiplicity", &T_coin_pEL_LO_LO_ROC1_tdcMultiplicity, &b_T_coin_pEL_LO_LO_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC1_tdcTime", &T_coin_pEL_LO_LO_ROC1_tdcTime, &b_T_coin_pEL_LO_LO_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC1_tdcTimeRaw", &T_coin_pEL_LO_LO_ROC1_tdcTimeRaw, &b_T_coin_pEL_LO_LO_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC2_tdcMultiplicity", &T_coin_pEL_LO_LO_ROC2_tdcMultiplicity, &b_T_coin_pEL_LO_LO_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC2_tdcTime", &T_coin_pEL_LO_LO_ROC2_tdcTime, &b_T_coin_pEL_LO_LO_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_LO_LO_ROC2_tdcTimeRaw", &T_coin_pEL_LO_LO_ROC2_tdcTimeRaw, &b_T_coin_pEL_LO_LO_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_LO_ROC1_tdcMultiplicity", &T_coin_pEL_LO_ROC1_tdcMultiplicity, &b_T_coin_pEL_LO_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_LO_ROC1_tdcTime", &T_coin_pEL_LO_ROC1_tdcTime, &b_T_coin_pEL_LO_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_LO_ROC1_tdcTimeRaw", &T_coin_pEL_LO_ROC1_tdcTimeRaw, &b_T_coin_pEL_LO_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_LO_ROC2_tdcMultiplicity", &T_coin_pEL_LO_ROC2_tdcMultiplicity, &b_T_coin_pEL_LO_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_LO_ROC2_tdcTime", &T_coin_pEL_LO_ROC2_tdcTime, &b_T_coin_pEL_LO_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_LO_ROC2_tdcTimeRaw", &T_coin_pEL_LO_ROC2_tdcTimeRaw, &b_T_coin_pEL_LO_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_REAL_ROC1_tdcMultiplicity", &T_coin_pEL_REAL_ROC1_tdcMultiplicity, &b_T_coin_pEL_REAL_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_REAL_ROC1_tdcTime", &T_coin_pEL_REAL_ROC1_tdcTime, &b_T_coin_pEL_REAL_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_REAL_ROC1_tdcTimeRaw", &T_coin_pEL_REAL_ROC1_tdcTimeRaw, &b_T_coin_pEL_REAL_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pEL_REAL_ROC2_tdcMultiplicity", &T_coin_pEL_REAL_ROC2_tdcMultiplicity, &b_T_coin_pEL_REAL_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pEL_REAL_ROC2_tdcTime", &T_coin_pEL_REAL_ROC2_tdcTime, &b_T_coin_pEL_REAL_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pEL_REAL_ROC2_tdcTimeRaw", &T_coin_pEL_REAL_ROC2_tdcTimeRaw, &b_T_coin_pEL_REAL_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcMultiplicity", &T_coin_pFADC_TREF_ROC2_adcMultiplicity, &b_T_coin_pFADC_TREF_ROC2_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPed", &T_coin_pFADC_TREF_ROC2_adcPed, &b_T_coin_pFADC_TREF_ROC2_adcPed);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPedRaw", &T_coin_pFADC_TREF_ROC2_adcPedRaw, &b_T_coin_pFADC_TREF_ROC2_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseAmp", &T_coin_pFADC_TREF_ROC2_adcPulseAmp, &b_T_coin_pFADC_TREF_ROC2_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseAmpRaw", &T_coin_pFADC_TREF_ROC2_adcPulseAmpRaw, &b_T_coin_pFADC_TREF_ROC2_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseInt", &T_coin_pFADC_TREF_ROC2_adcPulseInt, &b_T_coin_pFADC_TREF_ROC2_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseIntRaw", &T_coin_pFADC_TREF_ROC2_adcPulseIntRaw, &b_T_coin_pFADC_TREF_ROC2_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseTime", &T_coin_pFADC_TREF_ROC2_adcPulseTime, &b_T_coin_pFADC_TREF_ROC2_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pFADC_TREF_ROC2_adcPulseTimeRaw", &T_coin_pFADC_TREF_ROC2_adcPulseTimeRaw, &b_T_coin_pFADC_TREF_ROC2_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcMultiplicity", &T_coin_pHEL_MPS_adcMultiplicity, &b_T_coin_pHEL_MPS_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPed", &T_coin_pHEL_MPS_adcPed, &b_T_coin_pHEL_MPS_adcPed);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPedRaw", &T_coin_pHEL_MPS_adcPedRaw, &b_T_coin_pHEL_MPS_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseAmp", &T_coin_pHEL_MPS_adcPulseAmp, &b_T_coin_pHEL_MPS_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseAmpRaw", &T_coin_pHEL_MPS_adcPulseAmpRaw, &b_T_coin_pHEL_MPS_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseInt", &T_coin_pHEL_MPS_adcPulseInt, &b_T_coin_pHEL_MPS_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseIntRaw", &T_coin_pHEL_MPS_adcPulseIntRaw, &b_T_coin_pHEL_MPS_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseTime", &T_coin_pHEL_MPS_adcPulseTime, &b_T_coin_pHEL_MPS_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pHEL_MPS_adcPulseTimeRaw", &T_coin_pHEL_MPS_adcPulseTimeRaw, &b_T_coin_pHEL_MPS_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcMultiplicity", &T_coin_pHEL_NEG_adcMultiplicity, &b_T_coin_pHEL_NEG_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPed", &T_coin_pHEL_NEG_adcPed, &b_T_coin_pHEL_NEG_adcPed);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPedRaw", &T_coin_pHEL_NEG_adcPedRaw, &b_T_coin_pHEL_NEG_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseAmp", &T_coin_pHEL_NEG_adcPulseAmp, &b_T_coin_pHEL_NEG_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseAmpRaw", &T_coin_pHEL_NEG_adcPulseAmpRaw, &b_T_coin_pHEL_NEG_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseInt", &T_coin_pHEL_NEG_adcPulseInt, &b_T_coin_pHEL_NEG_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseIntRaw", &T_coin_pHEL_NEG_adcPulseIntRaw, &b_T_coin_pHEL_NEG_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseTime", &T_coin_pHEL_NEG_adcPulseTime, &b_T_coin_pHEL_NEG_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pHEL_NEG_adcPulseTimeRaw", &T_coin_pHEL_NEG_adcPulseTimeRaw, &b_T_coin_pHEL_NEG_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcMultiplicity", &T_coin_pHEL_POS_adcMultiplicity, &b_T_coin_pHEL_POS_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPed", &T_coin_pHEL_POS_adcPed, &b_T_coin_pHEL_POS_adcPed);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPedRaw", &T_coin_pHEL_POS_adcPedRaw, &b_T_coin_pHEL_POS_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseAmp", &T_coin_pHEL_POS_adcPulseAmp, &b_T_coin_pHEL_POS_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseAmpRaw", &T_coin_pHEL_POS_adcPulseAmpRaw, &b_T_coin_pHEL_POS_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseInt", &T_coin_pHEL_POS_adcPulseInt, &b_T_coin_pHEL_POS_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseIntRaw", &T_coin_pHEL_POS_adcPulseIntRaw, &b_T_coin_pHEL_POS_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseTime", &T_coin_pHEL_POS_adcPulseTime, &b_T_coin_pHEL_POS_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pHEL_POS_adcPulseTimeRaw", &T_coin_pHEL_POS_adcPulseTimeRaw, &b_T_coin_pHEL_POS_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcMultiplicity", &T_coin_pHGCER_MOD_adcMultiplicity, &b_T_coin_pHGCER_MOD_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPed", &T_coin_pHGCER_MOD_adcPed, &b_T_coin_pHGCER_MOD_adcPed);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPedRaw", &T_coin_pHGCER_MOD_adcPedRaw, &b_T_coin_pHGCER_MOD_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseAmp", &T_coin_pHGCER_MOD_adcPulseAmp, &b_T_coin_pHGCER_MOD_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseAmpRaw", &T_coin_pHGCER_MOD_adcPulseAmpRaw, &b_T_coin_pHGCER_MOD_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseInt", &T_coin_pHGCER_MOD_adcPulseInt, &b_T_coin_pHGCER_MOD_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseIntRaw", &T_coin_pHGCER_MOD_adcPulseIntRaw, &b_T_coin_pHGCER_MOD_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseTime", &T_coin_pHGCER_MOD_adcPulseTime, &b_T_coin_pHGCER_MOD_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pHGCER_MOD_adcPulseTimeRaw", &T_coin_pHGCER_MOD_adcPulseTimeRaw, &b_T_coin_pHGCER_MOD_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_adcMultiplicity", &T_coin_pHGCER_adcMultiplicity, &b_T_coin_pHGCER_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPed", &T_coin_pHGCER_adcPed, &b_T_coin_pHGCER_adcPed);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPedRaw", &T_coin_pHGCER_adcPedRaw, &b_T_coin_pHGCER_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPulseAmp", &T_coin_pHGCER_adcPulseAmp, &b_T_coin_pHGCER_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPulseAmpRaw", &T_coin_pHGCER_adcPulseAmpRaw, &b_T_coin_pHGCER_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPulseInt", &T_coin_pHGCER_adcPulseInt, &b_T_coin_pHGCER_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPulseIntRaw", &T_coin_pHGCER_adcPulseIntRaw, &b_T_coin_pHGCER_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPulseTime", &T_coin_pHGCER_adcPulseTime, &b_T_coin_pHGCER_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pHGCER_adcPulseTimeRaw", &T_coin_pHGCER_adcPulseTimeRaw, &b_T_coin_pHGCER_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pHGCER_tdcMultiplicity", &T_coin_pHGCER_tdcMultiplicity, &b_T_coin_pHGCER_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pHGCER_tdcTime", &T_coin_pHGCER_tdcTime, &b_T_coin_pHGCER_tdcTime);
   iChain->SetBranchAddress("T.coin.pHGCER_tdcTimeRaw", &T_coin_pHGCER_tdcTimeRaw, &b_T_coin_pHGCER_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pHODO_RF_tdcMultiplicity", &T_coin_pHODO_RF_tdcMultiplicity, &b_T_coin_pHODO_RF_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pHODO_RF_tdcTime", &T_coin_pHODO_RF_tdcTime, &b_T_coin_pHODO_RF_tdcTime);
   iChain->SetBranchAddress("T.coin.pHODO_RF_tdcTimeRaw", &T_coin_pHODO_RF_tdcTimeRaw, &b_T_coin_pHODO_RF_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcMultiplicity", &T_coin_pNGCER_MOD_adcMultiplicity, &b_T_coin_pNGCER_MOD_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPed", &T_coin_pNGCER_MOD_adcPed, &b_T_coin_pNGCER_MOD_adcPed);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPedRaw", &T_coin_pNGCER_MOD_adcPedRaw, &b_T_coin_pNGCER_MOD_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseAmp", &T_coin_pNGCER_MOD_adcPulseAmp, &b_T_coin_pNGCER_MOD_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseAmpRaw", &T_coin_pNGCER_MOD_adcPulseAmpRaw, &b_T_coin_pNGCER_MOD_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseInt", &T_coin_pNGCER_MOD_adcPulseInt, &b_T_coin_pNGCER_MOD_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseIntRaw", &T_coin_pNGCER_MOD_adcPulseIntRaw, &b_T_coin_pNGCER_MOD_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseTime", &T_coin_pNGCER_MOD_adcPulseTime, &b_T_coin_pNGCER_MOD_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pNGCER_MOD_adcPulseTimeRaw", &T_coin_pNGCER_MOD_adcPulseTimeRaw, &b_T_coin_pNGCER_MOD_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_adcMultiplicity", &T_coin_pNGCER_adcMultiplicity, &b_T_coin_pNGCER_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPed", &T_coin_pNGCER_adcPed, &b_T_coin_pNGCER_adcPed);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPedRaw", &T_coin_pNGCER_adcPedRaw, &b_T_coin_pNGCER_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPulseAmp", &T_coin_pNGCER_adcPulseAmp, &b_T_coin_pNGCER_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPulseAmpRaw", &T_coin_pNGCER_adcPulseAmpRaw, &b_T_coin_pNGCER_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPulseInt", &T_coin_pNGCER_adcPulseInt, &b_T_coin_pNGCER_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPulseIntRaw", &T_coin_pNGCER_adcPulseIntRaw, &b_T_coin_pNGCER_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPulseTime", &T_coin_pNGCER_adcPulseTime, &b_T_coin_pNGCER_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pNGCER_adcPulseTimeRaw", &T_coin_pNGCER_adcPulseTimeRaw, &b_T_coin_pNGCER_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pNGCER_tdcMultiplicity", &T_coin_pNGCER_tdcMultiplicity, &b_T_coin_pNGCER_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pNGCER_tdcTime", &T_coin_pNGCER_tdcTime, &b_T_coin_pNGCER_tdcTime);
   iChain->SetBranchAddress("T.coin.pNGCER_tdcTimeRaw", &T_coin_pNGCER_tdcTimeRaw, &b_T_coin_pNGCER_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE100_ROC1_tdcMultiplicity", &T_coin_pPRE100_ROC1_tdcMultiplicity, &b_T_coin_pPRE100_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE100_ROC1_tdcTime", &T_coin_pPRE100_ROC1_tdcTime, &b_T_coin_pPRE100_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE100_ROC1_tdcTimeRaw", &T_coin_pPRE100_ROC1_tdcTimeRaw, &b_T_coin_pPRE100_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE100_ROC2_tdcMultiplicity", &T_coin_pPRE100_ROC2_tdcMultiplicity, &b_T_coin_pPRE100_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE100_ROC2_tdcTime", &T_coin_pPRE100_ROC2_tdcTime, &b_T_coin_pPRE100_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE100_ROC2_tdcTimeRaw", &T_coin_pPRE100_ROC2_tdcTimeRaw, &b_T_coin_pPRE100_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE150_ROC1_tdcMultiplicity", &T_coin_pPRE150_ROC1_tdcMultiplicity, &b_T_coin_pPRE150_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE150_ROC1_tdcTime", &T_coin_pPRE150_ROC1_tdcTime, &b_T_coin_pPRE150_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE150_ROC1_tdcTimeRaw", &T_coin_pPRE150_ROC1_tdcTimeRaw, &b_T_coin_pPRE150_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE150_ROC2_tdcMultiplicity", &T_coin_pPRE150_ROC2_tdcMultiplicity, &b_T_coin_pPRE150_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE150_ROC2_tdcTime", &T_coin_pPRE150_ROC2_tdcTime, &b_T_coin_pPRE150_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE150_ROC2_tdcTimeRaw", &T_coin_pPRE150_ROC2_tdcTimeRaw, &b_T_coin_pPRE150_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE200_ROC1_tdcMultiplicity", &T_coin_pPRE200_ROC1_tdcMultiplicity, &b_T_coin_pPRE200_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE200_ROC1_tdcTime", &T_coin_pPRE200_ROC1_tdcTime, &b_T_coin_pPRE200_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE200_ROC1_tdcTimeRaw", &T_coin_pPRE200_ROC1_tdcTimeRaw, &b_T_coin_pPRE200_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE200_ROC2_tdcMultiplicity", &T_coin_pPRE200_ROC2_tdcMultiplicity, &b_T_coin_pPRE200_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE200_ROC2_tdcTime", &T_coin_pPRE200_ROC2_tdcTime, &b_T_coin_pPRE200_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE200_ROC2_tdcTimeRaw", &T_coin_pPRE200_ROC2_tdcTimeRaw, &b_T_coin_pPRE200_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE40_ROC1_tdcMultiplicity", &T_coin_pPRE40_ROC1_tdcMultiplicity, &b_T_coin_pPRE40_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE40_ROC1_tdcTime", &T_coin_pPRE40_ROC1_tdcTime, &b_T_coin_pPRE40_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE40_ROC1_tdcTimeRaw", &T_coin_pPRE40_ROC1_tdcTimeRaw, &b_T_coin_pPRE40_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRE40_ROC2_tdcMultiplicity", &T_coin_pPRE40_ROC2_tdcMultiplicity, &b_T_coin_pPRE40_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRE40_ROC2_tdcTime", &T_coin_pPRE40_ROC2_tdcTime, &b_T_coin_pPRE40_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRE40_ROC2_tdcTimeRaw", &T_coin_pPRE40_ROC2_tdcTimeRaw, &b_T_coin_pPRE40_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRHI_tdcMultiplicity", &T_coin_pPRHI_tdcMultiplicity, &b_T_coin_pPRHI_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRHI_tdcTime", &T_coin_pPRHI_tdcTime, &b_T_coin_pPRHI_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRHI_tdcTimeRaw", &T_coin_pPRHI_tdcTimeRaw, &b_T_coin_pPRHI_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPRLO_tdcMultiplicity", &T_coin_pPRLO_tdcMultiplicity, &b_T_coin_pPRLO_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPRLO_tdcTime", &T_coin_pPRLO_tdcTime, &b_T_coin_pPRLO_tdcTime);
   iChain->SetBranchAddress("T.coin.pPRLO_tdcTimeRaw", &T_coin_pPRLO_tdcTimeRaw, &b_T_coin_pPRLO_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcMultiplicity", &T_coin_pPSHWR_adcMultiplicity, &b_T_coin_pPSHWR_adcMultiplicity);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPed", &T_coin_pPSHWR_adcPed, &b_T_coin_pPSHWR_adcPed);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPedRaw", &T_coin_pPSHWR_adcPedRaw, &b_T_coin_pPSHWR_adcPedRaw);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPulseAmp", &T_coin_pPSHWR_adcPulseAmp, &b_T_coin_pPSHWR_adcPulseAmp);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPulseAmpRaw", &T_coin_pPSHWR_adcPulseAmpRaw, &b_T_coin_pPSHWR_adcPulseAmpRaw);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPulseInt", &T_coin_pPSHWR_adcPulseInt, &b_T_coin_pPSHWR_adcPulseInt);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPulseIntRaw", &T_coin_pPSHWR_adcPulseIntRaw, &b_T_coin_pPSHWR_adcPulseIntRaw);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPulseTime", &T_coin_pPSHWR_adcPulseTime, &b_T_coin_pPSHWR_adcPulseTime);
   iChain->SetBranchAddress("T.coin.pPSHWR_adcPulseTimeRaw", &T_coin_pPSHWR_adcPulseTimeRaw, &b_T_coin_pPSHWR_adcPulseTimeRaw);
   iChain->SetBranchAddress("T.coin.pRF_tdcMultiplicity", &T_coin_pRF_tdcMultiplicity, &b_T_coin_pRF_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pRF_tdcTime", &T_coin_pRF_tdcTime, &b_T_coin_pRF_tdcTime);
   iChain->SetBranchAddress("T.coin.pRF_tdcTimeRaw", &T_coin_pRF_tdcTimeRaw, &b_T_coin_pRF_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pSTOF_ROC1_tdcMultiplicity", &T_coin_pSTOF_ROC1_tdcMultiplicity, &b_T_coin_pSTOF_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pSTOF_ROC1_tdcTime", &T_coin_pSTOF_ROC1_tdcTime, &b_T_coin_pSTOF_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pSTOF_ROC1_tdcTimeRaw", &T_coin_pSTOF_ROC1_tdcTimeRaw, &b_T_coin_pSTOF_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pSTOF_ROC2_tdcMultiplicity", &T_coin_pSTOF_ROC2_tdcMultiplicity, &b_T_coin_pSTOF_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pSTOF_ROC2_tdcTime", &T_coin_pSTOF_ROC2_tdcTime, &b_T_coin_pSTOF_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pSTOF_ROC2_tdcTimeRaw", &T_coin_pSTOF_ROC2_tdcTimeRaw, &b_T_coin_pSTOF_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pT1_tdcMultiplicity", &T_coin_pT1_tdcMultiplicity, &b_T_coin_pT1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pT1_tdcTime", &T_coin_pT1_tdcTime, &b_T_coin_pT1_tdcTime);
   iChain->SetBranchAddress("T.coin.pT1_tdcTimeRaw", &T_coin_pT1_tdcTimeRaw, &b_T_coin_pT1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pT2_tdcMultiplicity", &T_coin_pT2_tdcMultiplicity, &b_T_coin_pT2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pT2_tdcTime", &T_coin_pT2_tdcTime, &b_T_coin_pT2_tdcTime);
   iChain->SetBranchAddress("T.coin.pT2_tdcTimeRaw", &T_coin_pT2_tdcTimeRaw, &b_T_coin_pT2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pT3_tdcMultiplicity", &T_coin_pT3_tdcMultiplicity, &b_T_coin_pT3_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pT3_tdcTime", &T_coin_pT3_tdcTime, &b_T_coin_pT3_tdcTime);
   iChain->SetBranchAddress("T.coin.pT3_tdcTimeRaw", &T_coin_pT3_tdcTimeRaw, &b_T_coin_pT3_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG1_ROC1_tdcMultiplicity", &T_coin_pTRIG1_ROC1_tdcMultiplicity, &b_T_coin_pTRIG1_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG1_ROC1_tdcTime", &T_coin_pTRIG1_ROC1_tdcTime, &b_T_coin_pTRIG1_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG1_ROC1_tdcTimeRaw", &T_coin_pTRIG1_ROC1_tdcTimeRaw, &b_T_coin_pTRIG1_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG1_ROC2_tdcMultiplicity", &T_coin_pTRIG1_ROC2_tdcMultiplicity, &b_T_coin_pTRIG1_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG1_ROC2_tdcTime", &T_coin_pTRIG1_ROC2_tdcTime, &b_T_coin_pTRIG1_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG1_ROC2_tdcTimeRaw", &T_coin_pTRIG1_ROC2_tdcTimeRaw, &b_T_coin_pTRIG1_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG2_ROC1_tdcMultiplicity", &T_coin_pTRIG2_ROC1_tdcMultiplicity, &b_T_coin_pTRIG2_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG2_ROC1_tdcTime", &T_coin_pTRIG2_ROC1_tdcTime, &b_T_coin_pTRIG2_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG2_ROC1_tdcTimeRaw", &T_coin_pTRIG2_ROC1_tdcTimeRaw, &b_T_coin_pTRIG2_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG2_ROC2_tdcMultiplicity", &T_coin_pTRIG2_ROC2_tdcMultiplicity, &b_T_coin_pTRIG2_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG2_ROC2_tdcTime", &T_coin_pTRIG2_ROC2_tdcTime, &b_T_coin_pTRIG2_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG2_ROC2_tdcTimeRaw", &T_coin_pTRIG2_ROC2_tdcTimeRaw, &b_T_coin_pTRIG2_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG3_ROC1_tdcMultiplicity", &T_coin_pTRIG3_ROC1_tdcMultiplicity, &b_T_coin_pTRIG3_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG3_ROC1_tdcTime", &T_coin_pTRIG3_ROC1_tdcTime, &b_T_coin_pTRIG3_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG3_ROC1_tdcTimeRaw", &T_coin_pTRIG3_ROC1_tdcTimeRaw, &b_T_coin_pTRIG3_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG3_ROC2_tdcMultiplicity", &T_coin_pTRIG3_ROC2_tdcMultiplicity, &b_T_coin_pTRIG3_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG3_ROC2_tdcTime", &T_coin_pTRIG3_ROC2_tdcTime, &b_T_coin_pTRIG3_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG3_ROC2_tdcTimeRaw", &T_coin_pTRIG3_ROC2_tdcTimeRaw, &b_T_coin_pTRIG3_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG4_ROC1_tdcMultiplicity", &T_coin_pTRIG4_ROC1_tdcMultiplicity, &b_T_coin_pTRIG4_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG4_ROC1_tdcTime", &T_coin_pTRIG4_ROC1_tdcTime, &b_T_coin_pTRIG4_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG4_ROC1_tdcTimeRaw", &T_coin_pTRIG4_ROC1_tdcTimeRaw, &b_T_coin_pTRIG4_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG4_ROC2_tdcMultiplicity", &T_coin_pTRIG4_ROC2_tdcMultiplicity, &b_T_coin_pTRIG4_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG4_ROC2_tdcTime", &T_coin_pTRIG4_ROC2_tdcTime, &b_T_coin_pTRIG4_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG4_ROC2_tdcTimeRaw", &T_coin_pTRIG4_ROC2_tdcTimeRaw, &b_T_coin_pTRIG4_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG5_ROC1_tdcMultiplicity", &T_coin_pTRIG5_ROC1_tdcMultiplicity, &b_T_coin_pTRIG5_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG5_ROC1_tdcTime", &T_coin_pTRIG5_ROC1_tdcTime, &b_T_coin_pTRIG5_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG5_ROC1_tdcTimeRaw", &T_coin_pTRIG5_ROC1_tdcTimeRaw, &b_T_coin_pTRIG5_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG5_ROC2_tdcMultiplicity", &T_coin_pTRIG5_ROC2_tdcMultiplicity, &b_T_coin_pTRIG5_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG5_ROC2_tdcTime", &T_coin_pTRIG5_ROC2_tdcTime, &b_T_coin_pTRIG5_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG5_ROC2_tdcTimeRaw", &T_coin_pTRIG5_ROC2_tdcTimeRaw, &b_T_coin_pTRIG5_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG6_ROC1_tdcMultiplicity", &T_coin_pTRIG6_ROC1_tdcMultiplicity, &b_T_coin_pTRIG6_ROC1_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG6_ROC1_tdcTime", &T_coin_pTRIG6_ROC1_tdcTime, &b_T_coin_pTRIG6_ROC1_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG6_ROC1_tdcTimeRaw", &T_coin_pTRIG6_ROC1_tdcTimeRaw, &b_T_coin_pTRIG6_ROC1_tdcTimeRaw);
   iChain->SetBranchAddress("T.coin.pTRIG6_ROC2_tdcMultiplicity", &T_coin_pTRIG6_ROC2_tdcMultiplicity, &b_T_coin_pTRIG6_ROC2_tdcMultiplicity);
   iChain->SetBranchAddress("T.coin.pTRIG6_ROC2_tdcTime", &T_coin_pTRIG6_ROC2_tdcTime, &b_T_coin_pTRIG6_ROC2_tdcTime);
   iChain->SetBranchAddress("T.coin.pTRIG6_ROC2_tdcTimeRaw", &T_coin_pTRIG6_ROC2_tdcTimeRaw, &b_T_coin_pTRIG6_ROC2_tdcTimeRaw);
   iChain->SetBranchAddress("g.evtyp", &g_evtyp, &b_g_evtyp);
   iChain->SetBranchAddress("IBC3H00CRCUR4", &IBC3H00CRCUR4, &b_IBC3H00CRCUR4);
   iChain->SetBranchAddress("IGL1I00OD16_16", &IGL1I00OD16_16, &b_IGL1I00OD16_16);
   iChain->SetBranchAddress("HELFREQ", &HELFREQ, &b_HELFREQ);
   iChain->SetBranchAddress("HELDELAYs", &HELDELAYs, &b_HELDELAYs);
   iChain->SetBranchAddress("hac_bcm_average", &hac_bcm_average, &b_hac_bcm_average);
   iChain->SetBranchAddress("ibcm1", &ibcm1, &b_ibcm1);
   iChain->SetBranchAddress("ibcm2", &ibcm2, &b_ibcm2);
   iChain->SetBranchAddress("iunser", &iunser, &b_iunser);
   iChain->SetBranchAddress("itov3out", &itov3out, &b_itov3out);
   iChain->SetBranchAddress("itov4out", &itov4out, &b_itov4out);
   iChain->SetBranchAddress("IPM3H07A.XPOS", &IPM3H07A_XPOS, &b_IPM3H07A_XPOS);
   iChain->SetBranchAddress("IPM3H07A.YPOS", &IPM3H07A_YPOS, &b_IPM3H07A_YPOS);
   iChain->SetBranchAddress("IPM3H07B.XPOS", &IPM3H07B_XPOS, &b_IPM3H07B_XPOS);
   iChain->SetBranchAddress("IPM3H07B.YPOS", &IPM3H07B_YPOS, &b_IPM3H07B_YPOS);
   iChain->SetBranchAddress("IPM3H07C.XPOS", &IPM3H07C_XPOS, &b_IPM3H07C_XPOS);
   iChain->SetBranchAddress("IPM3H07C.YPOS", &IPM3H07C_YPOS, &b_IPM3H07C_YPOS);
   iChain->SetBranchAddress("IPM3H07A.XRAW", &IPM3H07A_XRAW, &b_IPM3H07A_XRAW);
   iChain->SetBranchAddress("IPM3H07A.YRAW", &IPM3H07A_YRAW, &b_IPM3H07A_YRAW);
   iChain->SetBranchAddress("IPM3H07B.XRAW", &IPM3H07B_XRAW, &b_IPM3H07B_XRAW);
   iChain->SetBranchAddress("IPM3H07B.YRAW", &IPM3H07B_YRAW, &b_IPM3H07B_YRAW);
   iChain->SetBranchAddress("IPM3H07C.XRAW", &IPM3H07C_XRAW, &b_IPM3H07C_XRAW);
   iChain->SetBranchAddress("IPM3H07C.YRAW", &IPM3H07C_YRAW, &b_IPM3H07C_YRAW);
   iChain->SetBranchAddress("IPM3H07A.XSOF", &IPM3H07A_XSOF, &b_IPM3H07A_XSOF);
   iChain->SetBranchAddress("IPM3H07A.YSOF", &IPM3H07A_YSOF, &b_IPM3H07A_YSOF);
   iChain->SetBranchAddress("IPM3H07B.XSOF", &IPM3H07B_XSOF, &b_IPM3H07B_XSOF);
   iChain->SetBranchAddress("IPM3H07B.YSOF", &IPM3H07B_YSOF, &b_IPM3H07B_YSOF);
   iChain->SetBranchAddress("IPM3H07C.XSOF", &IPM3H07C_XSOF, &b_IPM3H07C_XSOF);
   iChain->SetBranchAddress("IPM3H07C.YSOF", &IPM3H07C_YSOF, &b_IPM3H07C_YSOF);
   iChain->SetBranchAddress("fEvtHdr.fEvtTime", &fEvtHdr_fEvtTime, &b_Event_Branch_fEvtHdr_fEvtTime);
   iChain->SetBranchAddress("fEvtHdr.fEvtNum", &fEvtHdr_fEvtNum, &b_Event_Branch_fEvtHdr_fEvtNum);
   iChain->SetBranchAddress("fEvtHdr.fEvtType", &fEvtHdr_fEvtType, &b_Event_Branch_fEvtHdr_fEvtType);
   iChain->SetBranchAddress("fEvtHdr.fEvtLen", &fEvtHdr_fEvtLen, &b_Event_Branch_fEvtHdr_fEvtLen);
   iChain->SetBranchAddress("fEvtHdr.fHelicity", &fEvtHdr_fHelicity, &b_Event_Branch_fEvtHdr_fHelicity);
   iChain->SetBranchAddress("fEvtHdr.fTargetPol", &fEvtHdr_fTargetPol, &b_Event_Branch_fEvtHdr_fTargetPol);
   iChain->SetBranchAddress("fEvtHdr.fRun", &fEvtHdr_fRun, &b_Event_Branch_fEvtHdr_fRun);
   Notify();
}




