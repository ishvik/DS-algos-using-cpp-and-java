#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int A[3][4];
    int i,j;
    printf("Enter element of array ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d ",A[i][j]);
            printf("\n");
        }
    }
}
