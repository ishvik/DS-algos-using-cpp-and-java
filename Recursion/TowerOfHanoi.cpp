#include<iostream>
using namespace std;

void TowerHanoi(int n, int t1, int t2, int t3){
    if(n == 0)
        return;
    TowerHanoi(n-1,t1,t3,t2);
    cout<<n<<"["<<t1<<" -> "<<t2<<"]"<<endl;
    TowerHanoi(n-1,t3,t2,t1);
}

int main(){
    int n,t1,t2,t3;
    cin>>n>>t1>>t2>>t3;
    TowerHanoi(n,t1,t2,t3);
    return 0;
}