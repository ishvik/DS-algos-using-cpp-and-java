#include<bits/stdc++.h>
using namespace std;

int *mergearray(int arr1[], int arr2[], int n1, int n2){
    int *res = new int[n1+n2];
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

int main(){
    int n1,n2;
    cin>>n1;
    int *arr1 = new int[n1];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cin>>n2;
    int *arr2 = new int[n2];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
        
    int *res = mergearray(arr1,arr2,n1,n2);
    for(int i=0;i<n1+n2;i++)
        cout<<res[i]<<endl;
    
    return 0;
}