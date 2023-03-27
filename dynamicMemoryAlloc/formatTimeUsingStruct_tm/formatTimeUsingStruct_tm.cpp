/**
 * @file formatTimeUsingStruct_tm.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program gives you the formated Time using Structure "tm".
 * @version 0.1
 * @date 27-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>
#include<ctime>                 // for current time

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    time_t now = time(0);
    
    cout<<"Number of seconds since January-01-1970 : "<<now<<endl;
    tm *ltm = localtime(&now);

    // for Date
    cout<<"Year : "<<1970+ltm->tm_year<<endl;
    cout<<"Month : "<<1+ltm->tm_mon<<endl;
    cout<<"Day   : "<<ltm->tm_mday<<endl;
    
    // for Time
    cout<<"Time : "<<1+ltm->tm_hour<<"hr:";
    cout<<1+ltm->tm_min<<"min:";
    cout<<1+ltm->tm_sec<<"sec"<<endl;
    

    return 0;
}