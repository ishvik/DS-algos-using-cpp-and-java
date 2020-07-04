#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Queue
{
public:
    Node *Front;
    Node *Rear;
    Queue()
    {
        Front = Rear = 0;
    }
    void enqueue(int x)
    {
        Node *t = new Node(x);
        if(t == NULL)
            cout<<"Queue is full ";
        else
        {
            t->data = x;
            t->next = NULL;
            if(Front == NULL)
                Front = Rear = t;
            else
            {
                Rear->next = t;
                Rear = t;
            }
        }
    }

    int Deque()
    {
        int x = -1;
        if(Front == NULL)
            return x;
        else
        {
            x = Front->data;
            Front = Front->next;
        }
        return x;
    }

    void display()
    {
        Node *t = Front;
        cout<<"Elements are ";
        while(t)
        {
            cout<<t->data<<" ";
            t=t->next;
        }
    }
};



int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout<<"\nAfter deleting one element\n";
    q.Deque();
    q.display();
    return 0;
}
