#include<iostream>
using namespace std;

int main(){
    int m1,n1,n2,m2;
    
    cin>>m1>>n1;
    int a1[m1][n1];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>a1[i][j];
        }
    }
    
    cin>>m2>>n2;
    int a2[m2][n2];
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>a2[i][j];
        }
    }
    
    if(n1 != m2){
        cout<<"Invalid input";
        return 0;
    }
    
    int res[m1][n2];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            res[i][j] = 0;
        }
    }
    
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n1;k++){
                res[i][j] += a1[i][k]*a2[k][j];
            }
        }
    }
    
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
