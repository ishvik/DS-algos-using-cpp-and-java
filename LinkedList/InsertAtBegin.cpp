#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first=NULL;

void create(int A[],int n)
{
    int i;
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(Node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void InsertAtBegin(Node *p,int value)
{
    Node *New;
    New=new Node;
    New->data=value;
    New->next=first;
    first=New;
}

int main()
{
    int *A;
    int n;
    cout<<"Enter no. of element ";
    cin>>n;
    A=new int[n];
    cout<<"Enter element ";
    for(int i=0;i<n;i++)
        cin>>A[i];
    int pos;
    int val;
    cout<<"Insert element ";
    cin>>val;

    create(A,n);
    InsertAtBegin(first,val);
    display(first);
    return 0;
}
