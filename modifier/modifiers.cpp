/**
 * @file modifiers.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to show access modifiers in c-plus-plus.
 * @version 0.1
 * @date 15-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    short int i;
    short unsigned int j;

    j = 6000;

    cout<<"Enter the value of short signed int i: ";
    cin>>i;
    cout<<"Enter the value of short unsigned int j:";
    cin>>j;

    i = j;

    cout<<"i = "<<i<<" j = "<<j<<endl;

    return 0;
}