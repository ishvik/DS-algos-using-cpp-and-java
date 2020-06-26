#include<iostream>
#include<string.h>
using namespace std;

class Stack
{
public:
    int top;
    int Size;
    int *s;
    void push(char x);
    int pop();
    int isoperand(char x);
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
int Stack :: pop()
{
    char x = '\0';
    if(top == -1)
        return x;
    else
    {
        x = s[top--];
    }
    return x;
}
int Stack::isoperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int evaluate(char *postfix)
{
    Stack s1;
    s1.Size = strlen(postfix);
    s1.s = new int[s1.Size];
    s1.top = -1;
    int x1,x2,r,j;
    for(int i=0;postfix[i]!='\0';i++)
    {
        if(s1.isoperand(postfix[i]))
        {
            j = postfix[i] - '0';
            s1.push(j);
        }
        else
        {
            x2=s1.pop();
            x1=s1.pop();
            switch(postfix[i])
            {
                case '+':
                    {
                        r=x1+x2;
                        s1.push(r);
                        break;
                    }
                case '*':
                    {
                        r=x1*x2;
                        s1.push(r);
                        break;
                    }
                case '/':
                    {
                        r=x1/x2;
                        s1.push(r);
                        break;
                    }
                case '-':
                    {
                        r=x1-x2;
                        s1.push(r);
                    }
            }
        }
    }
    return s1.pop();
}


int main()
{
    char *post = "35*62/+4-";
    cout<<evaluate(post);
    return 0;
}
