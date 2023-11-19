#include<iostream>
using namespace std;
class Base {
    public: 
        void printMSG() {       //Member function
            cout<<"I'm Member Function";
        }
};
int main () {
    Base member_messege;
    member_messege.printMSG();
    cout<<endl;
    system("pause");
    return 0;
}