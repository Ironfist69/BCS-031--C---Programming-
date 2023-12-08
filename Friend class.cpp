#include<iostream>
class base {
    private: int private_var;
    protected: int protected_var;
    public:
    base () {
        private_var=10;
        protected_var=59;
    }
    friend class frClass;
};
class frClass {
    public:
    void print(base& obj) {
        std::cout<<"Private: "<<obj.private_var<<std::endl;
        std::cout<<"Protected: "<<obj.protected_var<<std::endl;
    }
};
main () {
    base calling;
    frClass friend_class;
    friend_class.print(calling);
    system("pause");
    return 0;
}