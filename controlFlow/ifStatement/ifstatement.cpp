/**
 * @file ifstatement.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief A program to show control statement uses (if statement)
 * @version 0.1
 * @date 16-03-2023
 * @copyright Copyright (c) 2023
*/

#include <iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int num;

    cout<<"Please enter a number: ";
    cin>>num;

    if(num>0) {
        cout<<"You have entered a positive integer : "<<num<<endl;
    }

    cout<<"This statement will always execute"<<endl;

    return 0;
}