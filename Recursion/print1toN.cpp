#include<iostream>
using namespace std;

void display(int n)
{
  //base
  if(n == 0)
    return;
  display(n-1); //recursive call
  cout<<n<<" ";
}

void reverse(int n)
{
  //base
  if(n==1)
  {
    cout<<n<<" ";
    return;
  }
  cout<<n<<" ";
  reverse(n-1);
}

int main()
{
  // display(100);
  reverse(5);
  return 0;
}
