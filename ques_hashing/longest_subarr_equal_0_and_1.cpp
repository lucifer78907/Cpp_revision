#include<iostream>
#include<vector>
#include<unordered_map>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
int maxSubarr(vi &v,int sum)
{
    unordered_map<int,int> m; //maps prefix_sum with index
    int pre_sum = 0,res=0;
    for(int i=0;i<v.size();i++)
    {
        pre_sum += v.at(i);
        if(pre_sum == sum) //if subArr starts from 0th index
            res = i+1;
        if(m.find(pre_sum) == m.end()) //insert pre_sum if it doesn't exist
            m.insert({pre_sum,i});
        if(m.find(pre_sum-sum) !=m.end()) //if subArr with given sum exists
            res = max(res,i-m[pre_sum-sum]);
    }
    return res;
}
int main()
{
    vi v{1,0,1,1,1,0,0};
    int sum =0;
    // just replace 0 with -1's and call for longest subarr with sum =0
    for(int &ele:v)
    {
        if(ele == 0)
            ele = -1;
    }
    int res = maxSubarr(v,sum);
    cout<<"The longest Subarr with given sum is :"<<res<<nline;
}