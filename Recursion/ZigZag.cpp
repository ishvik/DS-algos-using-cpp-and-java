#include<iostream>
using namespace std;

void PrintZigZag(int n){
    if(n == 0)
        return;
    cout<<n<<" ";
    PrintZigZag(n-1);
    cout<<n<<" ";
    PrintZigZag(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    PrintZigZag(n);
    return 0;
}