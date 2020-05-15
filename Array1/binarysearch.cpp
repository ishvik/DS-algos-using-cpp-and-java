#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int Size;
    int length;
};

int BinarySearch(struct Array arr)
{
    int val,l,h,mid;
    cout<<"Enter the element to be searched = ";
    cin>>val;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(val==arr.A[mid])
        {
            return mid;
        }
        else if(val<mid)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int RbinearySearch(int a[], int l, int h)
{
    int val,mid;
    cout<<"Enter the element to be searched = ";
    cout<<val;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(val==a[mid])
        {
            return mid;
        }
        else if(val<a[mid])
        {
            return RbinearySearch(a,l,mid-1);
        }

    }
    else
        {
            return RbinearySearch(a,mid+1,h);
        }
return -1;

}
int main()
{
    struct Array arr={{1,2,3,4,5},10,7};
    cout<<RbinearySearch(arr.A,0,arr.length);

    return 0;
}
