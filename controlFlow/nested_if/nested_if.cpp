/**
 * @file nested_if.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to show nested-if statements.
 * @version 0.1
 * @date 20-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function\n";

    int num;

    cout<<"Enter an integer: ";
    cin>>num;

    if(num>0) {

        cout<<"You have entered a positive integer: "<<num<<endl;
        
        if(num%2==0) {
            cout<<num<<" is even number"<<endl;
        }
        if(num%2!=0) {
            cout<<num<<" is odd number"<<endl;
        }

    }
    else if(num<0) {
        cout<<"You have entered a negative integer: "<<num<<endl;
    }
    else {
        cout<<"You entered :"<<num<<endl;
    }

    cout<<"This statement always Execuited\n";

    return 0;
}