#include<iostream>
#include<stack>
using namespace std;

void print_pair(pair<string,int> p)
{
    cout<<"(Name : "<<p.first<<", Id: "<<p.second<<")";
}

void display(stack<pair<string,int>> s)
{
    while(!s.empty())
    {
        print_pair(s.top());
        s.pop();
        cout<<"\n";
    }
}

int main()
{
    stack<pair<string,int>> s;
    int x;
    cout<<"Enter no. of pairs ";
    cin>>x;
    cout<<"Enter elements of pairs\n";
    for(int i=0;i<x;i++)
    {
        string v;
        int v1;
        cin>>v;
        cin>>v1;
        s.push({v,v1});
    }
    display(s);

    return 0;
}
