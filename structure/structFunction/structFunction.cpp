/**
 * @file structFunction.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will take person info (like Name,Age,Salary) by using structure and will pass the struct to function.
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

/*********************function prototype***********************/
void displayInfo(person p);


/***********************main function**************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    person p1;

    cout<<"Enter the person info: \n";
    cout<<"Name: ";
    cin.get(p1.Name,50);
    cout<<"Age: ";
    cin>>p1.Age;
    cout<<"Salary: ";
    cin>>p1.Salary;
    cout<<"City: ";
    cin>>p1.City;


    displayInfo(p1);         //function call


    return 0;
}

/**********************function definition**********************/
void displayInfo(person p)
{
    cout<<"\nPerson Info: \n";
    cout<<"Name     : "<<p.Name<<endl;
    cout<<"Age      : "<<p.Age<<endl;
    cout<<"Salary   : "<<p.Salary<<endl;
    cout<<"City     : "<<p.City<<endl;
}