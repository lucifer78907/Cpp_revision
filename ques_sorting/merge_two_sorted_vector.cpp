#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
void merge_both(vi& v,vi& v2)
{
    int i=0,j=0;
    int n=v.size(),m=v2.size();
    while(i<n && j<m)
    {
        if(v.at(i)<=v2.at(j))
            cout<<v.at(i++)<<" ";
        else
            cout<<v2.at(j++)<<" ";
    }
    // loop to print the rem ele
    while(i<n)
        cout<<v.at(i++)<<" ";
    while(j<m)
        cout<<v2.at(j++)<<" ";
}
int main()
{
    vi v{10,15,20};
    vi v2{5,6,6,15};
    merge_both(v,v2);
}