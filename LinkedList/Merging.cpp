#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first1=NULL;
node *first2=NULL;
node *first3=NULL;
void Insert(node *p,int pos,int value)
{
    node *nn;
    node *q;
    nn=new node;
    if(pos==0)
    {
        nn->data=value;
        nn->next=p;
        p=nn;
    }
    else if(pos>0)
    {
        q=p;
        for(int i=0;i<pos-1 && q;i++)
            q=q->next;
        if(q)
        {
            nn->data=value;
            nn->next=q->next;
            q->next=nn;
        }
    }
}

node* Merge(node *p,node *q,node *sorting)
{
    if(p==NULL)
        return p;
    if(q==NULL)
        return q;
    if(p&&q)
    {
    if(p->data<=q->data)
    {
        sorting=p;
        p=sorting->next;
    }
    else
    {
        sorting=q;
        q=sorting->next;
    }
    }
    node *newSort=sorting;

    while(p&&q)
    {
        if(p->data<=q->data)
        {
            sorting->next=p;
            sorting=p;
            p=sorting->next;
        }
        else
        {
            sorting->next=q;
            sorting=q;
            q=sorting->next;
        }
    }
    if(p==NULL)
        sorting->next=q;
    if(q==NULL)
        sorting->next=p;

    return newSort;

}

void display(node *p)
{
    cout<<"Elements are ";
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int n1,n2;
    cout<<"\nNo. of elements of first linked list ";
    cin>>n1;
    cout<<"\nElements are ";
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        Insert(first1,i,x);
    }
    cout<<"\nNo. of elements of second linked list ";
    cin>>n2;
    cout<<"\nElements are ";
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        Insert(first2,i,x);
    }
    node *sorting;
    sorting=Merge(first1,first2,sorting);

    while(sorting!=NULL)
    {
        cout<<sorting->data<<" ";
        sorting=sorting->next;
    }
    return 0;
}
