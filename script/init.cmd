@echo off
REM 请设置为可执行文件（在Windows中即为.bat或.cmd文件）
mkdir build
mkdir src
type nul > src\main.cpp
type nul > src\test.cpp
type nul > input.txt
type nul > output.txt
cd build
cmake ..
exit /b 0
