/**
 * @file avgmarks.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program find the avg of marks obtained by students using Array.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int marks[5];
    float avg;

    cout<<"Enter the marks of following students:\n";

    cout<<"student-1 : ";
    cin>>marks[0];
    cout<<"student-2 : ";
    cin>>marks[1];
    cout<<"student-3 : ";
    cin>>marks[2];
    cout<<"student-4 : ";
    cin>>marks[3];
    cout<<"student-5 : ";
    cin>>marks[4];
    
    avg = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;

    cout<<"\nAverage Marks = "<<avg<<endl;


    return 0;
}