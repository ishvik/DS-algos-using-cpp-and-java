#include<iostream>
using namespace std;

void display(int **chess,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void knighttour(int **chess, int r, int c, int n, int move){
    if(r<0||c<0||r>=n||c>=n||chess[r][c]>0){
        return;
    }else if(move == n*n){
        chess[r][c] = move;
        display(chess,n);
        chess[r][c] = 0;
        return;
    }
    chess[r][c] = move;
    knighttour(chess,r-2,c+1,n,move+1);
    knighttour(chess,r-1,c+2,n,move+1);
    knighttour(chess,r+1,c+2,n,move+1);
    knighttour(chess,r+2,c+1,n,move+1);
    knighttour(chess,r+2,c-1,n,move+1);
    knighttour(chess,r+1,c-2,n,move+1);
    knighttour(chess,r-1,c-2,n,move+1);
    knighttour(chess,r-2,c-1,n,move+1);
    chess[r][c] = 0;
}

int main(){
    int n,r,c;
    cin>>n>>r>>c;
    int **chess;
    chess = new int*[n];
    for(int i=0;i<n;i++)
        chess[i] = new int[n];
    knighttour(chess,r,c,n,1);
    return 0;
}