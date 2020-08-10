#include<iostream>
using namespace std;

int span(int *arr, int n)
{
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }
    return max-min;
}

int main()
{
    int n;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<span(arr,n);
    return 0;
}
