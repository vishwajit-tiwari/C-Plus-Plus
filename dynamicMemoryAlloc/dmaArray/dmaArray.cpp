/**
 * @file dmaArray.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program helps you understand the concept of dynamic memory allocation using Array and Pointer.
 * In this program we will take Array input dynamically using pointer.
 * @version 0.1
 * @date 27-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int grpSize, sumofMarks=0;

    cout<<"Enter the number of students in the group: ";
    cin>>grpSize;
    
    int *p_marks = new int[grpSize];                    // Pointer to Array

    cout<<"Enter the marks of the students: "<<endl;

    // input to array
    for(int i=0; i<grpSize; i++)
    {
        cin>>*(p_marks+i);
    }

    // output of array
    cout<<"Marks obtained by students: "<<endl;
    for(int i=0; i<grpSize; i++)
    {
        cout<<"Student["<<i<<"]: "<<*(p_marks+i)<<endl;
        sumofMarks += *(p_marks+i);
    }
    cout<<"Sum of marks  = "<<sumofMarks<<endl;
    cout<<"Avg. of marks = "<<(sumofMarks/grpSize)<<endl;

    return 0;
}