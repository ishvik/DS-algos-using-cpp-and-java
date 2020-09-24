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

void bubblesort(int arr[],int n){
    for(int itr = 1;itr<=n-1;itr++){
        for(int com=0;com<n-itr;com++){
            if(compare(arr,com+1,com))
                swap(arr,com+1,com);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
        
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
    return 0;
}