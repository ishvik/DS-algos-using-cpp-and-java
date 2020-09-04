#include<iostream>
using namespace std;

int lastidx(int arr[],int n, int idx, int val){
    if(idx == n)
        return -1;
    int i = lastidx(arr,n,idx+1,val);
    if(i == -1){
        if(arr[idx] == val)
            return idx;
        else 
            return -1;
    }
    else{
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
    cout<<lastidx(arr,n,0,d);
    return 0;
}