#include<stdio.h>
#include<conio.h>

struct array
{
    int A[20];
    int size;
    int length;
};
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearsearch(struct array *arr)
{
    int i,key;
    printf("Enter the element to be searched = ");
    scanf("%d",&key);
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);
            printf("Element found at %d index",i);
        }
    }
    return -1;
}

void display(struct array arr)
{
    int i;
    printf("All Elements are \n");
    for(i=0;i<=arr.length;i++)
        printf("%d ",arr.A[i]);
}
int main()
{
    struct array arr={{1,2,3,4,5},10,7};

    linearsearch(&arr);
    //printf("%d\n",improvesearch(&arr,4));
    display(arr);

}
