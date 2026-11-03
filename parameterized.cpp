#include<iostream>
#include<string>

class Student{
    public:
        std::string name;
        int rollNo;

        Student(std::string studentName, int studentRollNo){
            name = studentName;
            rollNo = studentRollNo;
            std::cout<<"Paramterized Constructor!"<<std::endl;
        }

        void display(){
            std::cout<<"Name: "<< name << ", Roll No: "<< rollNo<<std::endl;
        }
};

int main(){
    Student s1("Farzeen", 123);
    s1.display();
    return 0;
}