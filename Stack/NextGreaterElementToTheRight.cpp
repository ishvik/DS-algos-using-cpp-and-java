#include<bits/stdc++.h>
using namespace std;

class Stack{
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
  
  void pop(){
      top--;
  }
  
  int peek(){
      return size[top];
  }
  
  int StackTop(){
      return top;
  }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int res[n];
    Stack st;
    st.push(arr[n-1]);
    res[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        while(st.StackTop() >-1 && arr[i]>=st.peek()){
            st.pop();
        }
        
        if(st.StackTop() < 0){
            res[i] = -1;
        }
        else{
            res[i] = st.peek();
        }
        
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}