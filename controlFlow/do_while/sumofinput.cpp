/**
 * @file sumofinput.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program shows use of do while loop to calculate the sum of inputs.
 * @version 0.1
 * @date 21-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    float number, sum=0;

    do {
        cout<<"Enter a number(0.0 to stop): ";
        cin>>number;
        sum = sum+number;   //sum += number;
    }
    while(number!=0.0);

    cout<<"Total sum = "<<sum<<endl;

    return 0;
}