/**
 * @file personInfo.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will take person info (like Name,Age,Salary,City) by using structure.
 * @version 0.1
 * @date 28-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>
#define multiInput

using namespace std;

/********************Structure Defination**********************/
struct person {
    char Name[50];
    int Age;
    float Salary;
    char City[50];
};

/***********************main function**************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    person p1;
    int count;

    #ifdef multiInput
    cout<<"Enter the no. of persons: ";
    cin>>count;

    person p[count];                   // Array of structure

    // Input to Person structure
    for(int i=0; i<count; i++)
    {
        cout<<"Enter person["<<(i+1)<<"]"<<" info: \n";
        cout<<"Name: ";
        // cin.get((p+i)->Name,50);
        cin>>(p+i)->Name;
        cout<<"Age: ";
        cin>>(p+i)->Age;
        cout<<"Salary: ";
        cin>>(p+i)->Salary;
        cout<<"City: ";
        cin>>(p+i)->City;
        cout<<endl;
    }

    // Output of Person structure
    cout<<"\n\nDisplay Person's Details:"<<endl;
    for(int i=0; i<count; i++)
    {
        #ifdef dotOperator
        cout<<"Person["<<(i+1)<<"]"<<" info: \n";
        cout<<"Name     : "<<p[i].Name<<endl;
        cout<<"Age      : "<<p[i].Age<<endl;
        cout<<"Salary   : "<<p[i].Salary<<endl;
        cout<<"City     : "<<p[i].City<<endl;
        cout<<endl;
        #else
        cout<<"Person["<<(i+1)<<"]"<<" info: \n";
        cout<<"Name     : "<<(p+i)->Name<<endl;
        cout<<"Age      : "<<(p+i)->Age<<endl;
        cout<<"Salary   : "<<(p+i)->Salary<<endl;
        cout<<"City     : "<<(p+i)->City<<endl;
        cout<<endl;
        #endif

    }

    #else
    // Input to Person structure
    cout<<"Enter person info: \n";
    cout<<"Name: ";
    cin.get(p1.Name,50);
    cout<<"Age: ";
    cin>>p1.Age;
    cout<<"Salary: ";
    cin>>p1.Salary;
    cout<<"City: ";
    cin>>p1.City;

    // Output of Person structure
    cout<<"\nPerson Info: \n";
    cout<<"Name     : "<<p1.Name<<endl;
    cout<<"Age      : "<<p1.Age<<endl;
    cout<<"Salary   : "<<p1.Salary<<endl;
    cout<<"City     : "<<p1.City<<endl;
    #endif

    return 0;
}