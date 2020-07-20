#include<iostream>
using namespace std;

int charcount(char *a,int pos)
{
  //base
  if(a[pos] == '\0')
    return 0;
  int count = 0;
  int res = charcount(a,pos+1); //recursive call
  count++;
  return res+count;
}

int main()
{
  cout<<charcount("simran",0);
  return 0;
}
