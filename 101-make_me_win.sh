#!/bin/bash
wget -P /tmp/ https://raw.github.com/andriyperkins13/alx-low_level_programming/master/0x18-dynamic_libraries/myshared.so
export LD_PRELOAD=/tmp/myshared.so
