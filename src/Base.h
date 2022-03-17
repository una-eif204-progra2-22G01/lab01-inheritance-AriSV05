#ifndef LAB01_BASE_H
#define LAB01_BASE_H

#include <iostream>

using std::string;

class Base {


private:
    string text;


public:
    Base();

    virtual const string &getText() const;

    virtual void setText(const string &text);

    virtual ~Base();

    virtual string toString();

};


#endif //LAB01_BASE_H
