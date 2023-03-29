/**
 * @file countOddPairs.cpp 
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will count the number of odd numbers from pairs of Array input to a function.
 * @version 0.1
 * @date 29-03-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

//Function defination
int countPairs(int arr1[], int arr2[], int n, int m)
{
    int odd1=0, even1=0;
    int odd2=0, even2=0;
    int pairs;

    //Traverse Array1 and count number of odd and even numbers present.
    for(int i=0; i<n; i++) {
        
        if(arr1[i]%2!=0) {
            odd1++;
        }
        else
            even1++;
    }
    cout<<"Array-1 : even count : "<<even1<<" odd count : "<<odd1<<endl;

    //Traverse Array2 and count number of odd and even numbers present.
    for(int i=0; i<m; i++) {

        if(arr2[i]%2!=0) {
            odd2++;
        }
        else
            even2++;
    }
    cout<<"Array-2 : even count : "<<even2<<" odd count : "<<odd2<<endl;

    pairs = min(odd1,even2)+min(odd2,even1);        //Return the lesser of the parameters
    // pairs = odd1+odd2;

    return pairs;

}


int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    int a[] = {9,14,6,2,11};
    int b[] = {8,4,7,20};
    int pair_count;

    int n = sizeof(a)/sizeof(a[0]);     //length
    int m = sizeof(b)/sizeof(b[0]);     //length

    // cout<<"count of pairs = "<<countPairs(a,b,n,m)<<endl;
    pair_count = countPairs(a,b,n,m);
    cout<<"count of pairs = "<<pair_count<<endl;

    return 0;
}