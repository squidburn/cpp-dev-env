# 请设置为可执行文件（在Windows中即为.ps1文件，可能需要修改执行策略）
New-Item -ItemType Directory -Force -Path build, src | Out-Null
New-Item -ItemType File -Force -Path src\main.cpp, src\test.cpp, input.txt, output.txt | Out-Null
Set-Location build
cmake ..
exit 0
