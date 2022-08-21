#include<iostream>
#include<vector>
#include<unordered_set>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
int main()
{
    vi v1{10,10,30,20};
    vi v2{20,10,40,10,40};
    unordered_set<int> s(v1.begin(),v1.end());
    ll int res=0;
    for(int &ele:v2)
    {
        if(s.find(ele)!=s.end()) //if ele is found in v1
        {
            res++;
            s.erase(ele);
        }
    }
    cout<<"Intersected ele's are "<<res<<nline;
}