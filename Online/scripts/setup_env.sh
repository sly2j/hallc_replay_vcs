#!/bin/bash

export REPLAY_DIR=$(dirname $(readlink -f $0))/../..
export ONLINE_DIR=$REPLAY_DIR/Online
export PATH=$ONLINE_DIR/bin:$PATH

source /etc/profile.d/modules.sh
module use /group/c-csv/local/etc/modulefiles
module use /group/jpsi-007/local/modulefiles
module use $HOME/vcs2019/local/etc/modulefiles
module load epics/latest
module load gcc/8.2.0
module load hallc_tools/1.3
module load python3
module load vim
module load git
module load tmux
module load cmake
module load clang-format
module load hallac_container
