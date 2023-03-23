/**
 * @file maxofTwoNumbers.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program finds the max of two numbers using function.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

//function prototype/declaration
int max(int, int);

//global variables
int equalflag = 0;

int main(int argc, char const * argv[]) 
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num1, num2, maximum;

    cout<<"Enter two integers: ";
    cin>>num1>>num2;

    //function call
    maximum = max(num1,num2);

    if(equalflag == 0)
    cout<<"Maximum number is : "<<maximum<<endl;
    if(equalflag == 1)
    cout<<"Both numbers are equal : "<<maximum<<endl;


    return 0;
}

//function definition
int max(int num1, int num2)
{
    int result;

    if(num1>num2) {
        result = num1;
    }
    else if(num1==num2) {
        result = num1;
        equalflag = 1;
    }
    else {
        result = num2;
    }

    return result;
}