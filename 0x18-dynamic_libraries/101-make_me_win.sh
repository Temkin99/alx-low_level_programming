#!/bin/bash
wget -P /tmp/ https://github.com/Temkin99/alx-low_level_programming/raw/master/0x17-dynamic_libraries/liball.so 
export LD_PRELOAD=/tmp/liball.so
