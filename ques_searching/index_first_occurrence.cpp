#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
int first_occurrence(vector<int> &v,int ele)
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
            //check if either its the first ele or the prev ele
            // is not equal to it , then it is the first occurrence
            if(mid==0 or v.at(mid-1)!=v.at(mid))
                return mid;
            else
                high = mid-1;
            // we shift high as we know there are occurrence of same 
            //ele before the current mid
        }
    }
    return -1;
}
int main()
{
    vector<int> v{15,15,15};
    int ele;
    cin>>ele;
    cout<<"The first occurrence is found at index "<<first_occurrence(v,ele)<<nline;
}
