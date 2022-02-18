#include<iostream>
#include<vector>
#include "b_search.h"
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
ll int inf_search(vi& v,ll int ele)
{
    int i=1;
    if(v.at(0)==ele) return 0; //to handle when index is 0 , as any multiple of 0 is zero
    while(v.at(i)<ele)
    {
        i*=2;
    }
    return b_search_iterative(v,ele,(i/2)+1,i-1); 
}
int main()
{
    vi v{1,10,15,20,40,80,90,100,120,500,600,800};
    ll int ele;
    cin>>ele;
    ll int res = inf_search(v,ele);
    cout<<"Element found at index :"<<res<<nline;
}