#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *first=NULL;
void display()
{
    Node *p = first;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void SortInsert(Node *p)
{
    int value;
    cout<<"Enter element ";
    cin>>value;
    Node *n = new Node();
    Node *q = NULL;
    n->data = value;
    n->next = NULL;
    if(p == NULL)
      n = p;
    else
    {
      while(p && p->data<value)
      {
        q = p;
        p = p->next;
      }
      q->next = n;
      n->next = p;
    }
}

int main()
{
    for(int i=0;i<5;i++)
    {
        SortInsert(first);
    }
    display();
    return 0;
}
