/**
 * @file typecasting.cpp
 * @author Vishwajit Tiwari (https://github.com/vishwajit-tiwari)
 * @brief A program to demonstrate typecsting and its application.
 * @version 0.1
 * @date 13-03-2023
 * @copyright Copyright (c) 2023
 * 
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int a;
    float b = 2.55;

    /*Implecit conversion*/
    a = b;
    cout<<"a (implicit conversion) = "<<a<<endl;

    /*Explicit conversion (C Language)*/
    a = (int)b;
    cout<<"a (explicit conversion) = "<<a<<endl;

    /*Explicit conversion C++*/
    a = int(b);
    cout<<"a (explicit conversion) = "<<a<<endl;

    return 0;
}