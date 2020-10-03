#include<iostream>
using namespace std;
int main(){
  int n,i,j;
  int count = 1;
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<count<<"\t";
      count++;

    }
    cout<<"\n";
  }
  return 0;
}
