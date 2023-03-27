/**
 * @file arrayPointer.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of Array Pointer.
 * @version 0.1
 * @date 27-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

#define MAX_SIZE 3
// #define Horizontal
#define Vertical

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int arrNumber[MAX_SIZE] = {100,200,300};    // Array of integers
    int * arrPointer;                           // Pointer to an Array

    arrPointer = arrNumber;                     // Assigning address of Array to Pointer

    #ifdef Vertical
    // for Address & Values (Vertical)
    for(int i=0; i<MAX_SIZE; i++)
    {
        cout<<"Address of variable"<<"["<<i<<"] : ";
        cout<<(arrPointer+i)<<endl;
        cout<<"Value of variable"<<"["<<i<<"]   : ";
        cout<<*(arrPointer+i)<<endl;
    }
    #else
    // for Address (Horizontal)
    for(int i=0; i<MAX_SIZE; i++)
    {
        cout<<"Address of variable"<<"["<<i<<"] : ";
        cout<<(arrPointer+i);
        cout<<" ";
    }
    cout<<endl;

    // for Values (Horizontal)
    for(int i=0; i<MAX_SIZE; i++)
    {
        cout<<"Value of variable"<<"["<<i<<"]   : ";
        cout<<*(arrPointer+i);
        cout<<"            ";
    }
    cout<<endl;
    #endif
    
    return 0;
}
