#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
bool power_of_two(int n)
{
    return (n!=0) && ((n&(n-1))==0);
    // only true if the number is not zero and has only one set bit
    // as powers of 2 has only ONE set bit
}
int main()
{
    int n;
    cin>>n;
    bool res = power_of_two(n);
    if(res==true)
        cout<<"YES"<<nline;
    else
        cout<<"NO"<<nline;
}
