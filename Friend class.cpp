#include <iostream>
using namespace std;
class Base {
    int private_var;
    public:
    int public_var;
    Base () {
        private_var=14;
        public_var=69;
    }
    friend class frClass;
};

class frClass {
    public:
    void print(Base& obj) {
        cout<<"Private variable: "<<obj.private_var<<endl;
        cout<<"Public variable: "<<obj.public_var<<endl;
    }
};
int main () {
    Base calling;
    frClass friendClass;
    friendClass.print(calling);
    system("pause");
    return 0;
}