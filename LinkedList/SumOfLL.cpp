#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create_Node(int A[],int n)
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
        cout<<p->data<<" ";
        Display(p->next);
    }
}

int Sum(struct Node *p)
{
    int s=0;
    while(p!=0)
    {
        s=s+(p->data);
        p=p->next;
    }
    return s;
}

int main()
{
    int n;
    cout<<"Enter No. of element = ";
    cin>>n;
    int *A;
    A=new int[n];
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Representing in linked list\n";
    create_Node(A,n);
    Display(first);
    cout<<"\nIts sum is "<<Sum(first);

return 0;
}
