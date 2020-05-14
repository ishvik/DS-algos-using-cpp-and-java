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
    printf("\nElements are ");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
void Reverse(struct array arr)
{
    int i,j,temp;
    for(i=0,j=arr.length-1;i<j;i++,j--)
    {
        temp=arr.A[i];
        arr.A[i]=arr.A[j];
        arr.A[j]=temp;
    }
    display(arr);
}
int main()
{
    struct array arr={{23,11,2,3,1},20,5};
    display(arr);
    printf("\nElements after Reverse");
    Reverse(arr);
}
