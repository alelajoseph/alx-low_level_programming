#!/bin/bash
wget -P .. https://raw.githubusercontent.com/alelajoseph/alx-low_level_programming/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD="$PWD/../win.so"
