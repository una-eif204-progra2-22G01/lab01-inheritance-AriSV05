
#include "Derived2.h"

Derived2::Derived2() {
    this->text = "";
}

Derived2::~Derived2() {
    setText(" ");
}

string Derived2::toString() {
    stringstream ss;
    ss <<"Derived2!!"<<std::endl;
    ss<<getText()<<std::endl;
    return ss.str();
}

void Derived2::setText(const string &text) {
    Derived2::text = text;
}

const string &Derived2::getText() const {
    return text;
}
