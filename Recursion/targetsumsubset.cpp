#include<bits/stdc++.h>
using namespace std;

void targetsum(int arr[],int idx, int t, int s, int n, string res){
    if(idx == n){
        if(s == t)
            cout<<res<<". "<<endl;
        return;
    }
    string st = to_string(arr[idx]);
    targetsum(arr,idx+1,t,s+arr[idx],n,res+st+", ");
    targetsum(arr,idx+1,t,s,n,res);
}

int main(){
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>t;
    targetsum(arr,0,t,0,n,"");
    return 0;
}
