#include<iostream>
template <class T>
class base {
    public:
        T num1=5;
        T num2=10;
    void add () {
        std::cout<<"Sum = "<<num1+num2<<std::endl;
    }
};
int main () {
    base <int> integer;
    integer.add();
    system("pause");
    return 0;
}