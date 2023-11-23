#include <iostream>
using namespace std;
class wheels{
    public:
    void wheel_count () {               
        cout<<"Four wheeler"<<endl;
    }
};
class seats{
    public:
    void seats_count () {
        cout<<"38+1 Seats"<<endl;
    }
};
class Bus:public wheels,public seats {      //Multiple inheritance
    public:
    void bus_name() {
        cout<<"This is a bus"<<endl;
    }
};             
int main() {
    Bus b1;
    b1.bus_name();
    b1.wheel_count();
    b1.seats_count();
    system("pause");
    return 0;
}