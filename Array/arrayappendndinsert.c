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
void append(struct array *arr, int value)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=value;
}
void insert(struct array *arr)
{
    int i,position, value;
    printf("Enter the element You want to insert = ");
    scanf("%d",&value);
    printf("Enter the index where you want to insert = ");
    scanf("%d",&position);
    if(position>=0 && position<=arr->length)
    {
        for(i=arr->length;i>position;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[position]=value;
        arr->length++;
    }
}
int main()
{
    struct array arr={{10,20,30,40,50},20,10};

    //append(&arr,12);
    insert(&arr);
    display(arr);



    return 0;
}










