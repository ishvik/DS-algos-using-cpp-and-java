#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s)
{
    cout<<"Elements are ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

int main()
{
    stack<int> s;
    int x;
    cout<<"Enter size of stack ";
    cin>>x;
    cout<<"Enter Elements of stack ";
    for(int i=0;i<x;i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }
    display(s);
    s.pop();
    s.pop();
    cout<<"After popping two elements \n";
    display(s);
    return 0;
}
