#!/bin/bash

ONLINE_DIR=$(dirname $(readlink -f $0))/..
source $ONLINE_DIR/scripts/setup_env.sh

## Ensure that the tmux socket is alive
tmux -f $ONLINE_DIR/config/tmux.conf -L vcs_online new-session -d -s dummy 2> /dev/null
