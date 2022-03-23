#include "Derived2.h"

Derived2::Derived2() {
    this->text = "";
}

Derived2::~Derived2() {
    this->text= "";
}

void Derived2::doSomething() {

    setText("Derived2!!");

}

void Derived2::setText(const string &text) {
    Derived2::text = text;
}

const string &Derived2::getText() const {
    return text;
}

string Derived2::toString() {
    stringstream ss;
    ss << getText();
    return ss.str();
}
