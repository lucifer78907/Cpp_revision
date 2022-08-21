#include<iostream>
#include<vector>
#include<unordered_set>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
int main()
{
    vi v{10,20,30,30,30,30,4,10,20,10};
    unordered_set<int> s(v.begin(),v.end());
    cout<<"No of distinct elements are :"<<s.size()<<nline;
}
