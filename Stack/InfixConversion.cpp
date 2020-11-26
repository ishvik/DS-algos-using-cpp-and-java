#include<bits/stdc++.h>
using namespace std;

class Stack{
  public:
  string size[1000];
  int top = -1;
  
  void push(string x){
      if(top == 1000)
        return;
      else{
          top++;
          size[top] = x;   
      }
  }
  
  string pop(){
      return size[top--];
  }
  
  string peek(){
      return size[top];
  }
  
  int StackTop(){
      return top;
  }
};

class Stack1{
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

int precedence(char ch){
    if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main(){
    string s;
    cin>>s;
    Stack pre;
    Stack post;
    Stack1 oprt;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch == '('){
            oprt.push(ch);
        }else if((ch >='0' && ch<='9') || (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            pre.push(ch+"");
            post.push(ch+"");
        }else if(ch == ')'){
            while(oprt.peek() != '('){
                string pre2 = pre.pop();
                string pre1 = pre.pop();
                char op = oprt.pop();
                string str = op+pre1+pre2;
                pre.push(str);
                string pos1 = post.pop();
                string pos2 = post.pop();
                string str2 = pos1+pos2+op;
                post.push(str2);
            }
            oprt.pop();
        }else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            while(oprt.StackTop() > 0 && oprt.peek() != '(' && precedence(ch) <= precedence(oprt.peek())){
                string pre2 = pre.pop();
                string pre1 = pre.pop();
                char op = oprt.pop();
                string str = op+pre1+pre2;
                pre.push(str);
                string pos2 = post.pop();
                string pos1 = post.pop();
                string str2 = pos1+pos2+op;
                post.push(str2);
            }
            oprt.push(ch);
        }
    }
    while(oprt.StackTop() > 0){
            string pre2 = pre.pop();
            string pre1 = pre.pop();
            char op = oprt.pop();
            string str = op+pre1+pre2;
            pre.push(str);
            string pos2 = post.pop();
            string pos1 = post.pop();
            string str2 = pos1+pos2+op;
            post.push(str2);
    }
    cout<<pre.peek()<<endl;
    cout<<post.peek()<<endl;
    return 0;
}