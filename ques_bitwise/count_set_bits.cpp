#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
int count_set_bits(int n)
{
    int res=0;
    while(n>0)
    {
        n = n&(n-1);
        // brian algo this removes set bit from the right
        res++;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<"The number of set bits in the number are :"<<count_set_bits(n)<<nline;
}
