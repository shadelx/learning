# this is a simple dynamic linking example

1. compile
	g++ src/main.cpp -o bin/main.exe -I include/ -L lib/ -lmath
	
2. warning:
	windows
		the dll file needs to be on the same location as the main.exe
	linux:
		move dyanmic libray to /usr/lib mv libmath.so /usr/lib/

