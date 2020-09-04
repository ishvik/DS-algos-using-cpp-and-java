#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0)
        return 1;
    int f = fact(n-1);
    int res = f*n;
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}