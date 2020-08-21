#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int m[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }

    int dir = 0;
    int i = 0;
    int j = 0;

    while(true){
        dir = (dir + m[i][j]) % 4;

        if(dir == 0)
            j++;
        else if(dir == 1)
            i++;
        else if(dir == 2)
            j--;
        else if(dir == 3)
            i--;

        if(i<0){
            i++;
            break;
        }else if(j<0){
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
    cout<<r<<endl;
    cout<<c;
    return 0;
}
