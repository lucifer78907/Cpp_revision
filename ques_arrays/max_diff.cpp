#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
using namespace std;
int max_diff(vector<int> v)
{
    int res = v.at(1)-v.at(0);
    int min_val = v.at(0);
    for(int j=1;j<v.size();j++)
    {
        res = max(res,v.at(j)-min_val);
        min_val = min(min_val,v.at(j));
    }
    return res;
}
int main()
{
    vector<int> v{2,3,10,6,4,8,1};
    int res = max_diff(v);
    cout<<"The max diff of the two ele in vector is: "<<res<<nline;
}