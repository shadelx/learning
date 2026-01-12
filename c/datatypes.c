#include <stdio.h>

int main(){
    char a;
    int b;
    float c;
    double d;
    short int e;
    unsigned int f;
    long int g;
    unsigned long int h;
    long long int i;
    unsigned long long int j;
    signed char k;
    unsigned char l;
    long double m;

    printf("char size: %d\n", sizeof(a));
    printf("int size: %d\n", sizeof(b));
    printf("float size: %d\n", sizeof(c));
    printf("double size: %d\n", sizeof(d));
    printf("short int size: %d\n", sizeof(e));
    printf("unsigned int size: %d\n", sizeof(f));
    printf("long int size: %d\n", sizeof(g));
    printf("unsigned long int size: %d\n", sizeof(h));
    printf("long long int: %d\n", sizeof(i));
    printf("unsigned long long int: %d\n", sizeof(j));
    printf("signed char size: %d\n", sizeof(k));
    printf("unsigned char: %d\n", sizeof(l));
    printf("long double: %d\n", sizeof(m));


    return 0;

}