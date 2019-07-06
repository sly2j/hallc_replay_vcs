#!/bin/tcsh

set rep="/home/cdaq/mboer/hallc_replay_vcs/Ana/datainfo"
set runlist="${rep}/runlist/runlist.txt"

set run=`more $runlist | awk '{printf $1 " "}'`

set tri="mergedruninfo/trigger_mergedruninfo.txt"
set rui="mergedruninfo/run_mergedruninfo.txt"
set efi="mergedruninfo/eff_mergedruninfo.txt"
rm $tri $rui $efi
touch $tri $rui $efi

foreach rr ($run)
	#if ( -z "${rep}/singleruninfo/run_info_${rr}.txt" ) then
		echo run=$rr
		cat ${rep}/singleruninfo/trigger_info_${rr}.txt >> $tri
		echo " " >> $tri
		cat ${rep}/singleruninfo/run_info_${rr}.txt >> $rui
		echo " " >> $rui
		cat ${rep}/singleruninfo/eff_info_${rr}.txt >> $efi
		echo " " >> $efi
	#endif
end
