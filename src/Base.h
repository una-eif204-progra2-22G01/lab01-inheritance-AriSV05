#ifndef LAB01_BASE_H
#define LAB01_BASE_H

#include <iostream>
#include <sstream>

using std::string;
using std::stringstream;

class Base {

public:
    Base();

    virtual ~Base();

    virtual void doSomething() = 0;
    virtual string toString() = 0;
};


#endif //LAB01_BASE_H
