#include<iostream>
using namespace std;

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

int main()
{
    int n,b;
    cin>>n>>b;
    cout<<Any_to_dec(n,b);
    return 0;
}
