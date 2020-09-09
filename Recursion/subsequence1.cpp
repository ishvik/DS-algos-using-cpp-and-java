#include<bits/stdc++.h>
using namespace std;

vector<string> getsubseq(string s){
    if(s.length() == 0){
        vector<string> r;
        r.push_back("");
        return r;
    }
    char ch = s[0];
    string ros = s.substr(1);
    vector<string> res = getsubseq(ros);
    
    vector<string> f;
    for(string str:res){
        f.push_back(""+str);
    }
    for(string str:res){
        f.push_back(ch+str);
    }
    return f;
}

int main(){
    string s;
    cin>>s;
    vector<string> st = getsubseq(s);
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