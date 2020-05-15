#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *First=NULL;

void create(int A[],int n)
{
    int i;
    Node *t,*last;
    First=new Node;
    First->data=A[0];
    First->next=NULL;
    last=First;

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
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

Node* Search(Node *p,int key)
{
    while(p!=NULL)
    {
        if(key==(p->data))
            return p;
        p=p->next;
    }
    return 0;
}

Node* Rsearch(Node *p, int key)   //searching using recursion //
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return Rsearch(p->next,key);
}

int main()
{
    int *A;
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    A=new int[n];
    cout<<"Enter elements of array ";
    for(int i=0;i<n;i++)
        cin>>A[i];

    int key;
    cout<<"Enter element to search ";
    cin>>key;

    create(A,n);
    display(First);
    cout<<"\nElement found at "<<Rsearch(First, key);

return 0;
}
