/**
 * @file voidPointer.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of Void Pointer.
 * @version 0.1
 * @date 24-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    float num;
    void * fp;     //Void Pointer

    fp = &num;          // Pointer pointing to num address

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Address of num: "<<&num<<endl;
    cout<<"Void pointer value: "<<fp<<endl;
    cout<<"num = "<<num<<endl;
    
    return 0;
}
