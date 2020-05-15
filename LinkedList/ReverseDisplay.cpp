#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
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

void Display(struct Node *p)
{
    if(p!=NULL)
    {
        Display(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    Display(first);
return 0;
}

