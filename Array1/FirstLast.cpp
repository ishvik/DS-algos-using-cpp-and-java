#include<iostream>
using namespace std;

int FirstInd(int arr[],int n,int d){
    int f = -1;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(d>arr[mid]){
            low = mid+1;
        }
        else if(d<arr[mid]){
            high = mid-1;
        }
        else{
            f = mid;
            high = mid-1;
        }
    }
    return f;
}

int LastInd(int arr[],int n,int d){
    int l = -1;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(d>arr[mid]){
            low = mid+1;
        }
        else if(d<arr[mid]){
            high = mid-1;
        }
        else{
            l = mid;
            low = mid+1;
        }
    }
    return l;
}

int main(){
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>d;
    cout<<FirstInd(arr,n,d)<<endl;
    cout<<LastInd(arr,n,d);
    return 0;
}
