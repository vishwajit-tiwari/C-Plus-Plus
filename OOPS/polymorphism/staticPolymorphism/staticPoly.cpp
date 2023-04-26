/**
 * @file staticPoly.cpp 
 * @author vishwajit-tiwari (https://github.com/vishwajit-tiwari)
 * @brief Polymorphism: It allows object to behave differently in different situations. 
 * This is an example of Static/Compile Time polymorphism or early-binding. 
 * @note Polymorphism occuress when there are hierarchy of classes and they are related by inheritance.
 * @version 0.1
 * @date 26-04-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;


/********************Polymorphism*********************/
class PolyMorPhysm {
    public:
    int sum(int num1, int num2) {
        return (num1+num2);
    }

    int sum(int num1, int num2, int num3) {
        return (num1+num2+num3);
    }
};


int main(int argc, char const * argv[]) 
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    PolyMorPhysm pm;

    cout<<"Sum : "<<pm.sum(10,20)<<endl;
    cout<<"Sum : "<<pm.sum(10,20,30)<<endl;

    return 0;
}