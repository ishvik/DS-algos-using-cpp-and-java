#include<iostream>
using namespace std;

int base_sub(int b, int n1, int n2){
    int result = 0;
    int bw = 0;
    int p = 1;
    while(n2>0){
        int r1 = n1%10;
        n1 = n1/10;
        int r2 = n2%10;
        n2 = n2/10;
        int d = 0;
        r2 = r2+bw;
        if(r2>=r1){
            bw = 0;
            d = r2-r1;
        }
        else{
            bw = -1;
            d = r2+b-r1;
        }
        result +=d*p;
        p = p*10;
    }
    return result;
}


int main()
{
    int b,n1,n2;
    cin>>b>>n1>>n2;
    cout<<base_sub(b,n1,n2);
    return 0;
}
