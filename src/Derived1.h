
#include "Base.h"

#ifndef LAB01_DERIVED1_H
#define LAB01_DERIVED1_H


class Derived1 : public Base{

public:
    const string &getText() const override;

    void setText(const string &text) override;

    ~Derived1() override;

    string toString() override;

};


#endif //LAB01_DERIVED1_H
