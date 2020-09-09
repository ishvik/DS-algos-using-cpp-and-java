#include<bits/stdc++.h>
using namespace std;

vector<string> getkpc(string s){
    string arr[10] = {".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    if(s.length() == 0){
        vector<string> r;
        r.push_back("");
        return r;
    }
    
    char ch = s[0];
    string ros = s.substr(1);
    vector<string> res = getkpc(ros);
    
    vector<string> f;
    string code = arr[ch-'0'];
    for(int i = 0;i < code.length();i++){
        char codech = code[i];
        for(string str:res){
            f.push_back(codech+str);
        }
    }
    return f;
}

int main(){
    string s;
    cin>>s;
    vector<string> st = getkpc(s);
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