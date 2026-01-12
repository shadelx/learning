#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

int main(int argc, char const *argv[])
{
    int (*func[4])(int, int);
    func[0] = &add;
    func[1] = &sub;
    func[2] = &mult;
    func[3] = &div;

    printf("add 2+2:%d\n", func[0](2,2));
    printf("sub 2-2:%d\n", func[1](2,2));
    printf("add 2*2:%d\n", func[2](2,2));
    printf("add 2/2:%d\n", func[3](2,2));

    return 0;
}
int add(int num1, int num2){
    return num1 + num2;
}
int sub(int num1, int num2){
    return num1 - num2;
}
int mult(int num1, int num2){
    return num1 * num2;
}
int div(int num1, int num2){
    if(num2 !=0) {
        return num1 / num2;
    }
    else{
        return 0;
    }
}


