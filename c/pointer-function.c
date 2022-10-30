#include<stdio.h>

//function prototypes
int add(int a, int b);
void b(int (*ptr)());   // receives pointer to function

//prototype calculator
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 12;
    int *ptr_a = &a;

    printf("a value %d\n", a);
    printf("ptr_a inside value %d\n", *ptr_a);
    printf("a size:%lu\n", sizeof(a));
    printf("ptr_a size:%lu\n", sizeof(ptr_a));

    //create pointer to function a that retursn an int
    int (*ptr)() = &add;
    //pass ptr to function B
    b(ptr);
}


int add(int a, int b){
    return a+b;
}

void b(int(*ptr)()){
    int result = (*ptr)(1,2); // or ptr(1,2)
    printf("result: %d", result);
}

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

