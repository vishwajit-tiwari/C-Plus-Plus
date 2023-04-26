/**
 * @file exceptionHandling.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Exception: Is an error occur during runtime/execution of a program.
 * @note Exception-Handling: 
 *       1. try: This keyword represent a block of code that can throw an execption.  
 *       2. catch: This keyword represent a block of code that is execuited when a particular execption is thrown.
 * @version 0.1
 * @date 25-04-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    int a,b;

    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    cout<<"Enter two numbers: ";
    cin>>a>>b;


    /***************Exception:Handling*******************/
    try {

        if(b!=0) 
        {
            float div = (float)a/b;

            if(div<0) {
                throw 'e';
            }

            cout<<"a/b = "<<div<<endl;
        }
        else 
            throw b;
            
    }
    catch(int e) {
        cout<<"Exception : Divided by Zero"<<endl;
    }
    catch(char st) {
        cout<<"Eeception : Division is less than 1"<<endl;
    }
    catch (...) {
        cout<<"Unknown Exception"<<endl;
    }
    /*****************************************************/


    return 0;
}