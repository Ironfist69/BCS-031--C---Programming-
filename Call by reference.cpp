//In call by value , a reference of the original argument is passed to the function. That means any changes made to the
//parameter inside function directly affect the original value of the argument outside function.

#include <iostream>
using namespace std;
void modifyReference(int& x) {
    x=x+10;
    cout<<"Inside function: "<<x<<endl;
}
int main () {
    int num = 5;
    cout<<"Before num: "<<num<<endl;
    modifyReference(num);                   // Call the modifyReference function with num as the argument
    cout<<"After num: "<<num<<endl;
    system("pause");
    return 0;
}