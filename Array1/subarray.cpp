#include<iostream>
using namespace std;

void subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                if(arr[k]<=99)
                  cout<<arr[k]<<"  ";
                else
                  cout<<arr[k]<<"\t";
            }
            cout<<endl;
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subarray(arr,n);
    return 0;
}
