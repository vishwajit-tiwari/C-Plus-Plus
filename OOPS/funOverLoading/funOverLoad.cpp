/**
 * @file funOverLoad.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Function Over Loading: We can use functions with same name but different 
 * arguments for different-different functionality .
 * @note Multiple functions can have same name if arguments are different.
 * @version 0.1
 * @date 24-04-2023
 * @copyright Copyright (c) 2023
*/

/**
 * ****************Overloading**********************
 * int sameNameFunction(int);
 * float sameNameFunction(float);
 * void sameNameFunction(int,float);
 * *************************************************
*/

#include<iostream>

using namespace std;

/*****************Function prototypes*******************/
int display(int);
float display(float);
void display(int,float);


int main(int argc, char const *argv[])
{
    int num1;
    float num2;

    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    cout<<"Enter an integer: ";
    cin>>num1;
    cout<<"Enter a float: ";
    cin>>num2;

    /******************function call******************/
    cout<<"integer: "<<display(num1)<<endl;
    cout<<"float: "<<display(num2)<<endl;

    display(num1,num2);


    return 0;
}

/****************Function Definition********************/
int display(int num) {
    cout<<"Inside:"<<__FUNCTION__<<"(int) function"<<endl;
    return (num);
}

float display(float num) {
    cout<<"Inside:"<<__FUNCTION__<<"(float) function"<<endl;
    return num;
}

void display(int num1, float num2) {
    cout<<"Inside: "<<__FUNCTION__<<"(int,float) function"<<endl;
    cout<<"integer: "<<num1<<", float: "<<num2<<endl;
}