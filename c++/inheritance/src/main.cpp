#include <iostream>
#include "animal.h"
#include "dog.h"

int main(){
    animal a1 = animal("zafiro");
    dog d1 = dog("anubis","Nati");

    std::cout<<a1<<endl;
    std::cout<<d1<<endl;

    system("pause");

    return 0;
}