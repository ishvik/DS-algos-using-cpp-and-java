#include<iostream>
using namespace std;

void matrixproduct(int **arr1,int **arr2,int r1,int r2,int c1,int c2){
    int result[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int r1,r2,c1,c2;
    cin>>r1>>c1;
    int **m1;
    m1 = new int*[r1];
    for(int i=0;i<r1;i++)
        m1[i] = new int[c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }
    cin>>r2>>c2;
    int **m2;
    m2 = new int*[r2];
    for(int i=0;i<r2;i++)
        m2[i] = new int[c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }
    if(c1 != r2){
        cout<<"Invalid input";
        return 0;
    }
    matrixproduct(m1,m2,r1,r2,c1,c2);

    return 0;
}
