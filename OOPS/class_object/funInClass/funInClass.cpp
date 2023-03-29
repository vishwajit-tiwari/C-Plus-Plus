/**
 * @file volumeofBox.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will give info of a car using the concept of Class, Function and Object.
 * @version 0.1
 * @date 29-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/**********************************Class************************************/
class Box {
    public:
    double length;
    double width;
    double height;
};

/*******************************main() function*****************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    //object of class
    Box obj1, obj2;
    double volume = 0.0;

    obj1.length = 10.0;
    obj1.height = 12.3;
    obj1.width = 8.0;

    obj2.length = 15.0;
    obj2.width = 23.2;
    obj2.height = 11.4;

    volume = obj1.length*obj1.width*obj1.height;
    cout<<"Volume of Box1 : "<<volume<<endl;
    volume = obj2.length*obj2.width*obj2.height;
    cout<<"Volume of Box2 : "<<volume<<endl;

    return 0;
}