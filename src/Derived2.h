
#include "Base.h"

#ifndef LAB01_DERIVED2_H
#define LAB01_DERIVED2_H


class Derived2 : public Base{

private:
    string text;

public:
    Derived2();

    const string &getText() const;

    void setText(const string &text);

    virtual ~Derived2() override;

    string toString() override;
};


#endif //LAB01_DERIVED2_H
