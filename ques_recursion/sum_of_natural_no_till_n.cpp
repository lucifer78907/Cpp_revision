#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
ll int sum_natural_num(ll int n)
{
    if(n==0)
        return 0;
    else
        return n+sum_natural_num(n-1);
}
int main()
{
    ll int n;
    cin>>n;
    cout<<"The sum till "<<n<<" is "<<sum_natural_num(n)<<nline;
}
