#include <iostream>
template<typename T>T myMax (T x, T y) {
    return (x>y)?x:y;
}
int main () {
    std::cout<<myMax <int>(6,8)<<std::endl;
    std::cout<<myMax <double>(6.0,9.0)<<std::endl;
    system("pause");
    return 0;
}