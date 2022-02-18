#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
ll int search_rotated(vi& v,ll int ele)
{
    ll int low=0,high=v.size()-1;
    while(low<=high)
    {
        ll int mid = (low+high)/2;
        if(v.at(mid)==ele)
            return mid; //if ele found at mid
        // check which half is sorted
        if(v.at(mid)>v.at(low))
        {
        // now check whether it lies in range or not 
            if(ele>=v.at(low) and ele<v.at(mid))
                high = mid-1;
            else 
                low = mid+1; //means it is in the other half
        }
        else
        {
            if(ele>v.at(mid) and ele<=v.at(high))
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vi v{100,200,500,1000,2000,10,20};
    ll int ele;
    cin>>ele;
    ll int res = search_rotated(v,ele);
    if(res==-1)
        cout<<"Element not found"<<nline;
    else
        cout<<"Element found at index : "<<res<<nline;
    }
}