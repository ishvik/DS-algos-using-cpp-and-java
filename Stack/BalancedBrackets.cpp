#include<bits/stdc++.h>
using namespace std;

class Stack{
  public:
  char size[1000];
  int top = -1;
  
  void push(char x){
      if(top == 1000){
          return;
      }
      else{
          top++;
          size[top] = x;
      }
  }
  
  void pop(){
      top--;
  }
  
  char peek(){
      return size[top];
  }
  
    int checkclose(char br){
        if(top == -1)
            return 0;
        else if(peek() != br)
            return 1;
        else{
            pop();
            return 1;
        }
    }
    int StackTop(){
        return top;
    }
};

int main(){
    string s;
    cin>>s;
    Stack st;
    
    for(int i=0;i<s.length();i++){
        char ch = s.at(i);
        if(ch == '(' || ch == '[' || ch == '{'){
            st.push(ch);
        }else if(ch == ')'){
            if(st.checkclose('(') == 0){
                cout<<"false";
                return 0;
            }
        }else if(ch == ']'){
            if(st.checkclose('[') == 0){
                cout<<"false";
                return 0;
            }
            
        }else if(ch == '}'){
            if(st.checkclose('{') == 0){
                cout<<"false";
                return 0;
            }
        }
    }
    if(st.StackTop() == -1)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}