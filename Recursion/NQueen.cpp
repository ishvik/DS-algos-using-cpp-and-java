#include<bits/stdc++.h>
using namespace std;

bool issafe(int **chess, int m, int n, int r, int c){
    //check for vertically
    for(int i=r-1, j=c;i>=0;i--){
        if(chess[i][j] == 1)
            return false;
    }
    //check for left diagnol
    for(int i=r-1, j=c-1;i>=0 && j>=0;i--,j--){
        if(chess[i][j] == 1)
            return false;
    }
    //check for right diagnol
    for(int i=r-1, j=c+1;i>=0 && j<n;i--,j++){
        if(chess[i][j] == 1)
            return false;
    }
    return true;
}

void nqueen(int **chess, int m, int n, int row, int col, string res){
    if(row == m){
        cout<<res<<". "<<endl;
        return;
    }
    
    for(int c = 0;c < n;c++){
        if(issafe(chess,m,n,row,c) == true){
            chess[row][c]=1;
            string r = to_string(row);
            string cs = to_string(c);
            nqueen(chess,m,n,row+1,col,res+r+"-"+cs+", ");
            chess[row][c] = 0;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int **chess;
    chess = new int*[n];
    for(int i=0;i<n;i++)
        chess[i] = new int[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>chess[i][j];
        }
    }
    nqueen(chess,n,n,0,0,"");
    return 0;
}