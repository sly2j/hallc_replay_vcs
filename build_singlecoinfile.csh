#!/bin/csh

set run=$1
set ev=$2

source setup.csh
./hcana -b -q SCRIPTS/COIN/PRODUCTION/replay_production_coin_hElec_pProt.C\(`echo $run`\,`echo $ev`\)
cp REPORT_OUTPUT/COIN/PRODUCTION/replay_coin_production_${run}_${ev}.report Ana/datainfo/savedreports/ 
echo $run >> Ana/datainfo/runlist/runlist.txt
/home/cdaq/vcs2019/hallc_replay_vcs/Ana/datainfo/get_runinfo.csh ${run} ${ev}
/home/cdaq/vcs2019/hallc_replay_vcs/Ana/HallCana "vcs" "ana" "LH2" "$1" -f "/home/cdaq/vcs2019/hallc_replay_vcs/ROOTfiles/coin_replay_production_${run}_${ev}.root"
