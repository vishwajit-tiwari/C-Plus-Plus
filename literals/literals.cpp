/**
 * @file literals.cpp
 * @author Vishwajit Tiwari (https://github.com/vishwajit-tiwari)
 * @brief A program to implement constant and literals.
 * @version 0.1
 * @date 13-03-2023
 * @copyright Copyright (c) 2023
 * 
*/

#include <iostream>

using namespace std;

const double pi = 3.14;
const char newline = '\n';

int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    double r = 5.0;
    double areaofcircle;

    areaofcircle = 2*pi*r;

    cout<<"Area of Circle = "<<areaofcircle;
    cout<<newline;
    

    return 0;
}