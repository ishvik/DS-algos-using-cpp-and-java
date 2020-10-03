#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    cout<<"Swapping "<<arr[i]<<" and "<<arr[j]<<endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int n, int p,int l, int h){
    int i = l;
    int j = l;
    cout<<"pivot -> "<<p<<endl;
    while (i <= h) {
      if (arr[i] <= p) {
        swap(arr, i, j);
        i++;
        j++;
      } else {
        i++;
      }
    }
    cout<<"pivot index -> "<<j-1<<endl;
    return j-1;
}

int quickselect(int arr[],int n,int k,int l,int h){
    int p = arr[h];
    int pi = partition(arr,n,p,l,h);
    
    if(k>pi)
        return quickselect(arr,n,k,p+1,h);
    else if(k<pi)
        return quickselect(arr,n,k,l,pi-1);
    else
        return p;
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    cout<<quickselect(arr,n,k-1,0,n-1);
    return 0;
}