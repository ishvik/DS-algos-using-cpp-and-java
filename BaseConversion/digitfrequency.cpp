#include<iostream>
using namespace std;

int cal_digit(int *arr,int digit,int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == digit)
            count++;
    }
    return count;
}

int main()
{
    int n,dig;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>dig;
    cout<<cal_digit(arr,dig,n);
    return 0;
}
