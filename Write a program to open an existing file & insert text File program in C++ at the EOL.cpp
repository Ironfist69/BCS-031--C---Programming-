#include<iostream>
#include<fstream>
using namespace std;
main () {
    ofstream file;
    file.open("test.txt",ios::app);
    if(!file.is_open()) {
        cerr<<"ERR_OPEN_EXCEPTION"<<endl;
        return 1;
    }
    string txtInsert = "File program in C++";
    file<<txtInsert<<endl;
    file.close();
    system("pause");
    return 0;
}