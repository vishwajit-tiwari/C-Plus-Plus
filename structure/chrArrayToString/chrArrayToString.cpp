/**
 * @file chrArrayToString.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will convert char Array into string.
 * @version 0.1
 * @date 28-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>
#include<string.h>

using namespace std;


/***********************main function**************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    char data[] = "Hello";
    string str;

    cout<<"String: ";
    for(int i=0; i<sizeof(data); i++)
    {
        str[i] = data[i];
        cout<<str[i];
    }
    cout<<endl;

    return 0;
}