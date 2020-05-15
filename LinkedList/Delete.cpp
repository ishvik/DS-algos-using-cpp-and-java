#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*first=NULL;

void create(int A[],int n)
{
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int Delete(Node *p,int pos)
{
    Node *temp;
    Node *tail;
    int del_value;
    if(pos==1)
    {
        del_value=first->data;
        temp=first;
        first=first->next;
        delete p;
    }
    else if(pos > 0)
    {
        temp=first;
        tail=NULL;
        for(int i=0;i<pos-1;i++)
        {
            tail=temp;
            temp=temp->next;
        }
        if(temp)
        {
            del_value=temp->data;
            tail->next=temp->next;
            delete temp;
        }
    }
    return del_value;
}

void display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int n,*A;
    cout<<"No. of elements in linked list ";
    cin>>n;
    A=new int[n];
    cout<<"Elements are ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create(A,n);
    int index;
    cout<<"Delete value from ";
    cin>>index;
    cout<<"Deleted value is "<<Delete(first,index)<<endl;
    cout<<"Linked list after deletion \n";
    display(first);
    return 0;
}
