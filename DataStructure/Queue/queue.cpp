/**
 * @file queue.cpp 
 * @author Vishwajit Tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief Queue Data Struture to handle queue elements.
 * @version 0.1
 * @date 18-05-2023
 * @copyright Copyright (c)
*/

#include <iostream>

#define SIZE 10

using namespace std;

class queue {
    int a[SIZE];
    int front;
    int rear;

    public:
    // Constructuor
    queue() {
        front = rear = -1;
    }
    void enqueue(int x);
    int dequeue();
    void display();
    // void updateFront();
};

// void queue::updateFront() {
//     if(front == SIZE && rear == SIZE-1) {
//             front = -1;
//             rear = -1;
//     }
//     else {
//         front++;
//     }
// }

/***************Insert elements into Queue****************/
void queue::enqueue(int num) {
    if(front == -1) {
        front++;
    }
    if(rear == SIZE-1) {
        cout<<"Queue is full!!!"<<endl;
    }
    else {
        a[++rear] = num;
    }
}

/**************Delete elements from Queue******************/
int queue::dequeue() {

    int deletedItem;

    if(front == -1 && rear == -1) {
        return -1;
    }
    else {
        if(front >= rear+1) {
            front = rear = -1;
            cout<<"front = "<<front<<"rear = "<<rear<<endl;
            return -1;
        }
        else {
            deletedItem = a[front];
            front++;
            return deletedItem;
        }
    }
}

/**************Display elements of Queue******************/
void queue::display() 
{
    if(front == -1 && rear == -1) 
    {
        cout<<"Queue is empty!!!\n";
    }
    else if(front == rear+1){
        cout<<"Queue is empty!!!\n";
    }
    else 
    {
        cout<<"front = "<<front<<" rear = "<<rear<<" ";
        for(int i=front; i<=rear; i++) 
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }   
}


int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    char choice;
    queue q;        //class object
    int num;

    while(1)
    {
        cout<<"\n***********Choose the option:************\n";
        cout<<"1. enqueue\n";
        cout<<"2. dequeue\n";
        cout<<"3. display\n";
        cout<<"4. exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case '1':
                cout<<"Enter the number: ";
                cin>>num;
                q.enqueue(num);
                break;

            case '2':
                int ele;
                ele = q.dequeue();
                if(ele == -1) {
                    cout<<"Queue is empty!!!\n";
                }
                else {
                    cout<<"Deleted element: "<<ele<<endl;
                } 
                break;

            case '3':
                q.display();
                break;

            case '4':
                exit(0);

            default :
                cout<<"Invalid choice!!!\n";
                break;
        }
    }

    return 0;
}