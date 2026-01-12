#include <iostream>
#include "math/math.h"

int main (){

    std::cout<<"simple static linking example"<<std::endl;
    std::cout<<"addition from math lib 2 + 3 ="<<math::add(2,3)<<std::endl;

    system("pause");    

    return 0;
}