
#include "Derived1.h"

Derived1::Derived1() {
    this->text = "";
}

Derived1::~Derived1() {
    this->text= "";
}

void Derived1::doSomething() {

    setText("Derived1!!");

}

void Derived1::setText(const string &text) {
    Derived1::text = text;
}

const string &Derived1::getText() const {
    return text;
}

string Derived1::toString() {
    stringstream ss;
    ss << getText();
    return ss.str();
}
