
#include "Base.h"

#ifndef LAB01_DERIVED1_H
#define LAB01_DERIVED1_H


class Derived1 : public Base{

private:
    string text;

public:
    Derived1();

    const string &getText() const;

    void setText(const string &text);

    ~Derived1() override;

    string toString() override;

    void doSomething() override;
};


#endif //LAB01_DERIVED1_H
