/**
 * @file arithoperator.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to represent Arithmetic Operator.
 * @version 0.1
 * @date 15-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int a = 20;
    int b = 5;
    int c = 0;

    /*Aritmetic operators*/
    c = a+b;
    cout<<"Line-1 - Value of C is : "<<c<<endl;
    
    c = a-b;
    cout<<"Line-2 - Value of C is : "<<c<<endl;
    
    c = a*b;
    cout<<"Line-3 - Value of C is : "<<c<<endl;

    c = a/b;
    cout<<"Line-4 - Value of C is : "<<c<<endl;

    c = a%b;
    cout<<"Line-5 - Value of C is : "<<c<<endl;

    c = a++;
    cout<<"Line-6 - Value of C is : "<<c<<endl;

    c = a--;
    cout<<"Line-7 - Value of C is : "<<c<<endl;

    return 0;
}