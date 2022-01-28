#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
void kth_set_bit_left(int n, int k)
{
    // left shifting (1) with k-1 position and using bitwise and to check if
    // its set or not
    if(((1<<(k-1))&n)!=0)
        cout<<"YES"<<nline;
    else
        cout<<"NO"<<nline;
}
void kth_set_bit_right(int n,int k)
{
    // right shifting the number set bit to the end by doing k-1 shift
    if(((n>>(k-1))&1)==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int n,k;
    cin>>n>>k;
    kth_set_bit_left(n,k);
    kth_set_bit_right(n,k);
}