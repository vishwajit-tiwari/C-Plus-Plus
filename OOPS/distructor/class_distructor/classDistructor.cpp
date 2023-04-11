/**
 * @file classDistructor
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will help you understand the concept of distructor and scope-resolution.
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

    Line();                     //class-constructor

private:
    double length;

};

/************************Clss:Constructor*********************/
Line :: Line(void) {
    cout<<"Object is being created"<<endl;
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