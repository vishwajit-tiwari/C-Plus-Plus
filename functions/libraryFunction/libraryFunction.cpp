/**
 * @file libraryFunction.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps to find square-root of a given number by using library-function.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>      // for standard input and output
#include<cmath>         // for math related calculations


using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    double input, squareroot;

    cout<<"Enter a number: ";
    cin>>input;

    // library function
    squareroot = sqrt(input);

    cout<<"Square root of : "<<input<<" is = "<<squareroot<<endl;

    return 0;
}