#include <stdio.h>

void func1();

int main(){
    //pointer for array
    void (*func1_ptr)() = &func1; // func1 = &func1

    printf("main function:\n");

    //invoke func1 from pointer
    (*func1_ptr)();
}

void func1(){
    printf("inside function\n");
}