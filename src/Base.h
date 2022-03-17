#ifndef LAB01_BASE_H
#define LAB01_BASE_H

#include <iostream>
#include <sstream>

using std::string;
using std::stringstream;

class Base {

private:
    string text;

public:
    Base(const string &text);

    virtual const string &getText() const;

    virtual void setText(const string &text);

    virtual ~Base();

    virtual string toString();
};


#endif //LAB01_BASE_H
