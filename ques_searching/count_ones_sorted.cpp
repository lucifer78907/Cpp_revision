#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
int count_ones(vector<int> v)
{
    int low=0,high=v.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v.at(mid)==0)
            low = mid+1;
        else
        {
            if(mid==0 or v.at(mid-1)==0)
                return v.size()-mid;
            else
                high = mid-1;
        }
    }
    return 0;
}
int main()
{
    vector<int> v{0,0,0,1,1,1,1,1,1};
    int res = count_ones(v);
    cout<<"The number of ones in vector :"<<res<<nline;
}
