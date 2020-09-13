#include<iostream>
#include<list>
using namespace std;

int main(){
  list<int> l1;
  l1.push_back(230);
  l1.push_back(780);
  l1.push_back(900);
  l1.push_back(120);
  while(!l1.empty()){
    cout<<l1.front()<<" ";
    l1.pop_front();
  }

  l1.pop_front(); //removing element from Front
  l1.pop_back(); //removing element from back

  return 0;
}
