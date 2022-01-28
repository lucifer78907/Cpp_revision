#include<iostream>
#define nline "\n"
#define ll long long
using namespace std;
void all_divisors(ll int n)
{
    int i=1;
    for(;i*i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
            cout<<(n/i)<<" ";
    }
    cout<<nline;
}
int main()
{
    ll int n;
    cin>>n;
    all_divisors(n);
}