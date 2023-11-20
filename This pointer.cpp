#include<iostream>

class Myclass {
        public:
        int x;
        Myclass(int x) {
            this->x=x;  //"This" pointer
        }
        void print() {
            std::cout<<"X= "<<this->x <<std::endl;
        }
};
int main () {
    Myclass PrintX(69);
    PrintX.print();
    system("pause");
    return 0;
}