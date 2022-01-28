#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
void sieve(ll int n)
{
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i)
                isPrime[j]=false; 
        }
    }
    cout<<nline;
}
int main()
{
    ll int a;
    cin>>a;
    sieve(a);
}