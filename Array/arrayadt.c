#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\nAll Elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

int main()
{
    struct array arr;
    int n,i;
    printf("Enter size of array = ");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter Number of Elements of Array = ");
    scanf("%d",&n);

    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;
    display(arr);

   return 0;
}
