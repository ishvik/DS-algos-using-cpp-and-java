#include<iostream>
using namespace std;

void diff(int arr1[], int arr2[], int arr3[], int n1, int n2){
    int bw = 0;
    int i = n1-1;
    int j = n2-1;
    int k = n2-1;
    while(k>=0){
        int d = 0;
        int a1v = i>=0?arr1[i]:0;
        if(arr2[j]+bw>=a1v){
            d = arr2[j]+bw-a1v;
            bw = 0;
        }
        else{
            d = arr2[j]+bw+10-a1v;
            bw = -1;
        }
        arr3[k] = d;
        i--;
        j--;
        k--;
    }
    int id = 0;
    while(id<n2){
        if(arr3[id] == 0)
            id++;
        else
            break;
    }
    while(id<n2){
        cout<<arr3[id]<<endl;
        id++;
    }
}

int main(){
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int arr3[n2];
    diff(arr1,arr2,arr3,n1,n2);
    return 0;
}
