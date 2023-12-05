#include<iostream>
#include<fstream>
using namespace std;
main () {
    ofstream file("meta.txt");
    if(file.is_open()) {
        file<<"Hello I am Zuck";
        file.close();
    }
    else {
        cout<<"ERR_OPENING_EXCEPTION";
    }
    system("pause");
    return 0;
}