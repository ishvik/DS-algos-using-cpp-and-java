#include<iostream>
using namespace std;

class Stack
{
public:
    int Size;
    int Top;
    int *Arr;
};

int main()
{
    Stack st;
    cout<<"Enter size of Stack ";
    cin>>st.Size;
    st.Arr=new int[st.Size];
    st.Top=-1;
    cout<<"Stack created !!!!!!";
    return 0;
}
