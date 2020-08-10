#include<iostream>
using namespace std;

int sum_base(int b,int n1, int n2)
{
    int sum = 0;
    int c = 0;
    int p = 1;
    while(n1>0 || n2>0 || c>0)
    {
      int r1 = n1%10;
      int r2 = n2%10;
        n1 = n1/10;
        n2 = n2/10;

        int d_add = r1+r2+c;
        c = d_add/b;
        d_add = d_add%b;
        sum+=d_add*p;
        p = p*10;
    }
    return sum;
}

int main()
{
    int n1,n2,b;
    cin>>b>>n1>>n2;
    cout<<sum_base(b,n1,n2);
    return 0;
}
