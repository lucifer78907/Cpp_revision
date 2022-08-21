#include<iostream>
#include<vector>
#include<unordered_map>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
void ele_window(vi &v,int window)
{
    unordered_map<int,int> m;
    // Make a freq map of first k ele
    for(int i=0;i<window;i++)
        m[v.at(i)]++;
    cout<<m.size()<<" ";
    // for(auto it=m.begin();it!=m.end();it++)
    //     cout<<it->first<<" "<<it->second;
}
int main()
{
    vi v{10,20,20,10,30,40,10};
    int window = 4;
    ele_window(v,window);
}