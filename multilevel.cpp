#include<iostream>

class A {
    public:
        void a(){
            std::cout<<"Grand Parent!"<<std::endl;
        }
};
class B : public A{
    public:
        void b(){
            std::cout<<"Parent!"<<std::endl;
        }
};
class C : public B{
    public:
        void c(){
            std::cout<<"Child!"<<std::endl;
        }
};

int main(){
    C myChild;
    myChild.a();
    myChild.b();
    myChild.c();
    return 0;
}
