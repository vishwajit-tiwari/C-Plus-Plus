/**
 * @file swapTwoNumbers.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program swap two numbers using call-by-reference method and function.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

//function prototype/declaration
void swap(int &, int &);


int main(int argc, char const * argv[]) 
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num1, num2;

    cout<<"Enter two integers: ";
    cin>>num1>>num2;

    cout<<"\nNumbers before swapping:"<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;

    //function call
    swap(num1,num2);

    cout<<"\nNumbers after swapping:"<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;

    return 0;
}

//function definition
void swap(int & num1, int & num2)
{   
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}