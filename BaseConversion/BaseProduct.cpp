#include<iostream>
using namespace std;

int getSingleProduct(int b, int n1, int sd)
{
    int product = 0;
    int p = 1;
    int carry = 0;
    while(n1>0 || carry>0){
        int r = n1%10;
        n1 = n1/10;

        int d = r*sd+carry;
        carry = d/b;
        d = d%b;
        product += d*p;
        p = p*10;
    }
    return product;
}

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

int base_mul(int b, int n1, int n2)
{
    int result = 0;
    int p = 1;
    while(n2>0){
        int d2 = n2%10;
        n2 = n2/10;

        int pro = getSingleProduct(b,n1,d2);
        result = sum_base(b,result,pro*p);
        p = p*10;
    }
    return result;
}


int main()
{
    int b,n1,n2;
    cin>>b>>n1>>n2;
    cout<<base_mul(b,n1,n2);
    return 0;
}
