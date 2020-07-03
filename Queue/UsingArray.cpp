#include<iostream>
#include<stdio.h>
using namespace std;

class Queue
{
public:
    int Size;
    int Front;
    int Rear;
    int *q;
    void enqueue(int x);
    void dequeue();
    void isempty();
    void isfull();
    void display();
};

void Queue :: enqueue(int x)
{
    if(Front == Size-1)
        cout<<"Queue is full ";
    else
    {
        Rear++;
        q[Rear] = x;
    }
}

void Queue :: dequeue()
{
    int x=-1;
    if(Front == Rear || Front>Rear)
        cout<<"Queue is empty ";
    else
    {
        Front++;
        x = q[Front];
    }
    cout<<"Deleted element is "<<x;
}

void Queue :: isempty()
{
    if(Front == Rear || Front>Rear)
        cout<<"Yes ";
    else
        cout<<"No ";
}

void Queue :: isfull()
{
    if(Rear == Size-1)
        cout<<"Yes ";
    else
        cout<<"No ";
}

void Queue :: display()
{
    cout<<"Elements are ";
    for(int i=0;i<=Rear;i++)
        cout<<q[i]<<" ";
}

int main()
{
    Queue q1;
    cout<<"Enter Size of queue ";
    cin>>q1.Size;
    q1.q =  new int[q1.Size];
    q1.Front = q1.Rear = -1;
    int ch;
    cout<<"\n1.Insert\n2.Delete\n3.Is empty\n4.is full\n5.Display\n";
    char c;
    do{
    cout<<"Enter your choice ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            int x;
            cout<<"Enter element to insert ";
            cin>>x;
            q1.enqueue(x);
            break;
        }
    case 2:
        {
            q1.dequeue();
            break;
        }
    case 3:
        {
            q1.isempty();
            break;
        }
    case 4:
        {
            q1.isfull();
            break;
        }
    case 5:
        {
            q1.display();
            break;
        }
    default:
        {
            cout<<"Enter valid choice ";
        }
    }
    cout<<"\nto continue press 'Y' or 'y' = ";
    fflush(stdin);
    cin>>c;
    }while(c == 'Y' || c=='y');
    return 0;
}
