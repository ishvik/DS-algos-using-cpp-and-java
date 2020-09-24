#include<iostream>
using namespace std;

void swap(int arr[],int i, int j){
    cout<<"Swapping "<<arr[i]<<" and "<<arr[j]<<endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

bool compare(int arr[],int i, int j){
    cout<<"Comparing "<<arr[i]<<" and "<<arr[j]<<endl;
    if(arr[i]<arr[j])
        return true;
    else 
        return false;
}

void selectionsort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int s = i;
        for(int j=i+1;j<n;j++){
            if(compare(arr,j,s)){
                s = j;
            }
        }
        swap(arr,i,s);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    selectionsort(arr,n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
    return 0;
}