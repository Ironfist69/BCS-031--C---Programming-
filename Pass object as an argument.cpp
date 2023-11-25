#include <iostream>
using namespace std;
class student {
    public:
    double marks;
    student(double m) {
        marks=m;
    }
};
void calAvg(student s1, student s2) {
    double avg=(s1.marks+s2.marks)/2;
    cout<<avg;
}
main () {
    student student1(88.3),student2(42);
    calAvg(student1,student2);
    return 0;
}