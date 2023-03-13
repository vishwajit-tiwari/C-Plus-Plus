/**
 * @file area.cpp
 * @author Vishwajit Tiwari (https://github.com/vishwajit-tiwari)
 * @brief A program to demonstrate use of constant and literals.
 * @version 0.1
 * @date 13-03-2023
 * @copyright Copyright (c) 2023
 * 
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    const int LENGTH = 10;
    const int WIDTH = 20;
    const char NEWLINE = '\n';

    int area;

    area = LENGTH * WIDTH;

    cout<<"Area = "<<area;
    cout<<NEWLINE;

    return 0;
}