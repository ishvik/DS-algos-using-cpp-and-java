#include<iostream>
using namespace std;

void floodfill(int **arr, int m, int n, int r, int c, string res, bool **visited){
    if(r<0 || c<0 || r == m || c == n || arr[r][c] == 1 || visited[r][c] == 1)
        return;
    
    if(r == m-1 && c == n-1){
        cout<<res<<endl;
        return;
    }
    
    visited[r][c] = 1;
    floodfill(arr,m,n,r-1,c,res+"t",visited);
    floodfill(arr,m,n,r,c-1,res+"l",visited);
    floodfill(arr,m,n,r+1,c,res+"d",visited);
    floodfill(arr,m,n,r,c+1,res+"r",visited);
    visited[r][c] = 0;
}

int main(){
    int m,n;
    cin>>n>>m;
    int **arr;
    arr = new int*[n];
    for(int i=0;i<n;i++)
        arr[i] = new int[m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    bool **visited;
    visited = new bool*[n];
    for(int i=0;i<n;i++)
        visited[i] = new bool[m];
    
    floodfill(arr,n,m,0,0,"",visited);
    
    return 0;
}