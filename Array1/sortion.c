#include<stdio.h>
#include<conio.h>

struct array
{
    int A[20];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("All Elements are\n");
    for(i=0;i<=arr.length;i++)
        printf("%d ",arr.A[i]);
}
void insert(struct array *arr)
{
    int i,x;
    printf("Enter the element to store in array = ");
    scanf("%d\n",&x);
    i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}
int isSorted(struct array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]<arr.A[i+1])
        {
            return 1;
        }
    }
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void rearrange(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j)
        {
           swap(&arr->A[i],&arr->A[j]);
        }
}

int main()
{
    struct array arr1={{-1,2,3,-4,3,-2},20,6};

    rearrange(&arr1);
    display(arr1);
    return 0;
}
