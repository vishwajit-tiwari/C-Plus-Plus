/**
 * @file multipleInheritance.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Inheritance is the mechanism by which one class acquires the properties of another class.
 * @note Inheritance helps to maintain code re-useablity and fast implimentation time.
 * @version 0.1
 * @date 21-04-2023
 * @copyright Copyright (c) 2023
*/


#include<iostream>

using namespace std;

/******************Parent Class-A*******************/
class shape {
    
    public:
    void setHight(int h) {
        height = h;
    }

    void setWidth(int w) {
        width = w;
    }

    protected:
    int height;
    int width;

};

/******************Parent Class-B*******************/
class Paintcost {
    public:
    int getCost(int area) {
        return (area*70);
    }
};

/*******************Child Class**********************/
class rectangle: public shape, public Paintcost {

    public:
    int getArea() {
        return (width*height);
    }

};


int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    int w,h, area;

    rectangle rect;

    cout<<"Enter width and hight to calculate area of rectangle: ";
    cin>>w>>h;

    rect.setHight(h);
    rect.setWidth(w);

    area = rect.getArea();

    cout<<"Area of rectangle = "<<rect.getArea()<<endl;
    cout<<"Cost of rectangle = "<<rect.getCost(area)<<endl;

    return 0;
}