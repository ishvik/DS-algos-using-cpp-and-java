#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word, int x ,int y,int pos)
    {
      if(word[pos] == '\0')
        return false;
      vector<char> c;
      if(x+1 == word[pos])
      {
        c.push_back(word[pos]);
        exist(board, word,x+1,y,pos+1);
      }
      if(x-1 == word[pos])
      {
        c.push_back(word[pos]);
        exist(board, word,x-1,y,pos+1);
      }
      if(y+1 == word[pos])
      {
        c.push_back(word[pos]);
        exist(board, word,x,y+1,pos+1);
      }
      if(y-1 == word[pos])
      {
        c.push_back(word[pos]);
        exist(board, word,x,y+1,pos+1);
      }
    }


};


int main()
{
  vector<vector<char>> v;
  int r,c;
  cout<<"Enter row and column of array ";
  cin>>r>>c;
  for(int i=0;i<r;i++)
  {
    vector<char> c1;
    for(int j=0;j<c;j++)
    {
      char c;
      cin>>c;
      c1.push_back(c);
    }
    v.push_back(c1);
  }
  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<v.size();j++)
      cout<<v[i][j]<<" ";
    cout<<endl;
  }
  Solution s1;
  s1.exist(v,"abcd",0,0,0);
  return 0;
}
