/**
 * @file refernceVar.cpp
 * @author Vishwajit Tiwari (https://github.com/vishwajit-tiwari)
 * @brief A program to show use of reference variables.
 * @version 0.1
 * @date 13-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside "<<__FUNCTION__<<"() function"<<endl;

    int var = 10;

    cout<<"var = "<<var<<endl;

    /*refernce variables*/
    int & ref = var;

    ref = 20;

    cout<<"var = "<<var<<endl;

    var = 30;

    cout<<"ref = "<<ref<<endl;

    return 0;
}