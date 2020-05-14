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
    printf("Elements are ");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
void get(struct array arr)
{
    int n;
    printf("Enter index to get value = ");
    scanf("%d",&n);
    if(n>=0 && n<arr.length)
    {
        printf("Value is %d ",arr.A[n]);
    }
    else
        printf("value is not found");
}
void set(struct array arr)
{
    int ind,x;
    printf("Enter the index in which you want to change the value = ");
    scanf("%d",&ind);
    printf("Enter the value to store in that index = ");
    scanf("%d",&x);
    if(ind>=0 && ind<arr.length)
        arr.A[ind]=x;
        display(arr);
}
int sum(struct array arr)
{
    int i, total=0;
    for(i=0;i<arr.length;i++)
        total=total+arr.A[i];
    printf("\nSum is %d",total);
}
int avg(struct array arr)
{
    int i;
    float a;
    for(i=0;i<arr.length;i++)
        a=sum(arr)/arr.length;
    printf("\nAverage is %d",a);
}
void Max(struct array arr)
{
    int max,i;
    max=arr.A[0];
    for(i=1;i<arr.length;i++)
        if(arr.A[i]>max)
        {
            max=arr.A[i];
        }
    printf("\nHighest element is %d",max);
}
void Min(struct array arr)
{
    int min,i;
    min=arr.A[0];
    for(i=1;i<arr.length;i++)
        if(arr.A[i]<min)
        {
            min=arr.A[i];
        }
    printf("\nSmallest element is %d",min);
}
int main()
{
    struct array arr={{11,20,19,41,51,623,71,82},20,8};
    //get(arr);
    //set(arr);
    display(arr);
    //avg(arr);
    //Max(arr);
    Min(arr);
    return 0;
}
