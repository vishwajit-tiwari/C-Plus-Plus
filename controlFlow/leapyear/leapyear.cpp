/**
 * @file leapyear.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program represent application of nested-if-else to find leap year.
 * @version 0.1
 * @date 20-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside :"<<__FUNCTION__<<"() function"<<endl;

    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if(year % 4 == 0) {
        
        if(year % 100 == 0) {
            
            if(year % 400 == 0) {
                cout<<year<<" is a leap year\n";
            }
            else {
                cout<<year<<" is not a leap year"<<endl;
            }

        }
        else {
            cout<<year<<" is a leap year"<<endl;
        }
    }
    else {
        cout<<year<<" is not a leap year"<<endl;
    }

    return 0;
}