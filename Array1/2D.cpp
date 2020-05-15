#include<iostream>
using namespace std;

int main()
{
    int A[3][4];
    int i,j;
    cout<<"Enter element of array ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>A[i][j];
        }
    }
    return 0;
}
