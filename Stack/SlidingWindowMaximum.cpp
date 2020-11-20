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
    res[n-1] = n;
    for(int i=n-2;i>=0;i--){
        while(st.StackTop() >-1 && arr[i]>=arr[st.peek()]){
            st.pop();
        }
        
        if(st.StackTop() < 0){
            res[i] = n;
        }
        else{
            res[i] = st.peek();
        }
        st.push(i);
    }
    int k;
    cin>>k;
    int j = 0;
    for(int i=0;i<=n-k;i++){
        if(j<i)
            j = i;
        while(res[j]<i+k){
            j = res[j];
        }

        cout<<arr[j];
    }
    return 0;
}