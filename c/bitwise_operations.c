#include <stdio.h>

int main(){
    int a = 12;
    int *ptr;

    a= a>>2;  //right operator
    printf("%d\n", a);
    a = a<<2;
    printf("%d\n", a);
    printf("%d\n", ptr);
    ptr = ptr + 4;
    printf("%d\n", ptr);

    return 0;
}