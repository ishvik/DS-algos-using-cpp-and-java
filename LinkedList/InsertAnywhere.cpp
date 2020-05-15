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

void InsertAnywhere(Node *p,int pos, int value)
{
    Node *temp;
    Node *NewNode;
    if(pos==0)
    {
        NewNode=new Node;
        NewNode->data=value;
        NewNode->next=first;
        first=NewNode;
    }
    else if(pos>0)
    {
        temp=first;
        for(int i=0;i<pos-1 && p;i++)
        {
            temp=temp->next;
        }
        if(p)
        {
            NewNode=new Node;
            NewNode->data=value;
            NewNode->next=temp->next;
            temp->next=NewNode;
        }
    }
}

int main()
{
    int *A;
    int n;
    cout<<"No. of element in array ";
    cin>>n;
    A=new int[n];
    cout<<"Elements are ";
    for(int i=0;i<n;i++)
        cin>>A[i];
    int pos,val;
    cout<<"Insert Element ";
    cin>>val;
    cout<<" At ";
    cin>>pos;
    create(A,n);
    InsertAnywhere(first,pos,val);
    display(first);
    return 0;

}

