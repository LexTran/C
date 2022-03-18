gcc ./src/$1.c -o ./run./$1.exe
cd ./run
$1.exe
cd ..