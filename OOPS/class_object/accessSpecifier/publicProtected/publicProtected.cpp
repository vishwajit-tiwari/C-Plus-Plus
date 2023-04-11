/**
 * @file publicPrivate.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will help you understand the concept of Access Specifier (public: protected:).
 * @date 06-04-2023
 * @version 0.1
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/******************************Class****************************/
class Example1 
{
    protected:
        int val;
};

/**********************Example-2 inherits Example-1*************/
class Example2 : public Example1 
{
    public:
        void init_val(int v) {
            this-> val = v;
        }

        void print_val() {
            cout<<"val = "<<val<<endl;
        }
};


/**************************main() function************************/
int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    Example2 obj;

    obj.init_val(10);
    obj.print_val();

    return 0;
}