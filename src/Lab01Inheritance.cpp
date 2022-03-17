#include <iostream>  // allows program to output data to the screen

using std::cout;
using std::endl;

struct Base {
    virtual void do_something() {}
};

struct Derived1 : Base {        //Base and Derived1 are public classes
    void do_something() override{
        cout << "Derived1!!!" << endl;
    }
};

struct Derived2 : Base {        //Base and Derived2 are public classes
     void do_something() override{
        cout << "Derived2!!!" << endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();

}  // end function main