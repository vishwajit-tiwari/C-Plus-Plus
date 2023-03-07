/**
 * @file sumofTwoNumbers.cpp
 * @author Vishwajit Tiwari (https://github.com/vishwajit-tiwari)
 * @brief Sum of two numbers
 * @version 0.1
 * @date 2023-03-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, sum = 0;

    // Standard output
    cout<<"Enter two numbers to find the sum: \n";
    // Standard input
    cin>>num1>>num2;
    
    // Operation on numbers
    sum = num1 + num2;

    // Final outcome display
    cout<<"Sum of two numbers are : "<<sum<<endl;
    cout<<"Sum = "<<sum<<"\n";
    
    return 0;
}
