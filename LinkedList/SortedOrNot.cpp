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

bool Issorted(Node *q)
{
    int x=0;
    Node *p=first;
    while(q!=NULL)
    {
        if(q->data<x)
            return false;
        x=q->data;
        q=q->next;
    }
    return true;
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
    bool temp;
    temp=Issorted(first);
    if(temp)
        cout<<"List is sorted ";
    else
        cout<<"List is  not sorted ";
    return 0;
}
