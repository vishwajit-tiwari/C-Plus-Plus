/**
 * @file    externVar.cpp
 * @author  Vishwajit Tiwari
 * @brief   A program to demonstrate external variables
 * @version 0.1
 * @date    13-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/*external variables defination*/
extern int a, b;
extern int c;
extern float f;


int main(int argc, char const *argv[])
{
    cout<<"Inside : " <<__FUNCTION__<<"() function"<<endl;

    /*external variables declaration*/
    int a, b;
    int c;
    float f;

    /*external variables initialization*/
    a = 10;
    b = 20;

    c = a + b;

    f = 90.0 / 30.1;

    /*Final outcome*/

    cout<<"sum of "<<a <<"+"<<b <<" = "<<c <<endl;
    cout<<"float f = " <<"90.0/30.1 = "<<f<<endl;

    return 0;
}
