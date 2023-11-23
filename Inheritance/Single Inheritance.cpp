#include <iostream>
using namespace std;
class Animal {
    public:
    void functions() {
        cout<<"I can eat"<<endl;
        cout<<"I can sleep"<<endl;
    }
};
class Dog:public Animal {       //Single inheritance
    public:
    void bark() {
        cout<<"I can bark"<<endl;
    }
};
int main () {
    Dog dog1;
    dog1.functions();
    dog1.bark();
    system("pause");
    return 0;
}