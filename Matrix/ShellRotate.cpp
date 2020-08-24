#include<iostream>
using namespace std;

void reverse(int arr[],int st,int en){
  for(int i=st,j=en;i<j;i++,j--){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

void rotate(int arr[],int k,int n){
  k = k%n;
  if(k<0)
    k = k+n;
  reverse(arr,0,k-1);
  reverse(arr,k,n-1);
  reverse(arr,0,n-1);
}

int * shell2array(int **arr,int r,int c,int s){
    int min_row = s-1;
    int min_col = s-1;
    int max_row = r-s;
    int max_col = c-s;
    int size = 2*(max_row-min_row+max_col-min_col);
    int temp[size];

    int ind = 0;
    for(int i=min_row,j=min_col;i<=max_row;i++){
        temp[ind] = arr[i][j];
        ind++;
    }

    for(int i=max_row,j=min_col+1;j<=max_col;j++){
        temp[ind] = arr[i][j];
        ind++;
    }

    for(int i=max_row-1,j=max_col;i>=min_row;i--){
        temp[ind] = arr[i][j];
        ind++;
    }

    for(int i=min_row,j=max_col-1;j>=min_col+1;j--){
        temp[ind] = arr[i][j];
        ind++;
    }
    return temp;
}

void array2shell(int **arr,int r,int c,int s,int temp[]){
    int min_row = s-1;
    int min_col = s-1;
    int max_row = r-s;
    int max_col = c-s;

    int ind = 0;
    for(int i=min_row,j=min_col;i<=max_row;i++){
        arr[i][j] = temp[ind];
        ind++;
    }

    for(int i=max_row,j=min_col+1;j<=max_col;j++){
        arr[i][j] = temp[ind];
        ind++;
    }

    for(int i=max_row-1,j=max_col;i>=min_row;i--){
        arr[i][j] = temp[ind];
        ind++;
    }

    for(int i=min_row,j=max_col-1;j>=min_col+1;j--){
        arr[i][j] = temp[ind];
        ind++;
    }
}

void ShellRotate(int **arr, int r, int c, int s, int rot){
    int mr = s-1;
    int mc = s-1;
    int mar = r-s;
    int mac = c-s;
    int size = 2*(mar-mr+mac-mc);
    int *temp = shell2array(arr,r,c,s);
    rotate(temp,rot,size);
    array2shell(arr,r,c,s,temp);
}

int main(){
    int r,c,s,rot;

    cin>>r>>c;
    int **arr;
    arr = new int*[r];
    for(int i=0;i<r;i++)
        arr[i] = new int[c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cin>>s;
    cin>>rot;
    ShellRotate(arr,r,c,s,rot);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
