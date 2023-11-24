//In call by value , a copy of the argument is passed to the function. That means any changes made to the parameter
//does not affect the original value of the argument outside function.
#include <iostream>
using namespace std;
void modifyValue(int x) {
    x=x+10;
    cout<<"Inside function: "<<x<<endl;
}
int main () {
    int num = 5;
    cout<<"Before num: "<<num<<endl;
    modifyValue(num);                   // Call the modifyValue function with num as the argument
    cout<<"After num: "<<num<<endl;
    system("pause");
    return 0;
}