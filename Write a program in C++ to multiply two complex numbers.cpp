#include<iostream>
class complex {
    int real,img;
    public:
        complex(int r=0,int i=0) {
            real=r;
            img=i;
        }
        complex operator*(complex const& obj) {
            complex res;
            res.real=(real*obj.real)-(img*obj.img);
            res.img=(real*obj.img)+(img*obj.real);
            return res;
        }
        void printResult() {
            std::cout<<real<<" + "<<img<<"i"<<std::endl;
        }
};
main () {
    complex c1(1,3),c2(2,2);
    complex c3=c1*c2;
    c3.printResult();
    system("pause");
    return 0;
}