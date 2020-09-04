#include<iostream>
using namespace std;

int Max(int arr[],int n, int idx){
    if(idx == n-1)
        return arr[idx];
    int i = Max(arr,n,idx+1);
    if(i>arr[idx])
        return i;
    else 
        return arr[idx];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<Max(arr,n,0);
    return 0;
}