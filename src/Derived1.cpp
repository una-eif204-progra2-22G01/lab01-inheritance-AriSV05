
#include "Derived1.h"

const string &Derived1::getText() const {
    return Base::getText();
}

void Derived1::setText(const string &text) {
    Base::setText(text);
}

Derived1::~Derived1() {
    setText(" ");
}

string Derived1::toString() {
    stringstream ss;
    ss <<"Derived1!!"<<std::endl;
    //ss<<getText()<<std::endl;
    return ss.str();
}
