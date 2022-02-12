#include<iostream>
#include<vector>
#define ll long long
#define nline "\n"
using namespace std;
int count_subsets(vector<int>& v,int size,ll int sum)
{
    if(size==0)
        return (sum==0)?1:0; //check if the sum is 0 when it reaches base level
    else
        return count_subsets(v,size-1,sum)
        +count_subsets(v,size-1,sum-v.at(size-1));
}
int main()
{  
    vector<int> v{10,5,2,3,6};
    ll int sum =8;
    int size = v.size();
    int res = count_subsets(v,size,sum);
    cout<<"The number of subsets that count to sum :"<<sum<<" are "<<res<<nline;
}
