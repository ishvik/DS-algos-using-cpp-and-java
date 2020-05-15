#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i,j;
    int A[5]={2,3,4,5,6};
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=4;
    p[2]=9;
    p[3]=10;
    p[4]=19;
    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
};
