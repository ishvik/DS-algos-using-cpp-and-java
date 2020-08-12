#include<iostream>
using namespace std;

void reverse(int arr[],int n,int m){
    int temp;
    for(int i=m,j=n-1;i<j;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void rotate(int arr[],int n,int k){
  if(k>n)
    k = k%n;
  if(k<0)
    k = k+n;
  int k1 = n-k;
  reverse(arr,k1,0);
  reverse(arr,n,k1+1);
  reverse(arr,n,0);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int k;
    cin>>k;
    rotate(arr,n,k);
    display(arr,n);
    return 0;
}
