//It is a way to achieve polymorphism, allowing derived class to provide a specific implementation that is already declared
//in the Base class
#include <iostream>
using namespace std;
class base {
    public:
    void print() {
        cout<<"This is original";
    }
};
class derived_base:public base {
    public:
    void print() {
        cout<<"Overriden previous function";
    }
};
main () {
    derived_base derived;
    derived.print();
    return 0;
}