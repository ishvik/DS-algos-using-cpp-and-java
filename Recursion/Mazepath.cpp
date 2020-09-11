#include<bits/stdc++.h>
using namespace std;

vector<string> getmazepath(int sr,int sc, int er, int ec){
    if(sr == er && sc == ec){
        vector<string> r;
        r.push_back("");
        return r;
    }
    
    vector<string> hp;
    vector<string> vp;
    
    if(sc < ec)
        hp = getmazepath(sr,sc+1,er,ec);
    
    if(sr < er)
        vp = getmazepath(sr+1,sc,er,ec);
        
    vector<string> f;
    for(string str:hp)
        f.push_back("h"+str);
    
    for(string str:vp)
        f.push_back("v"+str);
    
    return f;
}

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<string> st = getmazepath(1,1,n,m);
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