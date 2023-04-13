/**
 * @file classDistructor
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will help you understand the concept of distructor and scope-resolution.
 * Distructor is usefull in releasing resources (memory etc....) before terminating program.
 * @version 0.1
 * @date 06-04-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;


class Line {
public:
    void setLength(double len);
    double getLength(void);

    Line();                     //constructor -> constructor is same as name of the class.
    ~Line();                    //Distructor -> distructor is also same as name of the class but with negation sign.

private:
    double length;

};

/************************Clss:Constructor*********************/
Line :: Line(void) {
    cout<<"Object is being created"<<endl;
}

/*************************Class: Distructor*******************/
Line:: ~Line(void) {
    cout<<"Object is being deleted"<<endl;
}


/*************************setLength function******************/
void Line :: setLength(double len) {
    length = len;
}

/*************************getLength function******************/
double Line :: getLength(void) {
    return length;
}


int main(int argc, char const * argv[])
{
    cout<<"Inside : "<<__FUNCTION__<<"() function"<<endl;

    Line length;
    length.setLength(10.5);
    cout<<"Length = "<<length.getLength()<<endl;

    return 0;
}