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
    void pop(){
        top--;
    }
    
    char stacktop(){
        if(top == -1)
            return '\0';
        else
            return size[top];
    }
};

int main(){
    string s;
    cin>>s;
    Stack st;
    for(int i=0;i<s.length();i++){
        if(s[i] == ')'){
            if(st.stacktop() == '('){
                cout<<"true";
                return 0;
            }
            else{
                while(st.stacktop() != '('){
                    st.pop();
                }
                st.pop();
            }
        }else{
            st.push(s[i]);
        }
    }
    cout<<"false";
    return 0;
}