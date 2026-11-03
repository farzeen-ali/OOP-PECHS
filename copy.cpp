#include<iostream>
#include<string>

class Car{
    public:
        std::string brand;
        int year;

        Car(std::string b, int y){
            brand = b;
            year = y;
            std::cout<<"Paramterized Constructor!"<<std::endl;
        }

        Car(const Car &obj){
            brand = obj.brand;
            year = obj.year;
            std::cout<<"Copy Constructor!"<<std::endl;
        }

        void display(){
            std::cout<<"Brand: "<< brand << ", Year: "<< year<<std::endl;
        }
};

int main(){
    Car c1("Civic", 2026); // paramterized
    Car c2 = c1; // Copy constructor call
    c1.display();
    c2.display();
    return 0;
}