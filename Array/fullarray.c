#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void Display(struct array arr)
{
    int i;
    printf("\nAll elements are \n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
void Add(struct array *arr)
{
    int x1;
    printf("Enter the Element to add = ");
    scanf("%d",&x1);
    arr->A[arr->length++]=x1;
}

void insert(struct array *arr, int index, int value)
{
    int i;
    printf("Enter the Value you want to insert = ");
    scanf("%d",&value);
    printf("Enter the Position where you want to insert = ");
    scanf("%d",&index);
    for(i=arr->length;i>index;i--)
        arr->A[i+1]=arr->A[i];
    arr->A[i]=value;
    arr->length++;
}

void Delete(struct array *arr, int index)
{
    int i;
    printf("Enter the index from where u want to delete an element = ");
    scanf("%d",&index);
    for(i=index;i<arr->length;i++)
        arr->A[i]=arr->A[i+1];
    arr->length--;
}

int main()
{


    struct array arr1;
    int n,i,ch;
    printf("Enter the size of array = ");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    arr1.length=0;

    printf("Enter no. of elements = ");
    scanf("%d",&n);

    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d\n",&arr1.A[i]);
    arr1.length=n;

    printf("\nFollowing operation You can Perform");
    printf("\n1. Display");
    printf("\n2. Add an element\n3. Insert an element\n4. Delete\n5.Linear Search\n6. Binary Search\n7. Get an Value\n8. Find maximum\n9. Find Mininum\n10. Reverse\n");


    do{
            printf("Enter your choice = ");
            scanf("%d\n",&ch);
            switch(ch)
            {
                case 1:
                    {
                        Display(arr1);
                        break;
                    }
                case 2:
                    {
                        Add(&arr1);
                        break;
                    }

            }
    }while(ch<2);
    return 0;
}
