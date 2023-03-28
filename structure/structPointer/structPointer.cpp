/**
 * @file structPointer.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will take hight of a person by using structure and Pointer.
 * @version 0.1
 * @date 28-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>
#define multiInput

using namespace std;

/********************Structure Defination**********************/
struct Hight {
    int feet;
    float inch;
};

/***********************main function**************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    Hight *hptr, hv;

    hptr = &hv;                 // allocating address to pointer

    cout<<"Enter your Hight:\n";
    cout<<"Feet: ";
    cin>>(*hptr).feet;
    cout<<"Inch: ";
    cin>>(*hptr).inch;

    cout<<"You are "<<(*hptr).feet<<" feet "<<(*hptr).inch<<" inches."<<endl;

    return 0;
}