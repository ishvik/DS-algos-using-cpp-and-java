#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
float n;
int i,j;
cin>>n;
int ceilValue = ceil(n/2);
for(i=ceilValue; i<=n;i++){
  for(j=1;j<=n;j++){
    cout<<"*"<<"";
  }
  cout<<"\n";
}

return 0;
}
