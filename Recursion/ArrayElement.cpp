#include<iostream>
using namespace std;

void ArrayEle(int arr[],int n,int idx){
    if(idx == n)
        return;
    cout<<arr[idx]<<endl;
    ArrayEle(arr,n,idx+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ArrayEle(arr,n,0);
    return 0;
}