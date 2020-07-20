#include<iostream>
using namespace std;

int sumofarray(int a[],int n,int pos)
{
  //base
  if(pos == n)
    return 0;
  int sum = 0;
  int res = sumofarray(a,n,pos+1); //recursive call
  sum=sum+a[pos];
  return res+sum;
}

int main()
{
  int n;
  cout<<"Enter size of array ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Sum = "<<sumofarray(arr,n,0);
  return 0;
}
