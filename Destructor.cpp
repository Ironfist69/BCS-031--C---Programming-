#include <iostream>
using namespace std;
class test {
    public:
        test () {
            cout<<"Constructor executed.."<<endl;
        }
        ~test () {
            cout<<"Destructor executed.."<<endl;
        }
};
int main () {
    test T;
    system("pause");
    return 0;
}