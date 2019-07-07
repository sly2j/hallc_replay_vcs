#define ReadTextFiles_cxx
#include "ReadTextFiles.h"
using namespace std;

string dummyLine;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool IsBadRun(  int runint, 
	int * badruntable
	){ 
	
	//return badruntable[runint];
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FillEffInfos(string datatype,int *runtable,
		    	float (&HMS_E_eff)[tot_runlist], float (&HMS_H_eff)[tot_runlist], 
			float (&SHMS_E_eff)[tot_runlist], float (&SHMS_H_eff)[tot_runlist]
		){
	float ra, rb, rc, rd;
	printf("\n fill trigger info ...");
	ifstream infile; 
        string ff;
        int jj=0, run=-1;

        ff = Form("/home/cdaq/mboer/hallc_replay_vcs/Ana/datainfo/mergedruninfo/eff_mergedruninfo.txt"); 	
	infile.open(ff.c_str());
	
	if (!infile) {
		cout<<"ERROR unable to read file"<<endl;
		return 0;
	}

	while (infile.good()){
                if (!(infile >> run)) break;
		infile >> ra >> rb >> rc >> rd;  
 
		jj = GetRunNumList(run, runtable,datatype); 
		 
		HMS_E_eff[jj] = ra; 
		HMS_H_eff[jj] = rb; 
		SHMS_E_eff[jj] = rc; 
		SHMS_H_eff[jj] = rd; 
	 
	}
	
	infile.close();
	return 1;
	

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FillTriggerInfos(string datatype,int *runtable,
		    	float (&HMS34rates)[tot_runlist], float (&SHMS34rates)[tot_runlist], 
			float (&HMS_ST)[tot_runlist], float (&SHMS_ST)[tot_runlist], float (&C_T)[tot_runlist]
		){
	float ra, rb, rc, rd, re;
	printf("\n fill trigger info ...");
	ifstream infile; 
        string ff;
        int jj=0, run=-1;

        ff = Form("/home/cdaq/mboer/hallc_replay_vcs/Ana/datainfo/mergedruninfo/trigger_mergedruninfo.txt"); 	
	infile.open(ff.c_str());
	
	if (!infile) {
		cout<<"ERROR unable to read file"<<endl;
		return 0;
	}

	while (infile.good()){
                if (!(infile >> run)) break;
		infile >> ra >> rb >> rc >> rd >> re;  
 
		jj = GetRunNumList(run, runtable,datatype); 
		 
		HMS34rates[jj] = ra; 
		SHMS34rates[jj] = rb; 
		HMS_ST[jj] = rc; 
		SHMS_ST[jj] = rd; 
		C_T[jj] = re; 
	 
	}
	
	infile.close();
	return 1;
	

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
int FillRunInfos( string datatype, 
	int *runtable, 
	float (&Eb)[tot_runlist], float (&HMS_p_central)[tot_runlist], 
	float (&SHMS_p_central)[tot_runlist], float (&HMS_th_central)[tot_runlist], float (&SHMS_th_central)[tot_runlist],
	float (&HMS_B2_cur)[tot_runlist], float (&SHMS_B2_cur)[tot_runlist], 
	float (&HMS_B4_cut)[tot_runlist], float (&SHMS_B4_cut)[tot_runlist], float (&HMS_B2_cur_cut)[tot_runlist], float (&SHMS_B2_cur_cut)[tot_runlist],
	float (&HMS_live)[tot_runlist], float (&SHMS_live)[tot_runlist]
	){
	
	int run ;
	float ra, rb, rc, rd, re, rf, rg, rh, ri, rj, rk, rl, rm;

        printf("Start to fill run tables ...");
        
        ifstream infile; 
        string ff;
        int jj=0;

	ff = Form("/home/cdaq/mboer/hallc_replay_vcs/Ana/datainfo/mergedruninfo/run_mergedruninfo.txt");	 
	//	else if (datatype.compare("pAl") == 0) ff = Form("/home/marie/Travail/RHIC/PHENIX/DY_1/DBinfos/runinfo2015pAl.dat");	 
	
	infile.open(ff.c_str());
	
	if (!infile) {
		cout<<"ERROR unable to read file"<<endl;
		return 0;
	}

	//getline(infile , dummyLine);
	//infile.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	while (infile.good()){
                if (!(infile >> run)) break;
		infile >> ra >> rb >> rc >> rd >> re >> rf >> rg >> rh >> ri >> rj >> rk >> rl >> rm;  
 
		jj = GetRunNumList(run, runtable,datatype); 
		 
		Eb[jj] = ra; 
		HMS_p_central[jj] = rb; 
		SHMS_p_central[jj] = rc; 
		HMS_th_central[jj] = rd; 
		SHMS_th_central[jj] = re; 
		HMS_B2_cur[jj] = rf; 
		SHMS_B2_cur[jj] = rg; 
		HMS_B4_cut[jj] = rh; 
		SHMS_B4_cut[jj] = ri; 
		HMS_B2_cur_cut[jj] = rj; 
		HMS_B2_cur_cut[jj] = rk;
	        HMS_live[jj] = rl;	
	        SHMS_live[jj] = rm;	
	 
	}
	
	infile.close();
	return 1;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int GetRunNumList( int runnum, int *runtable, string datatype){
	int run=-1;
	
	if (datatype.compare("pp") == 0){
	
		for (int ii=0;ii<847;ii++) {
			if (ii==0){
				if (runnum>runtable[750]) ii=750;
				else if (runnum>runtable[600]) ii=600;
				else if (runnum>runtable[450]) ii=450;
				else if (runnum>runtable[300]) ii=300;
				else if (runnum>runtable[150]) ii=150;
			}
			if (runnum==runtable[ii]){
				run=ii;
				break;
			}	
		}
	} else { 
		for (int ii=0;ii<tot_runlist;ii++) {
			//cout<<"run: "<<runnum<<"runtable["<<ii<<"] " <<runtable[ii]<<endl;
			if (runnum==runtable[ii]){
				run=ii;
				break;
			}	
		}
	}
	 
	return run;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////



