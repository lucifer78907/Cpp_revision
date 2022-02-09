#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
int rope_cutting(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1; //for leaves that become negative (non-valid sol)
    int res = max(
        rope_cutting(n-a,a,b,c),
        max(rope_cutting(n-b,a,b,c),
        rope_cutting(n-c,a,b,c))
    );
    // max can only compare b/w two thats why we use 2 max
    if(res==-1)
        return -1;
    return res+1;
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<"The max number of cuts that can be made are :"
    <<rope_cutting(n,a,b,c)<<nline;
}
