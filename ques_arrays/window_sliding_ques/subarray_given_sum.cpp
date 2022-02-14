#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
bool isSubSum(vector<int>&v,ll int sum,int start=0)
{
    ll int curr_sum=v.at(0);
    for(int end=1;end<v.size();end++)
    {
        // clearing the prev window in case curr_sum>sum
        while(curr_sum>sum && start<end-1)
        {
            curr_sum-=v.at(start);
            start++;
            //remove the start ele and inc start
        }
        // now either the sum is equal to curr_sum or less
        if(curr_sum==sum)
            return true;
        //if less then add the end ele and end will incre in loop
        if(end<v.size())
            curr_sum+=v.at(end);
    }
    return (curr_sum==sum); //as for last ele check coz for loop will end
}
int main()
{
    // vector<int> v{1,4,20,3,10,5};
    // ll int sum =33;
    vector<int> v{1,4,0,0,3,10,5};
    ll int sum =7;
    bool res = isSubSum(v,sum);
    if(res==true)
        cout<<"Yes"<<nline;
    else
        cout<<"No"<<nline;
}
