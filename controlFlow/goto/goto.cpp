/**
 * @file goto.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program shows the application of goto statement. A goto statement provides unconditional jump from
 * goto to a labled statement in the same function. This is used to tranfering the control of program to a given lable.
 * @version 0.1
 * @date 21-03-2023
 * @copyright Copyright (c) 2023
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if(num%2==0) {
        goto evenp;
    }
    else {
        cout<<"Odd number"<<endl;
    }

// level for goto
evenp:
    cout<<"Even number"<<endl;

    return 0;
}