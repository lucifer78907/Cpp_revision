#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n";
using namespace std;
int main()
{
    int a[]={3,1,2};
    string b[]={"G","E","K"};
    vector<pair<int,string>> p1;
    for(int i=0;i<3;i++)
    {
        p1.push_back({a[i],b[i]});
    }    
    for(auto x:p1)
    {
        cout<<x.first<<" "<<x.second<<nline;
    }
    sort(p1.begin(),p1.end());
    for(auto x:p1)
    {
        cout<<x.first<<" "<<x.second<<nline;
    }
}