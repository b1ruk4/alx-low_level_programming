#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/b1ruk4/alx-low_level_programming/master/0x18-dynamic_libraries/libbk.so
export LD_PRELOAD=/tmp/libbk.so
