#include <iostream>
#include <iomanip>
using namespace std;
main () {
    int num1=123;
    int num2=12345;
    cout<<"Before: "<<endl<<num1<<endl<<num2<<endl;
    cout<<"After: "<<endl<<setw(5)<<num1<<endl<<num2<<endl;
    system("pause");
    return 0;
}