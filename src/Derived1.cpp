
#include "Derived1.h"

Derived1::Derived1() {
    this->text = "";
}

Derived1::~Derived1() {
    setText(" ");
}

string Derived1::toString() {
    stringstream ss;
    ss <<"Derived1!!"<<std::endl;
    ss<<getText()<<std::endl;
    return ss.str();
}

void Derived1::setText(const string &text) {
    Derived1::text = text;
}

const string &Derived1::getText() const {
    return text;
}