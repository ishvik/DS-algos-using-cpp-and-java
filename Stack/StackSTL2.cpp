#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

int main()
{
    stack<int> s1;
    stack<int> s2;
    int x;
    cout<<"Enter size of stack ";
    cin>>x;
    cout<<"Enter Elements of stack 1 ";
    for(int i=0;i<x;i++)
    {
        int val;
        cin>>val;
        s1.push(val);
    }
    cout<<"Elements are ";
    display(s1);
    cout<<"Enter Elements of stack 2 ";
    for(int i=0;i<x;i++)
    {
        int val1;
        cin>>val1;
        s2.push(val1);
    }
    cout<<"Elements are ";
    display(s2);
    cout<<"Swapping elements of Stacks ";
    s1.swap(s2);
    cout<<"\nStack 1 Elements : \n";
    display(s1);
    cout<<"\nStack 2 Elements : \n";
    display(s2);
    return 0;
}
