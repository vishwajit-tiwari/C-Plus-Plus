/**
 * @file publicPrivate.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will help you understand the concept of Access Specifier (public: private:).
 * @date 06-04-2023
 * @version 0.1
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/******************************Class****************************/
class Example {

private:                        //access-specifier (private)
    int val;

public:                         //access-specifier (public)
    void init_val(int v);
    void print_val();
};

/***********************function defination**********************/
void Example :: init_val(int v)
{
    val = v;
}

/***********************function defination**********************/
void Example :: print_val() 
{
    cout<<"Val = "<<val<<endl;
}

/**************************main() function************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    Example obj;

    obj.init_val(100);
    obj.print_val();

    return 0;
}