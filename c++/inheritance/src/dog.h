#pragma once
#include "animal.h"

class dog : public animal
{
private:
    string owner;
public:
    dog(string name, string owner);
    string get_owner();
    void set_owner(string owner);
    virtual string toString()const;
    ~dog();
};


