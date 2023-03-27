/**
 * @file usrInput.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of taking String Input by using Pointer.
 * @version 0.1
 * @date 27-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    char name[] = "C-Plus-Plus";
    char * nameptr;

    nameptr = name;

    cout<<"Input String = ";
    while(*nameptr!='\0')
    {
        cout<<*nameptr;
        nameptr++;
    }
    cout<<endl;

    return 0;
}