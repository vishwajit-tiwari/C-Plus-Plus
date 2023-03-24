/**
 * @file nullpointer.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of NULL Pointer.
 * @version 0.1
 * @date 24-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num;
    int *ip = NULL;     //NULL Pointer

    ip = &num;          // Pointer pointing to num address

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"You have entered num: "<<num<<endl;
    cout<<"Address of num: "<<ip<<endl;
    cout<<"num = "<<*ip<<endl;
    
    return 0;
}
