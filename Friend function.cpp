#include<iostream>
using namespace std;

class Base {
        int private_var;     //by default its under private access specifier
    public:
        int public_var;
    Base () {
        private_var = 10;
        public_var = 13;
    }
    friend void frFunction(Base& obj);      //Friend function declaration   
};
void frFunction (Base& obj) {
    cout<<"Private variable: "<<obj.private_var<<endl;        //printing these
    cout<<"Public variable: "<<obj.public_var<<endl;
}

int main () {
    Base calling;
    frFunction(calling);
    system("pause");
    return 0;
}