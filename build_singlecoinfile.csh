#!/bin/csh

set run=$1
set ev="10000000"

source setup.csh
./hcana -b -q SCRIPTS/COIN/PRODUCTION/replay_production_coin_hElec_pProt.C\(`echo $run`\,`echo $ev`\)
cp REPORT_OUTPUT/COIN/PRODUCTION/replay_coin_production_${run}_${ev}.report Ana/datainfo/savedreports/ 
echo $run >> Ana/datainfo/runlist/runlist.txt
/home/cdaq/mboer/hallc_replay_vcs/Ana/datainfo/get_runinfo.csh ${run} ${ev}
#/home/cdaq/mboer/hallc_replay_vcs/Ana/HallCana "vcs" "ana" "LH2" -f "/home/cdaq/mboer/hallc_replay_vcs/ROOTfiles/coin_replay_production_${run}_${ev}.root"
