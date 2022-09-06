#!/bin/bash 
wget -P /tmp https://github.com/chukxsemmy/alx-low_level_programming/blob/master/0x18-dynamic_libraries/giga_inject.so 
export LD_PRELOAD =/tmp/giga_inject.so
