#pragma once

#include <iostream>
using namespace std;

class animal
{
private:
    string name;
public:
    animal(string name);
    string get_name();
    void set_name(string name);
	
	//virtual function to be modified by any child class inheritable and overridable
    virtual string toString() const;
	
	//reference to class type ostream operator << friend function can access private and protected members
	//reference variables are an alias to another variable
    friend ostream& operator << (ostream& out, const animal& a);
    ~animal();
};


