#include<iostream>
#include<vector>
#include<unordered_set>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
bool isSubarr0(vi &v)
{
    // prefix_sum + hashing is used (if two prefix sum are same then there must exist a 0 sum subarr)
    unordered_set<int> s;
    int prefix_sum = 0;
    for(int &ele:v)
    {
        prefix_sum += ele;
        if(s.find(prefix_sum)!=s.end())
            return true;
        if(prefix_sum ==0)
            return true;
        s.insert(prefix_sum);
    }
    return false;
}
int main()
{
    vi v{1,4,13,-3,-10,5};
    bool res = isSubarr0(v);
    if(res==true) cout<<"There exists a Subarr "<<nline;
    else cout<<"There doesn't exists a Subarr "<<nline;
}