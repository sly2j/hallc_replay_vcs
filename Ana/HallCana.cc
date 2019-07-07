/*
Main for Hall C real data analysis
Created July 5th, 2019
*/

#include <iostream>
#include <string.h>
#include "includes/ReadHallCData.h"
using namespace std;

int main (int argc, char **argv){

	if (argc<4) {
		cout<<"HELP / use arguments: "<<endl;
		cout<<"give arguments in following order, with flag"<<endl;
	
		cout<<"1) Process:"<<endl;
		cout<<"	  hallc"<<endl;
	
		cout<<"2) What to do:"<<endl;
		//cout<<"   gen = just read generated data"<<endl;
		//cout<<"   rec = MC including acceptance (rates)" <<endl;
		cout<<"   real"<<endl;
	
		cout<<"3) polar: "<<endl;
		cout<<"lin"<<endl;
		
		cout<<"4) File type: "<<endl;
		cout<<"   -f or -files = single file or root file list given in header"<<endl;
		//cout<<"   Warning: if use this option, the file name or list has to be followed by -f, -ff or -end sign"<<endl;
		cout<<"   -l or -list = name of text file containing the list of root files"<<endl;
		
		cout<<"then provide the list of files txt or the root file(s) names"<<endl;

		cout<<" ... \n"<<endl;
		
		return 111;
	}

	// need to change entry format. run index as an entry, prefix independent. same for all files. 
	// enable reading list. 
	// will add one string

	string process=argv[1];
	string det=argv[2];
	string polar=argv[3];
	string test=argv[4];
	vector <string> filesarg;
	//vector <string> filesarg_assoc;
	string listoffiles;
	string content="";
	string files_princ;
	vector <int> rid;	
	// Read arguments
	
	 if (test=="-l" || test=="-list"){
    
          listoffiles=argv[5];
          ifstream listof;
          listof.open(Form("%s",listoffiles.c_str()));
  
           string ff; 

           while (listof.good()){
               if (!(listof>>ff)) break;
               filesarg.push_back(ff);
           }
           listof.close();
                
           cout<<"name of root files in: "<<listoffiles<<endl;
           cout<<"files= "<<endl;
           for (int kk=0;kk<filesarg.size();kk++){
            	cout<< ", "<<filesarg[kk] ;
            }
            
     } else if (test=="-f" || test=="-files") {
    
            int nn = 5;
            for (char **arg=argv+5; *arg; ++arg) {
    
                string check =  string(*arg); 
				if (check.compare("-end") == 0
					|| check.compare("-f")==0
					|| check.compare("-ff")==0
					) break;
                filesarg.push_back(*arg);
                nn++;
            }
            
            // if want to analyze other files in parallel
           /* if (argc>5) {
            	if (argc>nn ){
					string check2=string(argv[nn]);
					nn++;
					if (check2.compare("-f") == 0) {
							for (char **arg=argv+nn; *arg; ++arg) {
									string check3 =  string(*arg);
									if (check3 == check3){
											if (check3.compare("-f") == 0
													|| check3.compare("-ff") == 0
													|| check3.compare("-end") == 0
													) break;
											files_princ.push_back(*arg);
											nn++;
									} else break ;
							}
					}
                }
            }
            if (files_princ.size()>0) cout << "list of file analyzed: " <<endl;
            for (int kk=0;kk<files_princ.size();kk++){
            	cout<< ", "<<files_princ[kk] ;
            }
            */
            if (filesarg.size()>0) cout << "list of file analyzed: " <<endl;
            for (int kk=0;kk<filesarg.size();kk++){
		rid.push_back(kk);
            	cout<< ", "<<filesarg[kk] ;
            }
     }

     cout<<" ... End of file list opening ... "<<endl;
        
        

	
	// Process the code
	cout<<"\n Start processing analyzis \n"<<endl;
	cout<<"Parameters: \n what: "<<det<<" \n process: "<<process<<endl;
	
	
	if (process.compare("hallc")==0) {
		cout<<"Analyze raw simulations"<<endl;
		ReadHallCData RDD;//(filesarg); //[0]);
		
		if (det.compare("real")==0){
			//RDD.InitHistos(); 
			cout<<">> start loop"<<endl;
			RDD.InitHist();
			RDD.Loop(filesarg, rid) ;
			RDD.DrawHist();
			RDD.DeleteHist();
			cout<<">> no more options"<<endl;
		}
	//} else if (process.compare("rec")==0) {
	
	}

	cout<<"Analysis code, done."<<	endl;	
	return 0;
}


