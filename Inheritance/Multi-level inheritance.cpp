#include <iostream>
using namespace std;
class A{
    public:
    void function_a () {               
        cout<<"Function A"<<endl;
    }
};
class B:public A{
    public:
    void function_b () {               
        cout<<"Function B"<<endl;
    }
};
class C:public B{
    public:
    void function_c () {               
        cout<<"Function C"<<endl;
    }
};               
int main() {
    C c;
    c.function_a();
    c.function_b();
    c.function_c();
    system("pause");
    return 0;
}