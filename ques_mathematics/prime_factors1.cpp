#include<iostream>
using namespace std;
void print_primes(long long int a)
{
    if(a<=1)return;
    for(int i=2;i*i<=a;i++)
    {
        while(a%i==0)
        {
            cout<<i<<" ";
            a=a/i;
        }
    }
    if(a>1)
        cout<<a<<" ";
        // last prime factor bacha greater then 1
        cout<<"\n";
}
int main()
{
    long long int a;
    cin>>a;
    print_primes(a);
}