/**
 * @file arrayIO.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program takes the Array as input to a Function.
 * @version 0.1
 * @date 24-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/***********Function Prototype/declaration****************/
void arraytofun(int arr[], int size);


/**********************main() function********************/
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

    arraytofun(array,input);    //function call    

    
    return 0;
}

/*************Function Definition*****************/
void arraytofun(int arr[], int size) 
{

    //output loop (vertical)
    cout<<"\nArray elements are (vertical):\n";
    for(int i=0; i<size; i++)
    {
        cout<<"array["<<i<<"]: "<<arr[i]<<endl;
    }

    //output loop (horizontal)
    cout<<"\nArray elements are (horizontal): ";
    for(int i=0; i<size; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";

}