/**
 * @file incdecoper.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to show use of increment and decrement operators.
 * @version 0.1
 * @date 16-03-2023
 * @copyright Copyright (c) 2023 
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[]) 
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int i = 10;

    cout<<"--i = "<<--i<<endl;
    cout<<"++i = "<<++i<<endl;

    cout<<"sizeof(i) = "<<sizeof(i)<<endl;


    return 0;
}