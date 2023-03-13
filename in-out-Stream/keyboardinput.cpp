/**
 * @file in-out-stream.cpp
 * @author Vishwajit Tiwari (https://github.com/vishwajit-tiwari)
 * @brief A program to show input and output stream (stdin: from keyboard to memory and stdout: from memory to device).
 * @version 0.1
 * @date 13-03-2023
 * @copyright Copyright (c) 2023
 * 
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside :"<<__FUNCTION__<<"() function\n";

    char name[50];

    cout<<"Please enter your name: ";
    cin>>name;
    cout<<"your name is : "<<name<<endl;

    cout<<"subject"<<"\tmarks"<<"\nmathematic\t"
    <<90<<"\ncomputer\t"<<77<<"\nchemistry\t"<<69<<endl;

    return 0;
}