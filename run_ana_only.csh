#!/bin/csh

echo "provide arguments: "
echo "1) run number"
echo "2) number of events"
echo "3) process: vcs, elastic, pi0, pi+LT..."
echo "4) target: LH2 or dummy"

set run=$1
set ev=$2
set type=$3
set target=$4

source setup.csh
/home/cdaq/vcs2019/hallc_replay_vcs/Ana/HallCana "${type}" "ana" "${target}" "${run}" -f /home/cdaq/vcs2019/hallc_replay_vcs/ROOTfiles/coin_replay_production_${run}_${ev}.root
echo "more lumi_${run}.dat: "
more /home/cdaq/vcs2019/hallc_replay_vcs/Ana/files/lumi_${run}.dat
echo "more timing_${run}.dat: "
more /home/cdaq/vcs2019/hallc_replay_vcs//Ana/files/timing_${run}.dat
echo "more missmass2_${run}.dat: "
more /home/cdaq/vcs2019/hallc_replay_vcs/Ana/files/missmass2_${run}.dat
echo "pop-up ana monitoring figures: "
evince /home/cdaq/vcs2019/hallc_replay_vcs/Ana/Results/ana_monitor_${run}.pdf
echo "reconstruction is done"
