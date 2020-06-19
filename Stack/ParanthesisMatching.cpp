#include<iostream>
#include<stdio.h>
using namespace std;

struct Node
{
public:
    char data;
    Node *next;
}*Top=NULL;

void push(char x)
{
    Node *nn=new Node;
    if(nn==NULL)
        cout<<"Stack is full ";
    else
    {
        nn->data=x;
        nn->next=Top;
        Top=nn;
    }
}
char pop()
{
    char x=-1;
    if(Top==NULL)
        cout<<"Stack is empty";
    else
    {
        x=Top->data;
        Top=Top->next;
    }
    return x;
}

int isbalance(char *exp)
{
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i] == ')')
            push(exp[i]);
        else if(exp[i] == '(')
        {
            if(Top==NULL)
                return 0;
            pop();
        }
    }
    if(Top==NULL)
        return 1;
    else
        return 0;
}

int main()
{
 char *exp="((a+b)*(c-d)))";

 printf("%d ",isbalance(exp));

 return 0;
}
