#include<iostream>
class base {
    int a,b;
    public:
        int div(int num) {
            a=num;
            b=a/2;
            return b;
        }
};
int main () {
    int n;
    std::cout<<"Enter your number: ";
    std::cin>>n;
    base half;
    int result=half.div(n);
    std::cout<<"Result: "<<result<<std::endl;
    system("pause");
    return 0;
}