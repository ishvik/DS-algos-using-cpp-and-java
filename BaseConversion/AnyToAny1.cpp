#include<iostream>
using namespace std;

int Any_base(int n, int b1, int b2)
{
  int result = 0;
  int p = 1;
  while(n>0)
  {
    int rem = n%b2;
    n = n/b2;
    result += rem*p;
    p = p*b1;
  }
  return result;
}


int main()
{
  int n,b1,b2;
  cin>>n>>b1>>b2;
  cout<<Any_base(n,b1,b2);
  return 0;
}
