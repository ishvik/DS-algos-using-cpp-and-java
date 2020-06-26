#include<iostream>
#include<string.h>
#include <stdio.h>
using namespace std;

class Stack
{
public:
    int top;
    int Size;
    char *s;
    void push(char x);
    char pop();
    int isempty();
    char stacktop();
    int isoperand(char x);
    int pre(char x);
    Stack()
    {
        top=-1;
    }
};

void Stack :: push(char x)
{
    if(top == Size-1)
        cout<<"Stack is full";
    else
    {
        top++;
        s[top] = x;
    }
}

char Stack :: pop()
{
    char x = '\0';
    if(top == -1)
        return x;
    else
    {
        x = s[top--];
    }
}

int Stack ::isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

char Stack ::stacktop()
{
    if(top==-1)
        return -1;
    else
        return s[top];
}

int Stack::isoperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int Stack::pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

char* convert(char* infix)
{
    Stack s1;
    s1.Size = strlen(infix);
    s1.s = new char[strlen(infix)+1];
    char *postfix = new char[strlen(infix)+2];
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(s1.isoperand(infix[i]))
            postfix[j++]=infix[i++];
        else
        {
            if(s1.pre(infix[i])>s1.pre(s1.stacktop()))
                s1.push(infix[i++]);
            else
                postfix[j++] = s1.pop();
        }
    }
    while(!s1.isempty())
    {
        postfix[j++] = s1.pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a+b*c-d/e";
    cout<<convert(infix);
    return 0;
}
