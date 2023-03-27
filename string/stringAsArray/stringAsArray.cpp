/**
 * @file stringAsArray.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of String as an Array.
 * @version 0.1
 * @date 27-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>
#define USERINPUT

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function\n";

    char chrArr[] = "Hello World!!!";
    char charArr[20];

    #ifndef USERINPUT
    cout<<"chrArr = "<<chrArr<<endl;
    #else
    cout<<"Enter Your Name: ";
    cin>>charArr;
    cout<<"charArr = "<<charArr<<endl;

    #endif

    return 0;
}