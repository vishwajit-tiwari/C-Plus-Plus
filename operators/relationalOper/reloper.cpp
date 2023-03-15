/**
 * @file reloper.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to represent realtional operators.
 * @version 0.1
 * @date 15-03-2023
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

    if(a==b) {
        cout<<"Line-1 : a = b"<<endl;
    }
    else {
        cout<<"Line-1 : a != b"<<endl;
    }
    
    if(a>b) {
        cout<<"Line-2 : a > b"<<endl;
    }
    else {
        cout<<"Line-2 : a !> b"<<endl;
    }

    if(a<b) {
        cout<<"Line-3 : a < b"<<endl;
    }
    else {
        cout<<"Line-3 : a !< b"<<endl;
    }

    /*Changing the value of a and b*/
    a = 3;
    b = 20;

    if(a<=b) {
        cout<<"Line-4 : a <= b"<<endl;
    }

    if(b>=a) {
        cout<<"Line-4 : b >= a"<<endl;
    }


    return 0;
}

