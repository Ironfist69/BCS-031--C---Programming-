#include <iostream>
class Instrument {                       //Base class became abstruct
public:
    virtual void makeSound ()=0;        //Pure virtual function
};

class piano:public Instrument {
public:
    void makeSound () {
        std::cout<<"Playing piano.."<<std::endl;
    }
};
class guitar:public Instrument {
public:
    void makeSound () {
        std::cout<<"Playing guitar.."<<std::endl;
    }
};

int main () {
    Instrument* in1=new piano();
    Instrument* in2=new guitar();
    in1->makeSound();
    in2->makeSound();
    system("pause");
    return 0;
}