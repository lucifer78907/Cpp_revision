#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
ll int max_sum_k_ele(vector<int>& v,ll int k)
{
    ll int curr_sum=0;
    for(int i=0;i<k;i++)
        curr_sum+=v.at(i); //precomputing the sum of first k ele or first window
    ll int max_sum=curr_sum;

    for(int i=k;i<v.size();i++)
    {
        curr_sum+=(v.at(i)-v.at(i-k)); //made a new window sum
        max_sum = max(curr_sum,max_sum); //if graeter then prev window sum then update max
    }
    return max_sum;
}
int main()
{
    vector<int> v{1,8,30,-5,20,7};
    ll int k=3;
    ll int max_sum = max_sum_k_ele(v,k);
    cout<<"The max sum of k cons ele is :"<<max_sum<<nline;
}
