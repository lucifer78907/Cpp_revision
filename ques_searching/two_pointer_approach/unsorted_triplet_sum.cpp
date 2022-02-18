#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
bool isPair(vi& v,int low,int high,int sum)
{
    int left_pt=low,right_pt=high;
    while(left_pt<right_pt)
    {
        int curr_sum = v.at(left_pt)+v.at(right_pt);
        if(curr_sum==sum)
            return true;
        else if(curr_sum>sum)
            right_pt--;
        else
            left_pt++;
    }
    return false; //in case so pair is found
}
bool find_tripet_sum(vi& v,int sum)
{
    for(int i=0;i<v.size();i++)
    {
        if(isPair(v,i+1,v.size()-1,sum-v.at(i)))
            return true;
    }
    return false;
}
int main()
{
    vi v{2,3,8,4,20,9,40};
    sort(v.begin(),v.end());
    int sum;
    cin>>sum;
    bool res = find_tripet_sum(v,sum);
    if(res==true)
        cout<<"Triplet found "<<nline;
    else
        cout<<"Triplet not found "<<nline;
}
