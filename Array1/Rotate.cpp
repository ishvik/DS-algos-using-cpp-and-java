#include<iostream>
using namespace std;

void reverse(int arr[],int m,int n){
    int i = m;
    int j = n;
    while(i<j){
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void rotate(int arr[],int n,int k){
    k = k%n;
    if(k<0)
        k = k+n;
    int k1 = n-k;
    reverse(arr,0,k1-1);
    reverse(arr,k1,n-1);
    reverse(arr,0,n-1);
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
