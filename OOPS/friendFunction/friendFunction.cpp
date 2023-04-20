/**
 * @file friendFunction.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This a non member function that can access class objects Private or Protected data.
 * @note A non member function can not access objects Private or Protected but 
 * friend-function can access.
 * @version 0.1
 * @date 20-04-2023
 * @copyright Copyright (c) 2023
*/

/**
 * Syntax of Friend-Function:
 * 
 * class className {
 * -----------
 * -----------
 * -----------
 * friend return-type functionName(arguments)
 * }
 * 
*/

#include<iostream>

using namespace std;


class Distance {
private:
    int meter;

public:
    Distance():meter(0){}
    friend int addFive(Distance);       // Friend function prototype
};

/*********************Friend Function Definition******************/
int addFive(Distance d) {
    d.meter += 5;
    return d.meter; 
}


int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    Distance d;

    cout<<"Distance = "<<addFive(d)<<endl;

    return 0;
}