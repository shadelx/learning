#include <stdio.h>

int main (){
    int a, *pa;
    double b, *pb;
    char *pc;
    //declar pointer to int "a" value
    pa = &a;

    //casting for pointers
    pb = (int *) pb; //convert pointer to int pointer
    pb = pa;

    (int *)pc = pa; // pc = 
    // pa, pb and pc point to "a"
    
    //variable casting
    a = 12;
    b = (int) b;
    b = a;  
    printf("hello, there\n");
    return 0;
}