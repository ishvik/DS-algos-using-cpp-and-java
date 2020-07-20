#include<iostream>
using namespace std;

int charno(string s, int pos, char x)
{
  if(s[pos] == '\0')
    return 0;
  int count = 0;
  int res = charno(s,pos+1,x);
  if(s[pos] == x)
    count++;
  return res+count;
}

int main()
{
  string s;
  cout<<"Enter string ";
  cin>>s;
  char x;
  cout<<"Enter character to calculate frequency ";
  cin>>x;
  cout<<"frequency of "<<x<<" is "<<charno(s,0,x);
  return 0;
}
