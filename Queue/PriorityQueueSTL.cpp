#include<iostream>
#include<queue>
using namespace std;

void display(priority_queue<int> q)
{
  while (!q.empty()) {
    cout<<q.top()<<" ";
    q.pop();
  }
}

int main()
{
  priority_queue<int> q1;
  q1.push(10);
  q1.push(1);
  q1.push(34);
  display(q1);
  return 0;
}
