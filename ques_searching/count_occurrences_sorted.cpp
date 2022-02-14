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
            if(mid==0 or v.at(mid-1)!=v.at(mid))
                return mid;
            else
                high = mid-1;
        }
    }
    return -1;
}
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
int count_occurrence(vector<int> v,int ele)
{
    int f_occur = first_occurrence(v,ele);
    if(f_occur==-1)
        return 0;
    // as there were no occurrences found
    else
        return (last_occurrence(v,ele)-f_occur+1);

}
int main()
{
    vector<int> v{10,20,20,20,30,30};
    int ele;
    cin>>ele;
    cout<<"Total number of "<<ele<<" present in vector are "<<count_occurrence(v,ele)<<nline;
}
