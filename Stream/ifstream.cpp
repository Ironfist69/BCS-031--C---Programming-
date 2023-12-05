#include<iostream>
#include<fstream>
using namespace std;
main () {
    ifstream file ("meta.txt");
    if(file.is_open()) {
        string content;
        while(getline(file,content)) {
            cout<<content<<endl;
        }
        file.close();
    }
    else {
        cout<<"ERR_READ"<<endl;
    }
    system("pause");
    return 0;
}