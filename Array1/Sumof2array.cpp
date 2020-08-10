#include<iostream>
using namespace std;

// void sumof2array(int arr1[],int arr2[], int arr3[],int n1, int n2,int n3){
//     int i = n1-1;
//     int j = n2-1;
//     int k = n3-1;
//     int c = 0;
//     while(k>0){
//         int d = c;
//         if(i>0){
//             d += arr1[i];
//         }
//         if(j>0){
//             d += arr2[j];
//         }
//         c = d/10;
//         d = d%10;
//         arr3[k] = d;
//         i--;
//         j--;
//         k--;
//     }
//     if(c != 0){
//         cout<<c<<endl;
//     }
//     for(int i=0;i<n3;i++){
//         cout<<arr3[i]<<endl;
//     }
//
// }

int main(){
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    // for(int i=0;i<n1;i++){
    //     cin>>arr1[i];
    // }
    cin>>n2;
    int arr2[n2];
    // for(int i=0;i<n2;i++){
    //     cin>>arr2[i];
    // }
    int n3 = n1>n2?n1:n2;
    cout<<n3;
    // int arr3[n3];
    // sumof2array(arr1,arr2,arr3,n1,n2,n3);
    return 0;
}
