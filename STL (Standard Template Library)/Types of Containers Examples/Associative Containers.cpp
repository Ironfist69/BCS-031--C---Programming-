#include<iostream>
#include<set>
using namespace std;
int main () {
    set <int> numbers={100,36,75,12,4,-3,16,69};
    for(int num:numbers){
        cout<<num<<", ";
    }
    cout<<endl;
    system("pause");
    return 0;
}