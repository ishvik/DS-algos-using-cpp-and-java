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
  if(n<=0)
    return;
  cout<<n<<endl;
  cout<<"hello"<<endl;
  reverse(n-1);
  cout<<n<<" : hii"<<endl;
  reverse(n-2);
  cout<<n<<" post bye"<<endl;
}

int main()
{
  // display(100);
  reverse(5);
  return 0;
}
