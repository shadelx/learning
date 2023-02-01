#include <stdio.h>

int main (){
    //pointer declaration
    int num, *ptr_num;

    num = 10;
    ptr_num = &num;

    printf("num value:%d\n", num);                  //10
    printf("num address:%p\n", &num);               //0x7fff298011fc
    printf("pointer value:%p\n", ptr_num);          //0x7fff298011fc
    printf("pointer address:%p\n",&ptr_num);        //0x7fff29801200
    printf("pointer inside value:%d\n\n", *ptr_num);   //10

    *ptr_num = 15;
    printf("num change value:%d\n",num);
    printf("pointer change inside value:%d\n\n", *ptr_num);

    num = 20;
    printf("num change value again:%d\n",num);
    printf("pointer change inside value again:%d\n", *ptr_num);


    //array of pointers
    int b[] = {1,2,3};

    int *a[3];

    for(int i=0;i<3;++i){
        a[i] = &b[i];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", *a[i]);
    }
    
    return 0;
}