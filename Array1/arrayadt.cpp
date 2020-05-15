#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int Size;
    int length;
};
void display(struct Array arr)
{
    int i;
    cout<<"\nAll Elements are\n";
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<" ";
}

int main()
{
    struct Array arr;
    int n,i;
    cout<<"Enter size of array = ";
    cin>>arr.Size;
    arr.A=new int(arr.Size);
    arr.length=0;

    cout<<"Enter Number of Elements of Array = ";
    cin>>n;

    cout<<"Enter elements of array\n";
    for(i=0;i<n;i++)
        cin>>arr.A[i];
    arr.length=n;
    display(arr);

   return 0;
}
