/**
 * @file    : dateMonthYear.cpp
 * @authors : Vishwajit Tiwari
 * @brief   : Program to display Date Months and Years using string and int.
 * @version : 0.1
 * @date    : 2023-03-06
*/


/*****************Headers*****************/
#include<iostream>


using namespace std;    // for "cout" and "cin"

/**************main() function************/
int main (int argc, char const * argv[] )
{
    cout<<"Inside : "<<__FUNCTION__<<"() function \n";

    string month = "February";
    int year,
    days = 28;

    year = 2023;

    cout<<"In "<<year<<" "<<month<<" had "<<days<<" Days.\n";


    return 0;
}