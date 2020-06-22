#include<iostream>
#include <string.h>
using namespace std;

class Stack
{
public:
    int Top;
    int Size;
    char *s;
};

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

int pop(Stack *St)
{
    int x=-1;
    if(St->Top==-1)
        return 0;
    else
    {
        x=St->s[St->Top--];
    }
    return x;
}

int IsEmpty(Stack St)
{
    if(St.Top==-1)
        return 1;
    else
        return 0;
}

int balance(Stack s1,char *exp)
{
    int x;
    Stack st;
    st.Size = strlen(exp);
    st.Top = -1;
    st.s = new char[st.Size];

    for(int i=0;exp[i]!=0;i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' )
            push(&st,exp[i]);
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if(IsEmpty(st))
                return 0;
            switch(exp[i])
            {
            case ')':
                {
                    x = st.Top;
                    pop(&st);
                    if(x == ']' || x == '}')
                        return 0;
                    break;
                }
            case ']':
                {
                    x = st.Top;
                    pop(&st);
                    if(x == ')' || x == '}')
                        return 0;
                    break;
                }
            case '}':
                {
                    x = st.Top;
                    pop(&st);
                    if(x == ']' || x == ')')
                        return 0;
                    break;
                }
            }
        }
    }
    return IsEmpty(st) ? 1:0;
}
int main()
{
    Stack s1;
    char *exp;
    exp = "{((a+b)*(c-d))}";
    cout<<balance(s1,exp);
    return 0;
}

