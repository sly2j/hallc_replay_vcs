#!/bin/csh

set run="8583"
set ev="10"

source setup.csh
./hcana -b -q SCRIPTS/COIN/PRODUCTION/replay_production_coin_hElec_pProt.C\(`echo $run`\,`echo $ev`\)

