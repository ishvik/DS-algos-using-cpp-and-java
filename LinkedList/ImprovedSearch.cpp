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
Node* Improved_Search(Node *p,int key)
{
    Node *q;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            cout<<"working";
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
int main()
{
    int n;
    int *A;
    cout<<"Enter size of linked list ";
    cin>>n;
    A=new int[n];
    cout<<"Enter elements ";
    for(int i=0;i<n;i++)
        cin>>A[i];

    create(A,n);
    display(first);
    int key;
    cout<<"Enter data to searched ";
    cin>>key;
    Node *temp;
    temp=Improved_Search(first,key);
    if(temp)
        cout<<"Found "<<temp->data;
    else
        cout<<"Not found ";

return 0;
}
