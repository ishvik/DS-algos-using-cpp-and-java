#include <iostream>
#include<queue>
using namespace std;

void display(queue<int> q)
{
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
}

int main()
{
  queue<int> q1;
  int n;
  cout<<"No. of elements ";
  cin>>n;
  cout<<"Enter elements = ";
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    q1.push(x);
  }
  cout<<"\nElements are ";
  display(q1);
  cout<<"\nFront element of queue = "<<q1.front();
  cout<<"\nLast element of Queue = "<<q1.back();
  cout<<"\nAfter performing deque operation ";
  q1.pop();
  cout<<"\nElements are ";
  display(q1);
  return 0;
}
