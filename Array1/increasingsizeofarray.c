#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i;
    int *p, *q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    for(i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
    q=(int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }

}
