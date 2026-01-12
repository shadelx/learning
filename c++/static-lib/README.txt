this is a library for linux and windows

1. linux libary need to start with the letter l, example:
    lmath.a

2. windows library dont use any letter
math.lib


***compile windows static library
1. compile all cpp files without linking
g++ -c *.cpp
2. link and make static libary
ar rcs math.lib math.o


***compile linux static libary
1. compile all cpp files without linking
c++ -c *.cpp
2. link and make static libary
ar rcs lmath.a math.o
