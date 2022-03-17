
#include "Base.h"


Base::Base(const string &text) : text(text) {}

Base::~Base() {

}

const string &Base::getText() const {
    return text;
}

void Base::setText(const string &text) {
    Base::text = text;
}

string Base::toString() {
    stringstream ss;
    ss <<" "<<std::endl;
    return ss.str();
}
