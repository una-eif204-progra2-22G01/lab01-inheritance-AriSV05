
#include "Derived2.h"

const string &Derived2::getText() const {
    return Base::getText();
}

void Derived2::setText(const string &text) {
    Base::setText(text);
}

Derived2::~Derived2() {

}

string Derived2::toString() {
    return Base::toString();
}
