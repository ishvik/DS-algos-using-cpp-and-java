#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i,j;
    int **A;
    A=(int **)malloc(3*sizeof(int *));
    A[0]=(int *)malloc(4*sizeof(int));
    A[1]=(int *)malloc(4*sizeof(int));
    A[2]=(int *)malloc(4*sizeof(int));
    A[3][4]={{1,2,3,4},{10,11,12,13},{2,3,4,5},{9,0,9,0}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
}
