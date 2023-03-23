/**
 * @file factorial.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program shows use of for-loop to calculate the factorial of input number.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num, fact = 1;

    cout<<"Enter a positive integer: ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        fact *= i;      //fact = fact*i;
    }    

    cout<<"factorial of : "<<num<<" = "<<fact<<endl;

    return 0;
}