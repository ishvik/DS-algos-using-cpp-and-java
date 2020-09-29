#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    cout<<"Swapping "<<arr[i]<<" and "<<arr[j]<<endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void partition(int arr[],int n, int p){
    int i = 0;
    int j = 0;
    while(i<n){
        if(arr[i] > p)
            i++;
        else{
            swap(arr,i,j);
            i++;
            j++;
        }
    }
}

int main(){
    int n, p;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>p;
    partition(arr,n,p);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}