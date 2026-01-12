#include "dog.h"

dog::dog(string name, string owner) : animal(name){
    this->owner = owner;
}

string dog::get_owner(){
    return this->owner;
}

void dog::set_owner(string owner){
    this->owner = owner;
}

string dog::toString()const{
    return string(animal::toString()+string("\nowner:"+this->owner));
}

dog::~dog()
{
}