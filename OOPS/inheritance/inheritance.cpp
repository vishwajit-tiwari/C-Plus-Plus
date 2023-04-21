/**
 * @file inheritance.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Inheritance is the mechanism by which one class acquires the properties of another class.
 * @note Inheritance helps to maintain code re-useablity and fast implimentation time.
 * @version 0.1
 * @date 21-04-2023
 * @copyright Copyright (c) 2023
*/


#include<iostream>

using namespace std;

/******************Class: Parent class*******************/
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

/*****************Class: Child class*********************/
class rectangle: public shape {

    public:
    int getArea() {
        return (width*height);
    }

};


int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    int w,h;

    rectangle rect;

    cout<<"Enter width and hight to calculate area of rectangle: ";
    cin>>w>>h;

    rect.setHight(h);
    rect.setWidth(w);

    cout<<"Area of rectangle = "<<rect.getArea()<<endl;

    return 0;
}