#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*first=NULL;

void create(int A[],int n)
{
    node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
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

void Reverse(node *p)
{
    while(p!=NULL)
    {
        Reverse(p->next);
        cout<<p->data<<" ";
    }
}

void Sum(node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s=s+p->data;
        p=p->next;
    }
    cout<<"Sum is "<<s;
}

void Maximum(node *p)
{
    int Max=0;
    while(p!=NULL)
    {
        if(Max<p->data)
            Max=p->data;
        p=p->next;
    }
    cout<<"Maximum value is "<<Max;
}

void LinearSearch(node *p,int key)
{
    while(p->next!=NULL)
    {
        if(p->data==key)
            cout<<"Key found "<<p->data;
        p=p->next;

    }
}

void Insert(node *p,int pos,int value)
{
    node *nn;
    nn=new node;
    if(pos==0)
    {
        nn->data=value;
        nn->next=first;
        first=nn;
    }
    else if(p>0)
    {
        p=first;
        for(int i=0;i<pos-1 && p;i++)
            p=p->next;
        if(p)
        {
            nn->data=value;
            nn->next=p->next;
            p->next=nn;
        }
    }
}

int Delete(node *p,int pos)
{
    node *q=NULL;
    node *t=first;
    int del_val;
    if(pos==1)
    {
        del_val=first->data;
        t=first;
        first=first->next;
        delete p;
    }
    else if(pos>1)
    {
        for(int i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        del_val=p->data;
    }
   return del_val;
}

bool IsSorted(node *p)
{
    int x=0;
    while(p!=NULL)
    {
        if(p->data<x)
            return false;
        x=p->data;
        p=p->next;
    }
    return true;
}

int main()
{
    int ch;
    char c;
    do
    {
        cout<<"1.Create a linked list\n2.Display \n3.Reverse\n4.Sum\n5.Find max\n6.Search a key\n7.Insert a value\n8.Delete a value\n9.Check sorted or not\n";
        cout<<"Enter Your choice ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                int n;
                cout<<"No. of elements in Linked list ";
                cin>>n;
                int *a;
                a=new int[n];
                cout<<"Enter elements ";
                for(int i=0;i<n;i++)
                    cin>>a[i];
                create(a,n);
                break;
            }
        case 2:
            {
                display(first);
                break;
            }
        case 3:
            {
                Reverse(first);
                break;
            }
        case 4:
            {
                Sum(first);
                break;
            }
        case 5:
            {
                Maximum(first);
                break;
            }
        case 6:
            {
                int x;
                cout<<"Enter the value to search ";
                cin>>x;
                LinearSearch(first,x);
                break;
            }
        case 7:
            {
                int x,pos;
                cout<<"Insert value ";
                cin>>x;
                cout<<" At";
                cin>>pos;
                Insert(first,pos,x);
                break;
            }
        case 8:
            {
                int pos;
                cout<<"Enter position from where you want to delete value ";
                cin>>pos;
               cout<<"Deleted value is "<<Delete(first,pos);
               break;
            }
        case 9:
            {
                bool temp=IsSorted(first);
                if(temp)
                    cout<<"List is sorted ";
                else
                    cout<<"List is not sorted ";
                break;
            }
        default:
            {
                cout<<"Invalid choice ";
            }
        }
        cout<<"\nDo you want to do again...?? " ;
        fflush(stdin);
        cin>>c;
    }while(c=='Y' || c=='y');
    return 0;
}
