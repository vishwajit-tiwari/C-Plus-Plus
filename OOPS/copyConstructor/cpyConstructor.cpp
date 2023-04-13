/**
 * @file cpyConstructor
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will help you understand the concept of Copy-constructor.
 * Copy-Constructor: Is a member function of a class which initilizes an object 
 * using another object of same class.
 * @version 0.1
 * @date 13-04-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;


class Line {
public:
    int getLength(void);

    Line(int len);                     //constructor -> constructor is same as name of the class.
    Line(const Line &obj);      //Copyconstructor -> initializes an object using another object of same class.
    ~Line();                    //Distructor -> distructor is also same as name of the class but with negation sign.
   

private:
    int * ptr;

};

/************************Clss:Constructor*********************/
Line::Line(int len) {
    cout<<"Normal constructor allocating ptr: "<<endl;
    ptr = new int;
    *ptr = len;
}

/*********************Class: Copy constructor*****************/
Line:: Line(const Line &obj) {
    cout<<"Copy constructor allocating pointer: "<<endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

/*************************Class: Distructor*******************/
Line:: ~Line(void) {
    cout<<"Freeing Memory"<<endl;
    delete ptr;
}

/*************************getLength function******************/
int Line :: getLength() {
    return *ptr;
}

/*************************Display function********************/
void display(Line obj) {
    cout<<"Length of line = "<<obj.getLength()<<endl;
}


int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    Line line(20);
    display(line);    

    return 0;
}