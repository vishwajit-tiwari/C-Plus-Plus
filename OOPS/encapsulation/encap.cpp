/**
 * @file encap.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Encapsulation: This is process of combining data members and functions
 * in a single unit called as class.
 * @note 1. make all data member private
 *       2. create public get() and set() function of each data members
 *       3. set() function: set the value of data members
 *       4. get() function: get the value of data members
 * @version 0.1
 * @date 24-04-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/***********************Class:Encapsulation**************************/
class encap {
    private:
    int num;
    char ch;

    public:
    int getNum() const {
        return num;
    }
    char getCh() const {
        return ch;
    }

    void setNum(int num){
        this->num = num;
    }

    void setCh(char ch){
        this->ch = ch;
    }

};


int main(int argc, char const *argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    encap en;

    en.setCh('A');
    en.setNum(10);

    cout<<"num = "<<en.getNum()<<endl;
    cout<<"ch = "<<en.getCh()<<endl;


    return 0;
}