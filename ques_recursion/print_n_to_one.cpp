#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
void n_to_one(ll int n)
{
    if(n==0)
        return;
    cout<<n<<nline;
    n_to_one(n-1);
}
int main()
{
    ll int n;
    cin>>n;
    n_to_one(n);
}
