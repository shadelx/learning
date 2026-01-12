this is a simple program with static linking

1. compile with the next command

g++ src/main.cpp -o bin/main.exe -I include/ -L lib/ -lmath

2. flags definition
-I  Add search path to header files (.h) or (.hpp).
-L  Add search path to shared libraries, directory containing
-l  Links to shared library or shared object 