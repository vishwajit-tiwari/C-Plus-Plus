/**
 * @file usrInput.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of string input.
 * @version 0.1
 * @date 27-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    string usrStr;

    cout<<"Please enter a Name: ";
    getline(cin,usrStr);                    // Take string as input
    cout<<"Hello "<<usrStr<<"\nWelcome to the new world!!!"<<endl;


    return 0;
}