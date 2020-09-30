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

void quicksort(int arr[],int n, int l, int h){
    if(l>h)
        return;
        
    int p = arr[h];
    int pi = partition(arr,n,p,l,h);
    quicksort(arr,n,l,pi-1);
    quicksort(arr,n,pi+1,h);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quicksort(arr,n,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}