#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int choclate_distribution(vi& v,int m)
{
    // have to distribute only 1 choclate to each child and there are m children so m packet(max)
    // can be distributed
    // sorting to get the min ele in front
    sort(v.begin(),v.end());
    int res = v.at(m-1)-v.at(0);
    for(int i=1;(i+m-1)<v.size();i++)
        res =  min(res,(v.at(i+m-1)-v.at(i)));
    return res;
}
int main()
{
    vi v{7,3,2,4,9,12,56};
    int m=3;
    cout<<"The min diff between the max no of choclate and min no of choclate is :"<<choclate_distribution(v,m)
    <<nline;
}
