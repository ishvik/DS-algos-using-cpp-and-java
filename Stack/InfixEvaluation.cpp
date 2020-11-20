#include<bits/stdc++.h>
using namespace std;

class Stack{
  public:
  char size[1000];
  int top = -1;
  
  void push(char x){
      if(top == 1000)
        return;
      else{
          top++;
          size[top] = x;
      }
  }
  
  char pop(){
      return size[top--];
  }
  
  char peek(){
      return size[top];
  }
  
  int StackTop(){
      return top;
  }
};


class Stack1{
  public:
  int size[1000];
  int top = -1;
  
  void push(int x){
      if(top == 1000)
        return;
      else{
          top++;
          size[top] = x;
      }
  }
  
  int pop(){
      return size[top--];
  }
  
  int peek(){
      return size[top];
  }
  
  int StackTop(){
      return top;
  }
};

int priority(char op){
        if(op == '+'){
            return 1;
        }else if(op == '-'){
            return 1;
        }else if(op == '*'){
            return 2;
        }else{
            return 2;
        }
}
    
int operation(int v1,int v2,char op){
        if(op == '+'){
            return v1+v2;
        }else if(op == '-'){
            return v1-v2;
        }else if(op == '*'){
            return v1*v2;
        }else{
            return v1/v2;
        }
}

int main(){
    string s;
    cin>>s;
    Stack oprt;
    Stack1 oprnd;
    
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch == '('){
            oprt.push(ch);
        }else if(ch >= 0 && ch<=9){
            oprnd.push(ch-'0');
        }else if(ch == ')'){
            while(oprt.peek() != '('){
                char op = oprt.pop();
                int v2 = oprnd.pop();
                int v1 = oprnd.pop();
                int res = operation(v1,v2,op);
                oprnd.push(res);
            }
            oprt.pop();
        }else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            while(oprt.StackTop() > -1 && oprt.peek() != '(' && priority(ch) <= priority(oprt.peek())){
                char op = oprt.pop();
                int v2 = oprnd.pop();
                int v1 = oprnd.pop();
                int res = operation(v1,v2,op);
                oprnd.push(res);
            }
            oprt.push(ch);
        }
        
    }
    while(oprt.StackTop() > -1){
                char op = oprt.pop();
                int v2 = oprnd.pop();
                int v1 = oprnd.pop();
                int res = operation(v1,v2,op);
                oprnd.push(res);
    }
    cout<<oprnd.peek();
    return 0;
}