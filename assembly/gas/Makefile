cc := as

all: hello hello.o

hello: hello.o
	ld -o hello hello.o
hello.o: hello.asm
	$(cc) -o hello.o hello.asm

clean:
	rm *.o
