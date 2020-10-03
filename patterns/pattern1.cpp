#include<iostream>
#include<string>
using namespace std;
int main(){
  int pattern[20][20];
  int i,j,n;
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<"*"<<"\t";
    }
    cout<<"\n";
  }
  return 0;
}
