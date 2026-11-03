#include<iostream>

int main(){
    // std::cout<<"Hello World";
    // Variables
    // Data Type = Value
    // int a;
    // a = 23;
    // int age = 23; // Declaration + initialization
    // std::cout<<"My age is: "<<age<<std::endl<<std::endl;
    // double percentage = 78.9;
    // std::cout<<"My Percentage is: "<<percentage<<std::endl;
    // std::cout<<std::endl;
    // char letter = 'c';
    // std::cout<<"Letter is: "<<letter<<std::endl;
    // bool isOnline = true;
    // std::cout<<"Online status is: "<<isOnline<<std::endl;

    // User Input
    // int age;
    // std::cout<<"Enter your age: ";
    // std::cin >> age;
    // std::cout<<"Your age is: "<<age;

    // Operators (Operators, Operands, Expression)
    int value1, value2;
    double result;
    char operation;

    std::cout<<"Enter First Value: ";
    std::cin>>value1;
    std::cout<<"Enter Second Value: ";
    std::cin>>value2;
    std::cout<<"Enter Operation (+,-,*,/): ";
    std::cin>>operation;

    if(operation == '+'){
        result = value1 + value2;
        std::cout<<"Your Result is: "<<result;
    }
    else if(operation == '-'){
        result = value1 - value2;
        std::cout<<"Your Result is: "<<result;
    }
    else if(operation == '*'){
        result = value1 * value2;
        std::cout<<"Your Result is: "<<result;
    }
    else if(operation == '/'){
        if(value2 != 0){
        result = value1 / value2;
        std::cout<<"Your Result is: "<<result;
    } else {
        std::cout<<"Math Error"<<std::endl;
    }
    }
    else{
        std::cout<<"Invalid Operator!"<<std::endl;
    }
    return 0;
}