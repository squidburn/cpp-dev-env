# 请确保以管理员身份或允许执行策略运行
# 如果提示权限错误，请在终端执行: Set-ExecutionPolicy -ExecutionPolicy Bypass -Scope Process

# 创建文件夹（Force 参数防止文件夹已存在时报错）
New-Item -ItemType Directory -Path "build" -Force
New-Item -ItemType Directory -Path "src" -Force

# 创建空文件
New-Item -ItemType File -Path "src/main.cpp" -Force
New-Item -ItemType File -Path "src/test.cpp" -Force

# 切换目录并执行 cmake
Set-Location "build"
cmake ..

# 正常退出
Exit 0
