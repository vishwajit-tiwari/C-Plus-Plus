/**
 * @file switch.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This is a program to show application of switch stattement.
 * @version 0.1
 * @date 20-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside :"<<__FUNCTION__<<"() function"<<endl;

    float num1,num2;
    char o;

    cout<<"Enter the operators + - * / % :";
    cin>>o;
    cout<<"Enter two operands/numbers : ";
    cin>>num1>>num2;

    switch(o)
    {
        case '+':
            cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
            break;

        case '-':
            cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
            break;

        case '*':
            cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
            break;

        case '/':
            cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
            break;

        case '%':
            cout<<num1<<"%"<<num2<<"="<<(int)num1%(int)num2<<endl;
            break;

        default:
            cout<<"Invalid Operator choosen: "<<o<<endl;
            break;
    }


    return 0;
}