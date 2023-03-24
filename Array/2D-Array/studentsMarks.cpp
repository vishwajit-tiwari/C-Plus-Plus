/**
 * @file studentsMarks.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program takes student marks as input using 2D-Array.
 * @version 0.1
 * @date 24-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int student_count, subject_count;

    cout<<"Enter total no. of students: ";
    cin>>student_count;
    cout<<"Enter total no. of subjects: ";
    cin>>subject_count;

    float marks[student_count][subject_count];
    int i,j;

    // array input
    for(i=0;i<student_count;i++)
    {
        cout<<"Enter marks of student: "<<(i+1)<<endl;
        
        for(j=0; j<subject_count; j++)
        {
            cout<<"Subject: "<<(j+1)<<" : ";
            cin>>marks[i][j];
        }
    }
    cout<<"\n\n";

    // array output
    for(i=0; i<student_count; i++) 
    {
        cout<<"Marks of student: "<<(i+1)<<endl;

        for(j=0; j<subject_count; j++)
        {
            cout<<"Subject: "<<(j+1)<<" : "<<marks[i][j]<<endl;
        }
    }
    

    return 0;
}