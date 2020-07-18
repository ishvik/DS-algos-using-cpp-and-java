#include<iostream>
using namespace std;

void printseq(string in, string res)
{
  //base case
  if(in.length() == 0)
  {
    cout<<res<<endl;
    return;
  }
  char ch = in[0];
  printseq(in.substr(1),res+ch);//including recursive call

  printseq(in.substr(1),res);//excluding recursive call
}

int main()
{
  string s;
  cout<<"Enter string ";
  cin>>s;
  printseq(s,"");
  return 0;
}
