#include<iostream>
#include<cmath>
using namespace std;

void subset(int arr[],int n){
    int all = pow(2,n);
    for(int i=0;i<all;i++){
        int temp = i;
        string set = "";
        for(int j=n-1;j>=0;j--){
            int rem = temp%2;
            temp = temp/2;
            if(rem == 0){
                set = "-  "+set;
            }else{
                set = arr[j]+" "+set;
            }
        }
        cout<<set<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    subset(arr,n);
    return 0;
}
