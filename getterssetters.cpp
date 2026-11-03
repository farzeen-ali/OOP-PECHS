#include<iostream>
#include<string>

class Employee{
    private:
        std::string name;
        double salary;
    public:
        void setName(std::string empName){
            name = empName;
        }
        std::string getName(){
            return name;
        }

        void setSalary(double empSalary){
            if (empSalary > 0){
                salary = empSalary;
            }
            else {
                std::cout<<"Wrong Salary! Salary Can't be in negative";
                salary = 0;
            }
        }
        double getSalary(){
            return salary;
        }

};

int main(){
    Employee e1;
    e1.setName("Farzeen Ali");
    e1.setSalary(10.0);

    std::cout<<"Employee Name: "<<e1.getName()<<std::endl;
    std::cout<<"Employee Salary: "<<e1.getSalary()<<std::endl;
    return 0;
}
