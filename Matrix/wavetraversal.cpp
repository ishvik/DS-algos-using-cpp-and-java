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

    for(int j=0;j<c;j++){
        if(j%2 == 0){
            for(int i=0;i<r;i++)
                cout<<m[i][j]<<endl;
        }
        else{
            for(int i=r-1;i>=0;i--)
                cout<<m[i][j]<<endl;
        }
    }

    return 0;
}
