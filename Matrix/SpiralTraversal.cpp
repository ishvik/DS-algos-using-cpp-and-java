#include<iostream>
using namespace std;

int main(){

    int r,c;
    cin>>r>>c;
    int m[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }

    int min_row = 0;
    int min_col = 0;
    int max_row = r-1;
    int max_col = c-1;
    int total = r*c;
    int count = 0;
    while(count<total){
        //left
        for(int i=min_row,j=min_col;i<=max_row && count<total;i++){
            cout<<m[i][j]<<endl;
            count++;
        }
        min_col++;
        //bottom
        for(int i=max_row,j=min_col;j<=max_col && count<total;j++){
            cout<<m[i][j]<<endl;
            count++;
        }
        max_row--;
        //right
        for(int i=max_row,j=max_col;i>=min_row && count<total;i--){
            cout<<m[i][j]<<endl;
            count++;
        }
        max_col--;
        //top
        for(int i=min_row,j=max_col;j>=min_col && count<total;j--){
            cout<<m[i][j]<<endl;
            count++;
        }
        min_row++;
    }
    return 0;
}
