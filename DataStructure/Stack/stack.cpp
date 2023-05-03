/**
 * @file stack.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This program will perfom all stack operations.
 * @version 0.1
 * @date 03-05-2023
 * @copyright Copyright (c) 2023
*/

#include<iostream>

using namespace std;

/***************Class for Stack******************/
class stack {
    // int top;
    // int size;

    public:
    int top;
    int size;
    int data[10];
    stack() {
        top = -1;
        size = sizeof(data)/sizeof(int);
    }
    void push(int num);
    int pop();
    int isEmpty();
    int isFull();
    void display();
};

/****************isFull function******************/
int stack::isFull() {
    return top == (size-1);
}

/****************isEmpty function*****************/
int stack::isEmpty() {
   return top == -1;
}

/*****************push function*******************/
void stack::push(int num) {
    if(!isFull()) {
        //when stack is not full
        data[++top] = num;
    }
    else {
        //when stack is full
        cout<<"\nstack: overflow!!!"<<endl;
    }
}

/*******************pop function******************/
int stack::pop() {
    if(isEmpty()) {
        //when under flow
        return -1;
    }
    else {
        return data[top];
    }
}

/*****************display function*****************/
void stack:: display() {
    if(isEmpty())
    {
        cout<<"\nstack: underflow!!!"<<endl;
    }
    else {
        cout<<"\nstack elements are: "<<endl;

        int i = top;

        while(i>=0) {
            cout<<data[i]<<endl;
            i--;
        }
    }
}



int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    char choice;
    int num;

    stack st;

    while(1)
    {
        cout<<"\n****************Stack operations********************"<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"your choice: ";
        cin>>choice;

        switch (choice)
        {
        case '1':
            cout<<"Enter the element: ";
            cin>>num;
            st.push(num);
            break;
        
        case '2':
            if(st.pop() == -1) {
                cout<<"\nstack: underflow!!!"<<endl;
            }
            else {
                cout<<"poped element: "<<st.pop()<<endl;
                st.top--;
            }
            break;

        case '3':
            st.display();
            break;

        case '4':
            exit(0);
        
        default:
            cout<<"\nInvalide choice!!!"<<endl;
            break;
        }
    }

    return 0;
}