#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec; //initializing vector
  //inserting 4 values into vector
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);
  for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" "; //output :- 10 20 30 40
  vec.pop_back(); //deleting element
  cout<<"\nAfter deleting an element ";
  for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" "; //output :- 10 20 30
  vec.clear();
  return 0;
}
