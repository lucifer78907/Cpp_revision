#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
ll int josephus(ll int n,ll int k)
{
    if(n==1)
        return 0;
    else
        return (josephus(n-1,k)+k)%n;
        //adding k at every point as index is shifted by k 
        // and modulo n as to prevent overflow as k may go more then n;
}
int main()
{
    ll int n,k;
    cin>>n>>k;
    cout<<"The number of person survived :"<<josephus(n,k)<<nline;
}