#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *first=NULL;

void SortInsert(Node *p,int value)
{
    Node *newnode;
    Node *tail=NULL;
    Node *temp=first;
    newnode=new Node;
    newnode->data=value;
    newnode->next=NULL;
    if(first==NULL)
        newnode=first;
    else
    {
        while(temp &&  temp->data<value)
        {
            tail=temp;
            temp=temp->next;
        }
        if(temp==first)
        {
            temp->next=first;
            first=temp;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
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
    SortInsert(first,123);
    SortInsert(first,11);

    display(first);
    return 0;
}
