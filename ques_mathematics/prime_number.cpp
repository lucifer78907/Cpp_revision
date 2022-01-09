#include<iostream>
#define nline "\n"
#define ll long long
using namespace std;
bool isPrime(int n)
{
    if(n<=1)return false;
    if(n==2 or n==3) return true;
    if(n%2==0 or n%3==0) return false;
    for(int i=5;i*i<=n;i=i+6)
        if(n%i==0 or n%(i+2)==0)
            return false;
    return true;
}
int main()
{
    ll int n;
    cin>>n;
    bool res = isPrime(n);
    if(res==true)
        cout<<"It is a prime number"<<nline;
    else
        cout<<"It is not a prime number"<<nline;
}