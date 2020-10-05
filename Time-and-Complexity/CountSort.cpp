#include<bits/stdc++.h>
using namespace std;

void countsort(int arr[],int n, int max, int min){
    int range = max-min+1;
    int prearr[range];
    
    for(int i=0;i<n;i++){
        int ind = arr[i]-min;
        prearr[ind]++;
    }
    
    for(int i=0;i<range;i++){
        prearr[i] = prearr[i]+prearr[i-1];
    }
    
    int res[n];
    
    for(int i=n;i>=0;i++){
        int val = arr[i];
        int pos = prearr[val-min];
        res[pos-1] = val;
        prearr[val-min]--;
    }
} 

int main(){
    int n;
    cin>>n;
    int arr[n];
    int ma = 80000;
    int mi = -80000;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ma = max(ma,arr[i]);
        mi = min(mi,arr[i]);
    }
    
    
    countsort(arr,n,ma,mi);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}