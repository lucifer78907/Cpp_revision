#include<iostream>
#include<vector>
#include<unordered_set>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
int longest_cons_sub(vi & v)
{
    unordered_set<int> s(v.begin(),v.end()); //make a hash table 
    int res = 1;
    for(const int &ele:s)
    {
        // if ele-1 exist then ignore it
        // if ele-1 does not exist then its the beg of new subsequence
        if(s.find(ele-1) == s.end()) //if ele-1 is not found
        {
            int curr=1;
            while(s.find(ele+curr) != s.end()) // ele+1 is there
                curr++;
            res = max(res,curr);
        }
    }
    return res;
}
int main()
{
    vi v{1,9,3,2,4,8};
    int res = longest_cons_sub(v);
    cout<<"Longest Consecutive Subsequence is :"<<res<<nline;
}
