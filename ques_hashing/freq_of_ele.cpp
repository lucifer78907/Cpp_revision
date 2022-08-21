#include<iostream>
#include<vector>
#include<unordered_map>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
int main()
{
    vi v{10,10,10,20,20,30,10,10,10,50,40};
    unordered_map<int,int> m;
    for(int &ele:v)
    {
        m[ele]++;
    }
    for(auto &e:m)
    {
        cout<<e.first<<" "<<e.second<<nline;
    }
}