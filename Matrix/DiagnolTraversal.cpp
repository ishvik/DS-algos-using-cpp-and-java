#include<iostream>
using namespace std;

int main(){

    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int d=0;d<r;d++){
        for(int i=0,j=d;j<r;i++,j++){
            cout<<arr[i][j];
            cout<<endl;
        }
    }

    return 0;
}
