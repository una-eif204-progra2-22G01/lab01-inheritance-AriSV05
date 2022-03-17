
#include "Base.h"

#ifndef LAB01_DERIVED2_H
#define LAB01_DERIVED2_H


class Derived2 : public Base{

public:
    const string &getText() const override;

    void setText(const string &text) override;

    ~Derived2() override;

    string toString() override;
};


#endif //LAB01_DERIVED2_H
