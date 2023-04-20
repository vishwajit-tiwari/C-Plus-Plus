/**
 * @file inlineFunction.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Inline-function is use to for faster execution of code.
 * @note A function definition in a class definition is by default a inline-function definition
 * even without use of inline specifier.
 * @version 0.1
 * @date 20-04-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;


//inline function defination
inline int max(int num1, int num2)
{
    return (num1>num2)?num1 : num2;
}


int main(int argc, char const * argv[])
{
    int num1,num2;

    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<"max("<<num1<<","<<num2<<") = "<<max(num1,num2)<<endl;

    return 0;
}