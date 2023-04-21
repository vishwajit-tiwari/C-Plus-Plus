/**
 * @file multiLevelInheritance.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program shows use of multi level inheritance.
 * @version 0.1
 * @date 21-04-2023
 * @copyright Copyright (c) 2023
*/


#include <iostream>

using namespace std;


/***************Parent Class*****************/
class A {

    public:
    void Display() {
        cout<<"Inside Base Class"<<endl;
    }

};

/***************Derived Class****************/
class B : public A {

    public:
    void fun() {
        cout<<"Inside Derived class level-1"<<endl;
    }
};

/***********Derived Class Level-2************/
class C : public B {

    public:
    void fun2() {
        cout<<"Inside Derived class level-2"<<endl;
    }
};


int main(int argc, char const *argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    C obj;

    obj.Display();
    obj.fun();
    obj.fun2();

    return 0;
}