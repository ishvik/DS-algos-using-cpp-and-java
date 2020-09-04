#include<iostream>
using namespace std;

int firstidx(int arr[],int n, int idx, int val){
    if(idx == n)
        return -1;
    if(arr[idx] == val)
        return idx;
    else{
        int i = firstidx(arr,n,idx+1,val);
        return i;
    }
}

int main(){
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>d;
    cout<<firstidx(arr,n,0,d);
    return 0;
}