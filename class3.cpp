#include<iostream>
#include<string>

// Template/Blueprint
class Student{
    // Data Members, Attributes, Properties
    public:
        std::string name;
        int rollNo;
        float marks;


    // Method, Behavior, Action
    void displayStudentInfo(){
        std::cout<<"Student Name: "<< name<< std::endl;
        std::cout<<"Student Roll No: "<< rollNo<< std::endl;
        std::cout<<"Student Marks: "<< marks<< std::endl;
    }
};

int main(){
    Student ali;
    Student farzeen;

    ali.name = "Ali";
    ali.rollNo = 12;
    ali.marks = 80.7;

    farzeen.name = "Farzeen";
    farzeen.rollNo = 10;
    farzeen.marks = 90.7;

    ali.displayStudentInfo();
    farzeen.displayStudentInfo();

    return 0;
}