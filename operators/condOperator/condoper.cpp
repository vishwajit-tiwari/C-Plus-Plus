/**
 * @file condoper.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to show use of conditional operator/ternary operator.
 * @version 0.1
 * @date 16-03-2023
 * @copyright Copyright (c) 2023 
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num1, num2;

    cout<<"Enter two numbers : ";
    cin>>num1>>num2;

    //condition : (exp-1) ? exp-2 : exp-3
    (num1>num2) ? cout<<num1<<" is greater than "<<num2<<endl : cout<<num2<<" is greater than "<<num1<<endl;


    return 0;
}