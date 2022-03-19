a=`uname`
b="MINGW64_NT-10.0-19042"
c="Darwin"
d="ubuntu"
if [[ $a == $b ]]; then
    gcc -g ./src/$1.c -o ./run/$1.exe -fexec-charset=gbk
    cd ./run
    $1.exe
    cd ..
elif [[ $a == $c ]]; then
    gcc -g ./src/$1.c -o ./run/$1
    ./run/$1
elif [[ $a == $d ]]; then
    gcc -g ./src/$1.c -o ./run/$1
    ./run/$1
fi
