/**
 * @file usrinput.cpp
 * @author Vishwajit Tiwari (https://github.com/vishwajit-tiwari)
 * @brief A program to demonstrate standard input and standard output.
 * @version 0.1
 * @date 13-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int age;

    /*Standard output*/
    cout<<"Enter your age: ";

    /*Standard input*/
    cin>>age;

    cout<<"Your age is : "<<age<<endl;

    /**
     * To hold the console after taking input
     * @note This for IDE such as CodeBlock.
     */
    // system("hold");

    return 0;
}