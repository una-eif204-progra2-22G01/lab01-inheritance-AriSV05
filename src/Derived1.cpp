
#include "Derived1.h"


const string &Derived1::getText() const {
    return Base::getText();
}

void Derived1::setText(const string &text) {
    Base::setText(text);
}

Derived1::~Derived1() {

}

string Derived1::toString() {
    return Base::toString();
}
