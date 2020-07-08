#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
  stack<int> s1;
  stack<int> s2;
  void enqueue(int x)
  {
    s1.push(x);
  }
  int deque()
  {
    int x = -1;
    if(s1.empty())
    {
      if(s2.empty())
        return x;
      else
        {
          while(!s1.empty())
          {
            int y;
            y = s1.top();
            s1.pop();
            s2.push(y);
          }
          x = s2.top();
          s2.pop();
        }
    }
    else
    {
      x = s2.top();
      s2.pop();
    }
    return x;
   }
};

int main()
{
  Queue q1;
  q1.enqueue(20);
  q1.enqueue(30);
  q1.enqueue(40);
  q1.deque();

  return 0;
}
