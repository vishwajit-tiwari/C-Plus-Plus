/**
 * @file factOfNum.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This is a program to find the factorial of a number by using recursion.
 * @version 0.1
 * @date 01-05-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/****************Factorial function****************/
int fact(int num) {
    if(num>1) {
        return num*fact(num-1);
    }
    else
    {
        return 1;
    }
}


/*****************Main() function******************/
int main(int argc, char const * argv[])
{
    int num;

    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    cout<<"Enter a number to find factorial: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<fact(num)<<endl;


    return 0;
}