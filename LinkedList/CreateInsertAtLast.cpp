#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first=NULL;
Node *last=NULL;

void InsertAtLast(int value)
{
    Node *New;
    New=new Node;
    New->data=value;
    if(first==NULL)
    {
        first=last=New;
    }
    else
    {
        last->next=New;
        last=New;
    }
    cout<<New->data<<endl;
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
    int n;
    cout<<"No. of elements of linked list ";
    cin>>n;
    InsertAtLast(23);
    InsertAtLast(12);
    return 0;
}
