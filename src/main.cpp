
#include "Derived1.h"
#include "Derived2.h"

using std::cout;

int main(){

    cout<<"\nAriana Solano Vallejos Lab01 G05"<<std::endl;

    Derived1 d1;
    d1.doSomething();
    cout<<d1.toString()<<std::endl;

    Derived2 d2;
    d2.doSomething();
    cout<<d2.toString()<<std::endl;

}

