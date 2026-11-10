#include<iostream>

class Walk{
    public:
        void walk(){
            std::cout<<"Can Walk"<<std::endl;
        }
};
class Swimmer{
    public:
        void swimming(){
            std::cout<<"Can Swim"<<std::endl;
        }
};

class Duck : public Walk, public Swimmer{
    public:
        void display(){
            std::cout<<"Duck Features!"<<std::endl;
        }
};

int main(){
    Duck myDuck;
    myDuck.display();
    myDuck.walk();
    myDuck.swimming();
    return 0;
}

