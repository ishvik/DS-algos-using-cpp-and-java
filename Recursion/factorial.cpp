#include<iostream>
using namespace std;

int fact(int n)
{
  //base
  if(n == 0)
    return 1;
  return n*fact(n-1); //recursive call
}

int main()
{
  int n;
  cout<<"Enter no. to print factorial ";
  cin>>n;
  cout<<"factorial = "<<fact(n);
  return 0;
}
