// Inheritance => Parent Class => Child
// 4 types: Single, Multiple, Multilevel, Hierarchical

#include<iostream>

class Animal{
    public:
        void eat(){
            std::cout<<"Animal eats!"<<std::endl;
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout<<"Meow"<<std::endl;
        }
};

int main(){
    Cat myCat;
    myCat.eat();
    myCat.meow();
    return 0;
}