#include<iostream>

class Shape{
    public:
        int width, height;
        void setValues(int w, int h){
            width = w;
            height = h;
        }
};

class Rectangle : public Shape{
    public:
        int getArea(){
            return (width * height);
        }
};
class Triangle : public Shape{
    public:
        int getArea(){
            return (width * height) / 2;
        }
};

int main(){
    Rectangle r;
    r.setValues(5,3);
    std::cout<<"Area of Rectangle is: "<< r.getArea()<<std::endl;
    Triangle t;
    t.setValues(5,3);
    std::cout<<"Area of Triangle is: "<< t.getArea()<<std::endl;
    return 0;
}