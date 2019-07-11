#define Utils_cxx
#include "Utils.h"
using namespace std;

float SetBins2D(double var1, double var2, float varbins[][2][2], const int maxvarbins){ 
        float bin=-1;
        for (int i=0; i<maxvarbins; i++){
                if (var1 > varbins[i][0][0] && var1 <= varbins[i][0][1]){ // check 1st dim
                        if (var2 > varbins[i][1][0] && var2 <= varbins[i][1][1]){ // check 2d dim
                                bin = i;
                                break;
                        }
                }
        }
        return bin;
}
 

float SetBins(double var,  float varbins[] , const int maxvarbins){

		for (int i = 0; i< maxvarbins ; i ++ ){
			if ( var <= varbins[0] || var > varbins[maxvarbins] ) {
				var = -1;
				break;
			}
			if ( var > varbins[i] && var <= varbins[i+1] ) {
				var = i;  
				break;
			}
		}	
		return var;
}

float LogBins(const int& nbins, const double& min, const double& max, const int& ibin ){
	
	float fLogBins[nbins+1]; 
	double puisb=1.,puish=1.,puis=1.;
	for ( int ii = 0 ; ii <= nbins ; ii++ ) { // log equidistant
		puish=ii; puisb=nbins;
		puis=(double) puish/ (double) puisb;
		fLogBins[ii]= (min)*pow((double)((max)/(min)),puis); 
	} 
	return fLogBins[ibin];

} 	

void Line(TH1* h1,Double_t ordonnee){
        float coefx = (float) ( h1->GetXaxis()->GetXmax() - h1->GetXaxis()->GetXmin() );
    
        Int_t n = 200;
        Double_t x[n], y[n];
        for (Int_t i=0; i<n; i++) {
                x[i] = ((float) h1->GetXaxis()->GetXmin()) +i*coefx/n;  
            y[i] = ordonnee; 
        }
    
        TGraph *gr1 = new TGraph (n, x, y);    
        gr1->SetLineColor(kBlue+4);
        gr1->SetLineWidth(3);
        gr1->SetLineStyle(2);
        gr1->Draw("same");
}

float LinearBins(const int& nbins, const double& min, const double& max, const int& ibin ){	
		float lin[nbins+1];
		for (int i=0;i<=nbins;i++){
			lin[i] = (float) min + (float) i * ((float) max- (float) min) / (float) nbins;
		}
		return lin[ibin];
}

double Random_Expo(double lambda){
	double u;
	do u=(rand()/(double) RAND_MAX); while (u==0.); 	
	return -log(u)/lambda;	
}

void degtorad(double &Adeg){
        Adeg*=3.14159265/180.;
        return;
}

void radtodeg(double &Arad){
        Arad*=180./3.14159265;
        return;
}

void FillArray_LV(TLorentzVector LV, float *Ar){
	Ar[0]=LV.E(); Ar[1]=LV.Px(); Ar[2]=LV.Py(); Ar[3]=LV.Pz();
	return;
}
