#include "animal.h"

animal::animal(string name)
{
    this->name = name;
}

string animal::get_name(){
    return this->name;
}

void animal::set_name(string name){
    this->name = name;
}

string animal::toString()const{
    return string("name:"+this->name);
}

ostream& operator<<(ostream& out, const animal& obj){
	return out << obj.toString();
    // return out <<"name:"a.name;
}

animal::~animal()
{
}