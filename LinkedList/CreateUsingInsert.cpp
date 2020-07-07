#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first=NULL;

void Insert(Node *p,int value)
{
    Node *temp;
    Node *NewNode;
    if(first = NULL)
    {
        NewNode=new Node;
        NewNode->data=value;
        NewNode->next=first;
        first=NewNode;
    }
    else
    {
        temp=first;
        NewNode=new Node;
        NewNode->data=value;
        NewNode->next=temp->next;
        temp->next=NewNode;
    }
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
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        Insert(first,x);
    }
    display(first);
    return 0;
}
