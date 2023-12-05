#include<iostream>
#include<iomanip>
using namespace std;
main() {
    double pi=3.14159265359;
    cout<<"Default: "<<pi<<endl;
    cout<<"Set Precision (upto 4): "<<setprecision(4)<<pi<<endl;
    system("pause");
    return 0;
}