#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
ll int fibo_recursive(ll int n)
{
    if(n<=1)
        return n;
    else
        return fibo_recursive(n-1)+fibo_recursive(n-2);
}
ll int fibo_iterative(ll int n)
{
    ll int a=0,b=1;
    ll int c=0;
    if(n==a or n==b)
        return n;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    ll int n;
    cin>>n;
    cout<<"The nth fibo number using recursion is :"<<fibo_recursive(n)<<nline;
    cout<<"The nth fibo number using iteration is :"<<fibo_iterative(n)<<nline;
}