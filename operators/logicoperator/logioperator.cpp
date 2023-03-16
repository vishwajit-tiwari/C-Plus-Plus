/**
 * @file logioperator.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to demonstrate Logical Operators.
 * @version 0.1
 * @date 16-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int a = 20;
    int b = 15;
    int c;
    int res;

    if(res = a&&b) {
        cout<<"Line-1 : Codition is True: "<<"Result = "<<res<<endl;
    }
    else {
        cout<<"Line-1 : Condition is False: "<<"Result = "<<res<<endl;
    }

    if(res = a||b) {
        cout<<"Line-2 : Condition is True: "<<"Result = "<<res<<endl;
    }
    else {
        cout<<"Line-2 : Condition is False: "<<"Result = "<<res<<endl;
    }

    a = 0;
    b = 9;

    if(res = a&&b) {
        cout<<"Line-3 : Condition is True: "<<"Result = "<<res<<endl;
    }
    else {
        cout<<"Line-3 : Condition is False: "<<"Result = "<<res<<endl; 
    }

    if(res = !(a&&b)) {
        cout<<"Line-4 : Condition is True: "<<"Result = "<<res<<endl;
    }
    else {
        cout<<"Line-4 : Condition is False: "<<"Result = "<<res<<endl;
    }

    return 0;
}