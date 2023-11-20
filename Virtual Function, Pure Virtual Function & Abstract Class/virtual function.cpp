#include<iostream>
class Instruments {
public:
    virtual void makeSound () {                           //Virtual function is a function which is defined in the
        std::cout<<"Instrument playing..."<<std::endl;      //base class as well as redefined in derived class
    }
};
class piano:public Instruments {
public:
    void makeSound () {
        std::cout<<"Piano is playing..."<<std::endl;
    }
};
int main () {
    Instruments* in1 = new piano ();
    in1-> makeSound();
    system("pause");
    return 0;
}