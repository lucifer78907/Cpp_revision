#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
void binary_equivalent(ll int n)
{
    if(n==0)
        return;
    binary_equivalent(n/2);
    cout<<n%2;
}
int main()
{
    ll int n;
    cin>>n;
    binary_equivalent(n);
    cout<<nline;
}