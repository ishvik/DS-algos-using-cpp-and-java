#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool find(vector<vector<char>>& board,string word,int x, int y, int row, int col, int wsf)
  {
    if(x<0 || y<0 || x>=row || y>=col || board[x][y]!=word[wsf])
      return false;
    if(wsf == word.length()-1)
      return true;
    char element = board[x][y];
    board[x][y] = '0';
    bool result = false;
    result = result || find(board,word,x+1,y,row,col,wsf+1) ||
              find(board,word,x,y+1,row,col,wsf+1) ||
              find(board,word,x,y-1,row,col,wsf+1) ||
              find(board,word,x-1,y,row,col,wsf+1);

    board[x][y] = element;
    return result;
  }

  bool exist(vector<vector<char>>& board,string word)
  {
    if(board.size() == 0)
      return false;

    int row = board.size();
    int col = board[0].size();
    for(int i=0;i<row;i++)
      for(int j=0;j<col;j++)
        if(find(board,word,i,j,row,col,0))
            return true;
    return false;
  }

};
