#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct array
{
    int A[20];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("Elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d\n",arr.A[i]);
}
struct array* Union(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++]=arr2->A[j++];
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=10;
return arr3;
}
struct array* Intersection(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            i++;
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else if(arr1->A[i]==arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=10;
return arr3;
}
struct array* Difference(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else
        {
            i++;
            j++;
        }

    }
    for(;i<)
    arr3->length=k;
    arr3->size=10;
return arr3;
}
int main()
{
    struct array arr1={{2,3,4,5,6},10,5};
    struct array arr2={{3,5,6,7,8},10,5};
    struct array *arr3;
    //arr3=Intersection(&arr1,&arr2);
    //arr3=Union(&arr1,&arr2);
    arr3=Difference(&arr1,&arr2);
    display(*arr3);


    return 0;
}
