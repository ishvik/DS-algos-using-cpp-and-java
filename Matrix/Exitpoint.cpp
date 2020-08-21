#include<iostream>
using namespace std;

int main(){

    int r,c;
    cin>>r;
    cin>>c;
    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }

    int d = 0;
    int i = 0;
    int j = 0;

    while(true){
        d = (d + m[i][j]) % 4;

        if(d == 0){
            j++;
        }
        else if(d == 1){
            i++;
        }
        else if(d == 2){
            j--;
        }
        else if(d == 3){
            i--;
        }

        if(i<0){
            i++;
            break;
        }
        else if(j<0)
        {
            j++;
            break;
        }
        else if(i == r){
            i--;
            break;
        }
        else if(j == c){
            j--;
            break;
        }
    }

    cout<<i<<endl;
    cout<<j;
    return 0;
}
