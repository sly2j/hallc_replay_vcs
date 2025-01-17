#!/bin/csh

set type=$1
set target=$2
set run=$3
set ev=$4


source setup.csh
./hcana -b -q SCRIPTS/COIN/PRODUCTION/replay_production_coin_hElec_pProt.C\(`echo $run`\,`echo $ev`\)
/home/cdaq/vcs2019/hallc_replay_vcs/Ana/datainfo/get_runinfo.csh ${run} ${ev}
/home/cdaq/vcs2019/hallc_replay_vcs/Ana/HallCana "${type}" "ana" "${target}" "${run}" -f "/home/cdaq/vcs2019/hallc_replay_vcs/ROOTfiles/coin_replay_production_${run}_${ev}.root"
echo "more lumi_${run}.dat: "
more /home/cdaq/vcs2019/hallc_replay_vcs/Ana/files/lumi_${run}.dat
echo "more timing_${run}.dat: "
more /home/cdaq/vcs2019/hallc_replay_vcs/Ana/files/timing_${run}.dat
echo "more missmass2_${run}.dat: "
more /home/cdaq/vcs2019/hallc_replay_vcs/Ana/files/missmass2_${run}.dat
echo "pop-up ana monitoring figures: "
evince /home/cdaq/vcs2019/hallc_replay_vcs/Ana/Results/ana_monitor_${run}.pdf
echo "reconstruction is done"
