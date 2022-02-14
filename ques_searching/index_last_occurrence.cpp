#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
int last_occurrence(vector<int> &v,int ele)
{
    int low=0,high=v.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v.at(mid)>ele)
            high = mid-1;
        else if(v.at(mid)<ele)
            low = mid+1;
        else
        {
            if(mid==v.size()-1 or v.at(mid+1)!=v.at(mid))
                return mid;
            else
                low = mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v{15,15,15};
    int ele;
    cin>>ele;
    cout<<"The last occurrence is found at index "<<last_occurrence(v,ele)<<nline;
}

