#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    cout<<"Swapping "<<arr[i]<<" and "<<arr[j]<<endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

bool compare(int arr[], int i, int j){
    cout<<"Comparing "<<arr[i]<<" and "<<arr[j]<<endl;
    if(arr[i]<arr[j])
        return true;
    else 
        return false;
}

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(compare(arr,j+1,j))
                swap(arr,j,j+1);
            else
                break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
        
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}