/**
 * @file abstract.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Abstraction: Show only relevant details to the user and hide irrelevant details.
 * @version 0.1
 * @date 25-04-2023
 * @copyright Copyright (c) 2023
*/


#include<iostream>

using namespace std;

/*****************Class:Abstraction***************/
class data {

private:
int num;
char ch;

public:
void setValues(int n, char c) {
    num = n;
    ch = c;
}

void getValues() {
    cout<<"Number: "<<num<<endl;
    cout<<"Charecter: "<<ch<<endl;
}


};


int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    data input;
    input.setValues(100,'A');
    input.getValues();

    return 0;
}