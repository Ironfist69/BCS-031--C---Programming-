#include<iostream>
class Complex{
    int real, img;
    public:
        Complex(int r=0,int i=0) {
            real=r;
            img=i;
        }
        Complex operator+(Complex const& obj) {
            Complex res;  //res=Result
            res.real=real+obj.real;
            res.img=img+obj.img;
            return res;
        }
        void printResult() {
            std::cout<<real<<" + "<<img<<"i"<<std::endl;
        }
};
int main () {
    Complex c1(2,6),c2(4,3);
    Complex c3=c1+c2;
    c3.printResult();       //Ans: 6 + 9i
    system("pause");
    return 0;
}