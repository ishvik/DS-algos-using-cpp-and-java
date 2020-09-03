#include<iostream>
using namespace std;

int power(int p,int n){
    if(n == 0)
        return 1;
    int pw = power(p,n/2);
    int res = pw*pw;
    
    if(n%2 == 1)
        res = res*p;
    return res;
}

int main(){
    int p,n;
    cin>>p>>n;
    cout<<power(p,n);
    return 0;
}