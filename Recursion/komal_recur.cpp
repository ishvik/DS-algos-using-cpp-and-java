#include<iostream>
using namespace std;

int NumPath(int x, int y, int x1, int y1, string s, bool v[3][3]){
if(x==x1 && y==y1){
    cout<<s<<endl;
    return 1;
    }
    v[x][y]=true;
int count=0;
if(y+1<=y1 && !v[x][y+1])
count+=NumPath(x,y+1,x1,y1,s+"H",v);
if(x-1>=0 && !v[x-1][y])
count+=NumPath(x-1,y,x1,y1,s+"U",v);
if(y-1>=0 && !v[x][y-1])
count+=NumPath(x,y-1,x1,y1,s+"L",v);
if(x+1<=x1 && !v[x+1][y])
count+=NumPath(x+1,y,x1,y1,s+"V",v);
v[x][y]=false;
return count;
}

int main()
{
    int x,y,x1,y1;
    bool v[3][3];
    v[0][0]=false;
    v[0][1]=false;
    v[0][2]=false;
    v[1][0]=false;
    v[1][1]=false;
    v[1][2]=false;
    v[2][0]=false;
    v[2][1]=false;
    v[2][2]=false;
    cout<<"Enter : ";
    cin>>x>>y>>x1>>y1;
//    bool v[x1+1][y1+1];
    cout<<"Paths : "<<NumPath(x,y,x1,y1,"",v);
    return 0;
}
