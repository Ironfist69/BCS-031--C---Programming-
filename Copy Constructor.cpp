#include<iostream>
using namespace std;
class Wall {
    int length,height;
    public:
    Wall(int len, int hgt) {        //parameterized constructor
        length=len;
        height=hgt;
    }
    Wall(Wall &obj) {               //copy constructor
        length=obj.length;
        height=obj.height;
    }
    int calArea() {
        return length*height;
    }
};
int main () {
    Wall wall_1(10,3);
    Wall wall_2(4,18);
    Wall wall_3(20,64);
    return 0;
}
