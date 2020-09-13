#include<bits/stdc++.h>
using namespace std;

vector<string> mazewithjumps(int sr,int sc, int er, int ec){
    if(sr == er && sc == ec){
        vector<string> r;
        r.push_back("");
        return r;
    }
    vector<string> f;
    for(int m=1;m<=ec-sc;m++){
        vector<string> res = mazewithjumps(sr,sc+m,er,ec);
        string m1 = to_string(m);
        for(string str:res)
            f.push_back("h"+m1+str);
    }
    
    for(int m=1;m<=er-sr;m++){
        vector<string> res = mazewithjumps(sr+m,sc,er,ec);
        string m1 = to_string(m);        
        for(string str:res)
            f.push_back("v"+m1+str);
    }
    
    for(int m=1;m<=ec-sc && m<=er-sr;m++){
        vector<string> res = mazewithjumps(sr+m,sc+m,er,ec);
        string m1 = to_string(m);
        for(string str:res)
            f.push_back("d"+m1+str);
    }
    
    return f;
}

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<string> st = mazewithjumps(1,1,n,m);
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