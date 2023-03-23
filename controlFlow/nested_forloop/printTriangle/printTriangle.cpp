/**
 * @file printTriangle.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program show use of nested-for-loop to print triangle.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int i, j, rows;

    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(i=1; i<=rows; i++)    
    {
        for(j=1; j<=i; j++) 
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}