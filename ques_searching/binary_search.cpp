#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
int b_search_iterative(vector<int> &v,int ele)
{ 
    int low=0,high=v.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v.at(mid)==ele)
            return mid;
        else if(v.at(mid)<ele)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}
int b_search_recursive(vector<int> &v,int low,int high,int ele)
{
    if(low>high)
        return -1;
    int mid = (low+high)/2;
    if(v.at(mid)==ele)
        return mid;
    else if(v.at(mid)>ele)
        return b_search_recursive(v,low,mid-1,ele);
    else
        return b_search_recursive(v,mid+1,high,ele);
}
int main()
{
    vector<int> v{10,20,30,40,50};
    int ele;
    cin>>ele;
    int res = b_search_iterative(v,ele);
    if(res==-1)
        cout<<"Element not found"<<nline;
    else
        cout<<"Element found at index "<<res<<nline;
    int res2 = b_search_recursive(v,0,v.size()-1,ele);
    if(res2==-1)
        cout<<"Element not found"<<nline;
    else
        cout<<"Element found at index "<<res2<<nline;
        
}
