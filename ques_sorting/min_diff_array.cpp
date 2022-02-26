#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int min_diff(vi& v)
{
    int res = numeric_limits<int>::max();
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++) //sub from prev ele and store if min
        res = min(res,(v.at(i)-v.at(i-1)));
    return res;
}
int main()
{
    vi v{1,8,12,5,18};
    cout<<"Minimum diff in array is :"<<min_diff(v)<<nline;
}
