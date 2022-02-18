#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int peak_element(vi& v)
{
    int low=0,high=v.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        // now either of the 3 cases can happens
        // 1) first ele is the peak
        // 2) last ele is the peak
        // 3) or mid ele found is the peak
        if((mid==0 or v.at(mid-1)<=v.at(mid)) and (mid==v.size()-1 or v.at(mid)>=v.at(mid+1)))
            return mid;
        else if(mid>0 and v.at(mid)<=v.at(mid-1))
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main()
{
    vi v{10,20,15,5,23,90,67};
    int res = peak_element(v);
    cout<<"Peak element found : "<<v.at(res)<<nline;
}