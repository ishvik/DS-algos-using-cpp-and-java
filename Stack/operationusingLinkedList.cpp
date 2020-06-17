#include<iostream>
#include<stdio.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
    Node *Top;
public:
    Stack()
    {
        Top=NULL;
    }
    void push(int x);
    int pop();
    int peek(int index);
    void stacktop();
    void isempty();
    void isfull();
    void display();
};
void Stack :: push(int x)
{
    Node *nn=new Node;
    if(nn==NULL)
        cout<<"Stack is full ";
    else
    {
        nn->data=x;
        nn->next=Top;
        Top=nn;
    }
}
int Stack :: pop()
{
    int x=-1;
    if(Top==NULL)
        cout<<"Stack is empty";
    else
    {
        x=Top->data;
        Top=Top->next;
    }
    return x;
}
int Stack :: peek(int index)
{
    int x=-1;
    Node *p=Top;
    for(int i=0;p!=NULL && i<index-1 ;i++)
    {
        p=p->next;
    }
    if(p!=NULL)
        x=p->data;
    return x;
}
void Stack :: stacktop()
{
    if(Top!=NULL)
        cout<<Top->data;
    else
        cout<<-1;
}
void Stack :: isempty()
{
    if(Top==NULL)
        cout<<"Yes ";
    else
        cout<<"No ";
}
void Stack :: isfull()
{
    Node *nn=new Node;
    if(nn==NULL)
        cout<<"Stack is full ";
    else
        cout<<"Stack is not full";
}
void Stack :: display()
{
    Node *p=Top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    Stack s;
    int ch;
    char c;
    cout<<"\n1.Display\n2.Push\n3.Pop\n4.Peek\n5.StackTop\n6.IsEmpty\n7.IsFull";
    do{
        cout<<"Enter your choice ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                {
                    s.display();
                    break;
                }
            case 2:
                {
                    int val;
                    cout<<"Enter value ";
                    cin>>val;
                    s.push(val);
                    break;
                }
            case 3:
                {
                    cout<<"Pop value is "<<s.pop();
                    break;
                }
            case 4:
                {
                    int ind;
                    cout<<"Enter index ";
                    cin>>ind;
                    cout<<"value is "<<s.peek(ind);
                    break;
                }
            case 5:
                {
                    s.stacktop();
                    break;
                }
            case 6:
                {
                    s.isempty();
                    break;
                }
            case 7:
                {
                    s.isfull();
                    break;
                }
            default:
                {
                    cout<<"Invalid Choice";
                    break;
                }
    }
    cout<<"\nDo you want to do again...?? " ;
    fflush(stdin);
    cin>>c;

    }while(c=='Y'||c=='y');
    return 0;
}
