#include<iostream>
#include<string>
using namespace std;
int main(){
  int pattern[20][20];
  int i,j,n;
  cin>>n;
  int length = n + 1;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i==j || i+ j == length){
        cout<<"*"<<"\t";
      }
      else{
        cout<<"\t";
      }
    }
    cout<<"\n";
  }
  return 0;
}
