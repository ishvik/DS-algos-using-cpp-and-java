#include<iostream>
using namespace std;

void PrintIncreas(int n){
    if(n == 0)
        return;
    PrintIncreas(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    PrintIncreas(n);
    return 0;
}