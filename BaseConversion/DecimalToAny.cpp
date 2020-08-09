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

int main()
{
    int n,b;
    cin>>n>>b;

    cout<<decimal_to_any(n,b);

    return 0;
}
