#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
#define vv vector<int> v
using namespace std;
ll int sq_root(ll int num)
{
    ll int low=1,high=num;
    ll int ans=0;
    while(low<=high)
    {
        ll int mid = (low+high)/2;
        ll int mid_sq =  mid*mid;
        if(mid_sq==num)
            return mid;
        else if(mid_sq>num)
            high = mid-1;
        else
        {
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    ll int number;
    cin>>number;
    cout<<"The square root of the number is :"<<sq_root(number)<<nline;
}
