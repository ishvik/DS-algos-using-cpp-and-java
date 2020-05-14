#include<stdio.h>
#include<conio.h>

struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array Arr)
{
    int i;
    printf("All Elements are \n");
    for(i=0;i<Arr.length;i++)
        printf("%d ",Arr.A[i]);
}
void delete(struct array *Arr)
{
    int position,i;
    printf("Enter the position from where you want to delete = ");
    scanf("%d",&position);
    if(position>=0 && position<=Arr->length-1)
    {
        for(i=position;i<Arr->length;i++)
            Arr->A[i]=Arr->A[i+1];
    }
    Arr->length--;
}
int main()
{
    struct array arr={{10,20,30,40,50},20,10};

    delete(&arr);
    display(arr);
}
