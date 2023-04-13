/*
    A callback is any executable code that is passed as an argument to other code, which is expected to call back (execute) the argument at a given time 
*/

#include <stdio.h>

typedef void (*ptr)();

void A(){
    printf("hello, world\n");
}

void B(ptr pt){      //function pointer as argument void (*ptr)()
    pt();  //call-back function that "ptr" points to
}

int main(int argc, char const *argv[])
{
    /* code */
    void (*p)() = A; //declare function pointer, A without parenthis is de memory address of the func  
    B(p);
    B(A);       //A is a callback function
    return 0;
}
