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
    st.push(0);
    res[0] = 1;
    for(int i=1;i<n;i++){
        while(st.StackTop()>-1 && arr[i]>arr[st.peek()]){
            st.pop();
        }

        if(st.StackTop()<0){
            res[i] = i+1;
        }
        else{
            res[i] = i-st.peek();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}