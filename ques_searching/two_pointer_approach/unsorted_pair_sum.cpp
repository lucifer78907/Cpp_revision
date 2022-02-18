//given unsorted array find if a pair equals to the sum
#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
bool find_pair_sum(vi& v,int sum)
{
    int left_pt=0,right_pt=v.size()-1;
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
int main()
{
    vi v{3,5,9,2,8,10,11};
    sort(v.begin(),v.end());
    int sum;
    cin>>sum;
    bool res = find_pair_sum(v,sum);
    if(res==true)
        cout<<"Pair found "<<nline;
    else
        cout<<"Pair not found "<<nline;
}
