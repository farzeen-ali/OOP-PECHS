#include<iostream>

void sayHello();
void printSum(int a, int b);
int returnFavNum();
int multiply(int a, int b);

int main(){
    // int day;

    // std::cout<<"Enter Day Number (1 to 7): "<<std::endl;
    // std::cin>>day;

    // switch(day){
    //     case 1:
    //         std::cout<<"Monday"<<std::endl;
    //         break;
    //     case 2:
    //         std::cout<<"Tuesday"<<std::endl;
    //         break;
    //     case 3:
    //         std::cout<<"Wednesday"<<std::endl;
    //         break;
    //     case 4:
    //         std::cout<<"Thursday"<<std::endl;
    //         break;
    //     case 5:
    //         std::cout<<"Friday"<<std::endl;
    //         break;
    //     case 6:
    //         std::cout<<"Saturday"<<std::endl;
    //         break;
    //     case 7:
    //         std::cout<<"Sunday"<<std::endl;
    //         break;
    //     default:
    //         std::cout<<"Invalid Day";
    // }


    // Functions
    // DRY => Donot Repeat Yourself
    // 4 types => 
    // 1) No return, no argument
    // 2) No return, with argument
    // 3) return, no argument
    // 4) return, with argument

    // 1)
    // sayHello();
    // 2)
    // printSum(3,6);
    // 3)
    // std::cout<<returnFavNum();
    // int result = returnFavNum();
    // std::cout<<"Result is: "<<result;

    // 4
    int result = multiply(3,4);
    std::cout<<"Multiplication Result: "<<result;
}
// 1) no return, no argument
void sayHello(){
    std::cout<<"Hello World";
}

// 2) no return but with argument
void printSum(int a, int b){
    int result = a + b;
    std::cout<<"Result: " << result<<std::endl;
}

// 3) return but without argument
int returnFavNum(){
    int favNum;
    std::cout<<"Enter your fav number: ";
    std::cin>>favNum;

    return favNum;
}

// 4) return, argument
int multiply(int a, int b){
    return a * b;
}