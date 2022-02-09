#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
ll int sum_digits(ll int n)
{
    if(n==0)
        return 0;
    else
        return (n%10)+sum_digits(n/10);
}
int main()
{
    ll int n;
    cin>>n;
    cout<<"The sum of digits of number "<<n<<" is :"<<sum_digits(n)<<nline;
}
