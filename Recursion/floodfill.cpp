#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void travrse(vector<vector<int>>& image, int row, int col, int newColor,int sr, int sc, int source)
    {
      if(sr==row || sc == col || sr<0 || sc<0 || image[sr][sc]!=newColor)
        return;

      image[sr][sc]=newColor; // changing color
      //recursive call for vertical move
      travrse(image,row,col,newColor,sr+1,sc,source);
      //recursive call for left move
      travrse(image,row,col,newColor,sr-1,sc,source);
      //recursive call for right move
      travrse(image,row,col,newColor,sr,sc-1,source);
      //recursive call for horizontal move
      travrse(image,row,col,newColor,sr,sc+1,source);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
      if(image[sr][sc] == newColor)
        return image;

      int i = image.size();
      int j = image[0].size();
      int source = image[sr][sc];

      travrse(image, i, j ,newColor,sr,sc,source);
    }
};

int main()
{
  vector<vector<int>> img;
  int r,c;
  cout<<"Enter row and column of array ";
  cin>>r>>c;
  for(int i=0;i<r;i++)
  {
    vector<int> i1;
    for(int j=0;j<c;j++)
    {
      int c;
      cin>>c;
      i1.push_back(c);
    }
    img.push_back(i1);
  }
  int nc,sx,sy;
  cout<<"Enter newColor ";
  cin>>nc;
  cout<<"Enter starting points ";
  cin>>sx>>sy;

  Solution s1;
  s1.floodFill(img,sx,sy,nc);
  return 0;
}
