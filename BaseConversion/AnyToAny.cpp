#include<iostream>
using namespace std;

int decimal_to_any(int n, int b)
{
    int sum = 0;
    int p = 1;
    while(n>0)
    {
        int rem = n%b;
        n = n/b;
        sum+=rem*p;
        p = p*10;
    }
    return sum;
}

int Any_to_dec(int n,int b)
{
    int p = 1;
    int sum = 0;
    while(n>0)
    {
        int rem = n%10;
        n = n/10;
        sum += rem*p;
        p = p*b;
    }
    return sum;
}

int any_to_any(int n, int b1, int b2)
{
    int d = Any_to_dec(n,b1);
    int f = decimal_to_any(d,b2);
    return f;
}


int main()
{
    int n,b1,b2;
    cin>>n>>b1>>b2;
    cout<<any_to_any(n,b1,b2);
    return 0;
}
