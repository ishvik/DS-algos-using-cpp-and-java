#include<iostream>
using namespace std;

void Rotate(int A[],int n)
{
    int temp=A[0];
    int i;
    for(i=0;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
    temp=A[i];
}

void LeftRotate(int A[],int pos, int n)
{
    int i;
    for(i=0;i<pos;i++)
        Rotate(A,n);
    for(int j=0;j<n;j++)
        cout<<A[j];
}
void Reverse(int A[],int n)
{
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        int temp;
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    for(int k=0;k<n;k++)
    {
        cout<<A[k]<<" ";
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    LeftRotate(A,2,5);
    return 0;
}
