#include <iostream>

void add(int in1,int in2) {
    std::cout<<"Sum = "<<in1+in2<<std::endl;
}
void add(double in1, double in2) {
    std::cout<<"Sum(double) = "<<in1+in2<<std::endl;
}
int main () {
    add(10,9);
    add(10.6,9.6);
    system("pause");
    return 0;
}