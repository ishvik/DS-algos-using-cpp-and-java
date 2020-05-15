#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int **A;
    *A=new int[3];
    A[0]=new int[4];
    A[1]=new int[4];
    A[2]=new int[4];
    A[3][4]={{1,2,3,4},{10,11,12,13},{2,3,4,5},{9,0,9,0}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<A[i][j];

        }
        cout<<endl;
    }
    return 0;
}
