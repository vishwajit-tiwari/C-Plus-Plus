/**
 * @file volumeofBox.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will give info of a car using the concept of Class, Function and Scope Resolution Object.
 * @version 0.1
 * @date 29-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/********************************Class*********************************/
class Car {
    public:
    string CarName;
    int CarId;

    void printname();           //function declaration

    void printid() {            //function defination
        cout<<"Car Id   : "<<CarName<<CarId<<endl;
    }
};


/*************Function Defination using :: Scope resolution*************/
void Car :: printname() {
    cout<<"Car Name : "<<CarName<<endl;
}


/*******************************main() function*************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    Car obj1;

    obj1.CarName = "BMW";
    obj1.CarId  = 23;

    obj1.printname();
    obj1.printid();
    cout<<endl;

    return 0;
}