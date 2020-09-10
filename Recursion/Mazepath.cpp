#include<bits/stdc++.h>
using namespace std;

vector<string> getstairpath(int n){
    if(n == 0){
        vector<string> r;
        r.push_back("");
        return r;
    }else if(n < 0){
        vector<string> r;
        return r;
    }
    
    vector<string> p1 = getstairpath(n - 1);
    vector<string> p2 = getstairpath(n - 2);
    vector<string> p3 = getstairpath(n - 3);
    
    vector<string> f;
    for(string str:p1){
        f.push_back('1'+str);
    }
    for(string str:p2){
        f.push_back('2'+str);
    }
    for(string str:p3){
        f.push_back('3'+str);
    }
    
    return f;
}

int main(){
    int s;
    cin>>s;
    vector<string> st = getstairpath(s);
    for(int i = 1;i<st.size();i++){
        st.insert(st.begin()+i,", ");
        i++;
    }
    cout<<"[";
    for(int i = 0;i < st.size(); i++){
        cout<<st[i];
    }
    cout<<"]";
    return 0;
}