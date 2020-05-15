#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first=NULL;

void Insert(Node *p,int pos,int value)
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
    else if(temp>0)
    {
        temp=first;
        for(int i=0;i<pos-1 && temp;i++)
        {
            temp=temp->next;
        }
        if(temp)
        {
            NewNode=new Node;
            NewNode->data=value;
            NewNode->next=temp->next;
            temp->next=NewNode;
        }
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
        Insert(first,i,x);
    }
    display(first);
    return 0;
}
