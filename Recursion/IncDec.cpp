#include<iostream>
using namespace std;

void PrintIncDec(int n){
    if(n == 0)
        return;
    cout<<n<<endl;
    PrintIncDec(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    PrintIncDec(n);
    return 0;
}