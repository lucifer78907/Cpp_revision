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
    vi v2{20,10,40,10,40,50};
    unordered_set<int> s(v1.begin(),v1.end());
    for(int &ele:v2)
    {
        s.insert(ele);
    }
    cout<<"No of union ele are "<<s.size()<<nline;
}
