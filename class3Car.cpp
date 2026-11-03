#include<iostream>
#include<string>

class Car {
    public:
        std::string brand;
        int year;

        void showCarDetails(){
            std::cout<<"<------ Car Details ------>"<<std::endl;
            std::cout<<"Car Brand"<<brand<<std::endl;
            std::cout<<"Car Year"<<year<<std::endl;
        }
};

int main(){
    Car car1;

    std::cout<<"Enter your Car Brand: ";
    std::cin >> car1.brand;
    std::cout<<"Enter your Car Year: ";
    std::cin >> car1.year;

    car1.showCarDetails();

}