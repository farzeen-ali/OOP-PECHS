// Constructors (Special Method) 
// no return type (not even void)
// Method same Class 
// Object Create, automatically call
// Types 3: 1) Default 2) Parameterized 3) Copy

#include<iostream>
#include<string>

class Student{
    public:
        std::string name;
        int rollNo;

        // Default Constructor
        Student(){
            name = "Guest";
            rollNo = 0;
            std::cout<<"Default Constructor!"<<std::endl;
        }

        void display(){
            std::cout<<"Name: "<< name << ", Roll No: "<< rollNo<<std::endl;
        }
};

int main(){
    Student s1;
    s1.display();
    return 0;
}