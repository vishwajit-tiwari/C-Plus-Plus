/**
 * @file continue.cpp
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program shows the application of continue statement. continue statement is used inside loops.
 * when ever continue statement is incountered inside a loop the control directly jumps to begining of the loop
 * for next itteration skiping the current execution of the statements inside the loops.
 * @version 0.1
 * @date 21-03-2023
 * @copyright Copyright (c) 2023
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    for(int num=0; num<=6; num++)
    {
        if(num==3) {
            continue;
        }
        cout<<num<<" ";
    }

    cout<<endl;

    return 0;
}