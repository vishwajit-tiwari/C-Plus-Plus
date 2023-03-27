/**
 * @file usrInput.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of Multi-word String Input.
 * @version 0.1
 * @date 27-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

   char name[40];

    cout<<"Please enter a Name: ";
    cin.getline(name,sizeof(name));                 // Take string as input
    cout<<"Hello "<<name<<"\nWelcome to the new world!!!"<<endl;

    return 0;
}