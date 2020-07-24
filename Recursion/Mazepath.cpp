#include<iostream>
using namespace std;

int countpath(int x,int y,int x1, int y1, string s, bool arr[3][3])
{
  //base
  if(x == x1 && y == y1)
  {
    cout<<s<<endl;
    return 1;
  }
  int count = 0;
  arr[x][y] = true;
  if(x+1<=x1 && !arr[x+1][y])
    count+=countpath(x+1,y,x1,y1,s+"V",arr); //recursive call for vertical move
  if(x-1>=0 && !arr[x-1][y])
    count+=countpath(x-1,y,x1,y1,s+"U",arr); //recursive call for left move
  if(y-1>=0 && !arr[x][y-1])
    count+=countpath(x,y-1,x1,y1,s+"L",arr); //recursive call for right move
  if(y+1<=y1 && !arr[x][y+1])
    count+=countpath(x,y+1,x1,y1,s+"H",arr); //recursive call horizontal move
  arr[x][y] = false;

  return count;
}
int main()
{
  int sx,sy,ex,ey;
  cout<<"Enter starting points ";
  cin>>sx>>sy;
  cout<<"Enter ending points ";
  cin>>ex>>ey;
  bool arr[r][c];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      arr[i][j] = false;
    }
  }
  cout<<countpath(sx,sy,ex,ey,"",arr);
  return 0;
}
