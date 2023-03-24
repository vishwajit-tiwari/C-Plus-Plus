/**
 * @file arrayIO.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program takes the Array input and display Array elements using for-loop.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int input;
    
    cout<<"Enter the number of inputs: ";
    cin>>input;

    int array[input];

    cout<<"Enter the Array elements:\n";

    // input loop
    for(int i=0; i<input; i++)
    {
        cout<<"array["<<i<<"]: ";
        cin>>array[i];
    }

    //output loop (vertical)
    cout<<"\nArray elements are :\n";
    for(int i=0; i<input; i++)
    {
        cout<<"array["<<i<<"]: "<<array[i]<<endl;
    }

    //output loop (horizontal)
    cout<<"\nArray elements are : ";
    for(int i=0; i<input; i++)
    {
        cout<<" "<<array[i];
    }
    cout<<"\n";

    
    return 0;
}