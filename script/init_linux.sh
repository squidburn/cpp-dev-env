#!/bin/bash
#请设置为可执行文件
mkdir build
mkdir src
touch src/main.cpp
touch src/test.cpp
touch input.txt
touch output.txt
cd build
cmake ..
exit 0
