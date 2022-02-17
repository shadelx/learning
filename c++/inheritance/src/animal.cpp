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

ostream& operator<<(ostream& out, const animal& a){
	return out << a.toString();
}

animal::~animal()
{
}