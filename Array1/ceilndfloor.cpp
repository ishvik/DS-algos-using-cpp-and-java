#include<iostream>
using namespace std;

void ceil_floor(int arr[],int n,int d){
    int l = 0;
    int h = n-1;
    int c = 0;
    int f = 0;
    while(l<=h){
        int mid = (l+h)/2;
        if(d>arr[mid]){
            l = mid+1;
            f = arr[mid];
        }
        else if(d<arr[mid]){
            h = mid-1;
            c = arr[mid];
        }
        else{
            c = arr[l];
            f = arr[h];
        }
    }
    cout<<c<<endl;
    cout<<f<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int d;
    cin>>d;
    ceil_floor(arr,n,d);
    return 0;
}
