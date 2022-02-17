this is a example for dynamic library **
1. create header file

2. create cpp file

3. compile .cpp to object file with:
	g++ -fPIC -c math.cpp -o math.o
	
4. create dynamic library 
	linux:
		g++ -shared -o libmath.so math.o
	windows:
		g++ -shared -o math.dll math.o
