#include<iostream>
using namespace std;

int find(int arr[],int n,int key)
{
    int x = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
            x = i;
    }
    return x;
}

int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>key;
    cout<<find(arr,n,key);
    return 0;
}
