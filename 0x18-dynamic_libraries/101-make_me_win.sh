#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/b1ruk4/alx-low_level_programming/master/0x18-dynamic_libraries/nramdom.so
export LD_PRELOAD=/tmp/nramdom.so
