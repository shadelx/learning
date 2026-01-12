#include <iostream>
#include "math/math.h"

int main(){
    // initialize values
    int a = 0;
    int b = 0;

    // input values and process
    std::cout<<"give me a number"<<std::endl;
    std::cin>>a;
    std::cout<<"give me a number"<<std::endl;
    std::cin>>b;

    std::cout<<"sum is:"<<math::add(a,b)<<std::endl;
	std::cout<<"sub is:"<<math::sub(a,b)<<std::endl;
	std::cout<<"mult is:"<<math::mult(a,b)<<std::endl;
	
	system("pause");
}