#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void inverse(int arr[],int n){
    int arr1[n];
    for(int i=0;i<n;i++){
        int x = arr[i];
        arr1[x] = i;
    }
    display(arr1,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    inverse(arr,n);
    return 0;
}
