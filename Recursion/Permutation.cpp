#include<iostream>
using namespace std;

void printpermutation(string s, string res){
    if(s.length() == 0){
        cout<<res<<endl;
        return;
    }
    
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string lp = s.substr(0,i);
        string rp = s.substr(i+1);
        string str = lp+rp;
        printpermutation(str,res+ch);
    }
}

int main(){
    string s;
    cin>>s;
    printpermutation(s,"");
    return 0;
}