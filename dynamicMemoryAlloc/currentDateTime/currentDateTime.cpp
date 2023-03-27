/**
 * @file currentDateTime.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program gives you the current time and date for local time and Green which Time.
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
    char * p_dateTime = ctime(&now);

    cout<<"The Local Date & Time is : "<<p_dateTime<<endl;

    tm *gmtm = gmtime(&now);                    // covert current time to "tm-construct" for UTC Time (Greenwhich Mean Time)
    p_dateTime = asctime(gmtm);
    cout<<"The UTC Date & Time is   : "<<p_dateTime<<endl;

    return 0;
}