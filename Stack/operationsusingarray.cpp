#include<iostream>
#include<stdio.h>
using namespace std;

class Stack
{
public:
    int Top;
    int Size;
    int *s;
};

void Display(Stack s1)
{
    for(int i=s1.Top;i>=0;i--)
        cout<<s1.s[i]<<" ";
}

void created(Stack *s1)
{
    cout<<"Enter size of stack ";
    cin>>s1->Size;
    s1->Top=-1;
    s1->s=new int[s1->Size];
}
void push(Stack *St,int value)
{
    if(St->Top==St->Size-1)
        cout<<"Stack is full";
    else
    {
        St->Top++;
        St->s[St->Top]=value;
    }
}

void pop(Stack *St)
{
    int x=-1;
    if(St->Top==-1)
        cout<<"Stack is empty";
    else
    {
        x=St->s[St->Top--];
    }
    cout<<"Deleted value is "<<x;
}

void peek(Stack St,int index)
{
    int x=-1;
    if((St.Top-index+1)<0)
        cout<<"Incorrect Index ";
    else
    {
        x=St.s[St.Top-index+1];
    }
    cout<<"Value at "<<index<<" is "<<x;
}

void stacktop(Stack St)
{
    if(St.Top==-1)
        cout<<"Stack is empty ";
    else
        cout<<"value of Top is "<<St.Top;
}

void IsEmpty(Stack St)
{
    if(St.Top==-1)
        cout<<"Yes ";
    else
        cout<<"No";
}

void IsFull(Stack St)
{
    if(St.Top==-1)
        cout<<"No";
    else
        cout<<"Yes!!!";
}

int main()
{
    Stack S;
    created(&S);
    int ch;
    char c;
    cout<<"\n1.Display\n2.Push\n3.Pop\n4.Peek\n5.StackTop\n6.IsEmpty\n7.IsFull";
    do{
        cout<<"\nEnter your choice ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                {
                    Display(S);
                    break;
                }
            case 2:
                {
                    int val;
                    cout<<"Enter value ";
                    cin>>val;
                    push(&S,val);
                    break;
                }
            case 3:
                {
                    pop(&S);
                    break;
                }
            case 4:
                {
                    int ind;
                    cout<<"Enter index ";
                    cin>>ind;
                    peek(S,ind);
                    break;
                }
            case 5:
                {
                    stacktop(S);
                    break;
                }
            case 6:
                {
                    IsEmpty(S);
                    break;
                }
            case 7:
                {
                    IsFull(S);
                    break;
                }
            default:
                {
                    cout<<"Invalid Choice";
                    break;
                }
    }
    cout<<"\nDo you want to do again...?? " ;
    fflush(stdin);
    cin>>c;

    }while(c=='Y'||c=='y');
    return 0;
}
