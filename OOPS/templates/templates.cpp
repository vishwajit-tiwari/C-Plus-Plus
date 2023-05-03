/**
 * @file templates.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Templates: Feature that helps you write generaic program. 
 * @note We can create single function or class to work with different data types using templates.
 *       Templates are used in larger codes for:
 *          a. Code Reuseabilty
 *          b. Flexibility
 *       Function Templates: A single function templates can work with different data types at once.
 * @version 0.1
 * @date 28-04-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/****************Templates:Function*****************/
template <class T>

T Larger(T n1, T n2) {

    return (n1>n2) ? n1:n2;

}


int main(int argc, char const * argv[]) 
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    int i1,i2;
    float f1,f2;
    char c1,c2;

    cout<<"Enter two integers: ";
    cin>>i1>>i2;

    cout<<"Enter two floats: ";
    cin>>f1>>f2;
    
    cout<<"Enter two charectars: ";
    cin>>c1>>c2;
    
    cout<<endl;

    cout<<Larger(i1,i2)<<" is larger"<<endl;
    cout<<Larger(f1,f2)<<" is larger"<<endl;
    cout<<Larger(c1,c2)<<" is larger"<<endl;


    return 0;
}