#include<iostream>
using namespace std;

int *allidx(int arr[],int n, int c, int idx, int val){
    if(idx == n)
        return new int[c];
    if(arr[idx] == val){
        int *index = allidx(arr,n,c+1,idx+1,val);
        index[c] = idx;
        return index;
    }
    else{
        int *index = allidx(arr,n,c,idx+1,val);
        return index;
    }
}

int main(){
    int n,val;
    cin>>n;
    int arr[n];
    int *res;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>val;
    res = allidx(arr,n,0,0,val);
    int s = sizeof(res)/sizeof(res[0]);
    for(int i=0;i<s;i++)
        cout<<res[i]<<endl;
    return 0;
}