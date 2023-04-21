/**
 * @file thisPointer.cpp 
 * @author Vishwajit Tiwari
 * @brief This program will give you overview of "this-pointer" which is used to access the hidden variables.
 * @note this-pointer is a member of class (public)
 * @version 0.1
 * @date 21-04-2023
 * @copyright Copyright (c) 2023
*/


#include<iostream>

using namespace std;


/***************Class****************/
class test {
    
    private:
    int x;
    
    public:
    void setX(int x) {
        this->x = x;                //this is pointer to access the hidden variables
    }

    void print() {
        cout<<"x = "<<x<<endl;
    }
};


/*******************main() function********************/
int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    int num;

    test tst;
    
    cout<<"Enter a value: ";
    cin>>num;

    tst.setX(num);
    tst.print();

    return 0;
}