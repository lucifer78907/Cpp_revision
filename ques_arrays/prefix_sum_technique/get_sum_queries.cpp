#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int get_sum(vi& prefix_sum,int l,int r)
{
    if(l==0)
        return prefix_sum.at(r);
    else
        return prefix_sum.at(r)-prefix_sum.at(l-1);
}
int main()
{
    vi v{2,8,3,9,6,5,4};
    vi prefix_sum(v.size());
    prefix_sum.at(0) = v.at(0);
    for(int i=1;i<v.size();i++)
        prefix_sum.at(i) = prefix_sum.at(i-1)+v.at(i);
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<get_sum(prefix_sum,l,r)<<" ";
    }
    cout<<nline;
}
