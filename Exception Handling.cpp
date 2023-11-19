#include<iostream>
int main () {
    int numarator, denominator;
    std::cout<<"Numarator: ";
    std::cin>>numarator;
    std::cout<<std::endl<<"Denominator: ";
    std::cin>>denominator;
    try {
        if(denominator==0)
        throw 0;
        int result=numarator/denominator;
        std::cout<<"Result: "<<result<<std::endl;
    }
    catch (int exception) {
        std::cout<<"ERROR: can't divide"<<std::endl;
    }
    system("pause");
    return 0;
}