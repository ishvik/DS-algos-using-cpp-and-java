#include<iostream>
using namespace std;

int main(){
    int n,val;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cin>>val;

    int i=0;
    int j=n-1;

    while(i<=n && j>=0){
        if(arr[i][j] == val)
        {
            cout<<i<<endl;
            cout<<j;
            return 0;
        }
        else if(val < arr[i][j])
            j--;
        else
            i++;
    }

    cout<<"Not Found";

    return 0;
}
