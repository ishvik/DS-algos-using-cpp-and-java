#include<stdio.h>
#include<conio.h>

struct array
{
    int A[20];
    int size;
    int length;
};

int BinarySearch(struct array arr)
{
    int val,l,h,mid;
    printf("Enter the element to be searched = ");
    scanf("%d\n",&val);
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
    printf("Enter the element to be searched = ");
    scanf("%d\n",&val);
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
    struct array arr={{1,2,3,4,5},10,7};
    printf("%d\n",RbinearySearch(arr.A,0,arr.length));

}
