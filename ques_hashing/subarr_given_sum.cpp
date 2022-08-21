#include<iostream>
#include<vector>
#include<unordered_set>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
bool isSum(vi &v,int sum)
{
    // there must be two pre_sum whose diff is the sum itself (thats the subarr)
    unordered_set<int> s;
    int pre_sum =0;
    for(int &ele:v)
    {
        pre_sum += ele;
        if(pre_sum == sum) return true; //if subArr starts from 0 index
        if(s.find(pre_sum-sum)!=s.end())
            return true;
        s.insert(pre_sum);
    }
    return false;
}
int main()
{
    vi v{5,8,6,13,3,-1};
    int sum =22;
    bool res = isSum(v,sum);
    if(res==true) cout<<"There exists a Subarr "<<nline;
    else cout<<"There doesn't exists a Subarr "<<nline;
}