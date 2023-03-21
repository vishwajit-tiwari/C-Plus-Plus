/**
 * @file factorial.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program shows use of while loop to calculate factorial of the given number.
 * @version 0.1
 * @date 21-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num, i=1, fact=1;

    cout<<"Enter a positive integer: ";
    cin>>num;

    while(i<=num) {
        fact = fact*i;
        ++i;
    }

    cout<<"Factorial of "<<num<<" is = "<<fact<<endl;

    return 0;
}