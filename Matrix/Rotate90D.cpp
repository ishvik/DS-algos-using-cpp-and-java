#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    int c = r;
    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0;i<r;i++){
        int l = 0;
        int ri = c-1;
        while(l<ri){
            int temp1 = arr[i][l];
            arr[i][l] = arr[i][ri];
            arr[i][ri] = temp1;
            l++;
            ri--;
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
