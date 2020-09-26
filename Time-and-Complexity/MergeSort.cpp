#include<bits/stdc++.h>
using namespace std;

int *mergearray(int arr1[], int arr2[], int n1, int n2){
    int *res = new int[n1+n2];
    cout<<"Merging these two arrays "<<endl;
    cout<<"left array -> ";
    for(int i=0;i<n1;i++)
        cout<<arr1[i]<<" ";
    cout<<"right array -> ";
    for(int i=0;i<n2;i++)
        cout<<arr2[i]<<" ";
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            res[k] = arr2[j];
            j++;
            k++;
        }
        
    }
    while(i<n1){
        res[k] = arr1[i];
        k++;
        i++;
    } 
    while(j<n2){
        res[k] = arr2[j];
        k++;
        j++;
    } 
    
    return res;
}

int *mergesort(int arr[], int n, int lo, int hi){
    if(lo == hi){
        int *b = new int[1];
        b[0] = arr[lo];
        return b;
    }
    
    int mid = (lo+hi)/2;
    int *h1 = mergesort(arr,n,lo,mid);
    int *h2 = mergesort(arr,n,mid+1,hi);
    
    int *res = mergearray(h1,h2,n/2,n/2);
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int *res = mergesort(arr,n,0,n);
    for(int i=0;i<n;i++)
        cout<<res[i]<<endl;
    return 0;
}