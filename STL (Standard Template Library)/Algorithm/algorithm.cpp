#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main () {
    vector <int> num = {10,6,2,15,69,-23,25,19,100,-5,-1,0};
    sort (num.begin(),num.end());
    for(int number:num){
        cout<<number<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}