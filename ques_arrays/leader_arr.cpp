#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
void leaders(vector<int>&v)
{
    int curr_leader = v.at(v.size()-1);
    cout<<curr_leader<<" ";
    for(int i=v.size()-2;i>=0;i--)
    {
        if(v.at(i)>curr_leader)
        {
            curr_leader = v.at(i);
            cout<<curr_leader<<" ";
        }
    }
    cout<<nline;
}
int main()
{
    vector<int> v{16,17,4,3,5,2};
    leaders(v);
}