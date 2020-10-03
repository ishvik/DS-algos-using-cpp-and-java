#include<iostream>
using namespace std;
int main(){
  int i,j,n;
  cin>>n;
  int length = n + 1;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i+j == length){
        cout<<"*"<<"";
      }
      else{
        cout<<"\t";
      }
    }
    cout<<"\n";
  }
  return 0;
}
