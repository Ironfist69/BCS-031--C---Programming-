#include <iostream>
class Calculate {
    public:
        int add(int a, int b) {
            std::cout<<a+b<<std::endl;
        }
        int add(int a, int b, int c) {
            std::cout<<a+b+c<<std::endl;
        }
};
int main () {
    Calculate cal;
    cal.add(10,5);
    cal.add(10,20,30);
    system("pause");
    return 0;
}