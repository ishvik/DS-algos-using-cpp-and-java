#include<iostream>
#include<string>
using namespace std;

void printalpha(string n, string res)
{
  //base case
  if(n.length()==0)
  {
    cout<<res<<endl;
    return;
  }
  char ch1 = (char)(n[0]-'1'+'a');
  printalpha(n.substr(1),res+ch1); //first recursive call

  if(n.length()>1)
  {
    int num = ((n[0]-'0')*10) + (n[1]-'0');
    if(num<=26)
    {
      char ch2 = (char)(num+'a'-1);
      printalpha(n.substr(2),res+ch2); //second recursive call
    }
  }
}

int main()
{
  string s;
  cout<<"Enter any numbers ";
  cin>>s;
  printalpha(s,"");
  return 0;
}
