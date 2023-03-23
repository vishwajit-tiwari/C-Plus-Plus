/**
 * @file primeNumber.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program show use of for-loop to find prime number upto 100.
 * @version 0.1
 * @date 23-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int i, j;

    for(i=2; i<100; i++)    
    {
        for(j=2; j<=(i/j); j++) 
        {
            if(!(i%j)) 
            {
                break;
            } 
        }
        if(j>(i/j)) 
        {
            cout<<i<<" is prime\n"<<endl;
        }
    }

    return 0;
}