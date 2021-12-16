#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
using namespace std;
int max_sum_subarr(vector<int> &v)
{
    int max_sum = v.at(0);
    int max_ending = v.at(0);
    for(int i=1;i<v.size();i++)
    {
        max_ending = max(v.at(i),max_ending+v.at(i));
        max_sum = max(max_sum,max_ending);
    }
    return max_sum;
}
int main()
{
    vector<int> v{-5,1,-2,3,-1,2,-2};
    int res = max_sum_subarr(v);
    cout<<"The Max sum of subarray is: "<<res<<nline;
}