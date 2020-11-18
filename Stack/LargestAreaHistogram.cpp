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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Stack st;
    int rsi[n];
    st.push(n-1);
    rsi[n-1] = n;
    for(int i=n-2;i>=0;i--){
        while(st.StackTop()>-1 && arr[i]<=arr[st.peek()]){
            st.pop();
        }
        if(st.StackTop()==-1){
            rsi[i] = n;
        }else{
            rsi[i] = st.peek();
        }
        st.push(i);
    }
    int lsi[n];
    st.push(0);
    lsi[0] = -1;
    for(int i=1;i<n;i++){
        while(st.StackTop()>-1 && arr[i]<=arr[st.peek()]){
            st.pop();
        }
        if(st.StackTop()==-1){
            lsi[i] = -1;
        }else{
            lsi[i] = st.peek();
        }
        st.push(i);
    }
    
    int MaxArea = 0;
    for(int i=0;i<n;i++){
        int width = rsi[i]-lsi[i]-1;
        int area = width*arr[i];
        
        if(area>MaxArea)
            MaxArea=area;
    }
    cout<<MaxArea;
    return 0;
}