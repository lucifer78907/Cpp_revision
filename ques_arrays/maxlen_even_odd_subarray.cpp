#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
using namespace std;
int max_even_odd_subarr(vector<int> v)
{
    int max_len =1;
    int curr_len = 1;
    for(int i=1;i<v.size();i++)
    {
        if((v.at(i)%2==0 and v.at(i-1)&1) or (v.at(i)%2!=0 and v.at(i-1)%2==0))
        {
            curr_len++;
            max_len = max(max_len,curr_len);
        }
        else
            curr_len = 1;
    }
    return max_len;
}
int main()
{
    vector<int> v{10,12,14,7,8,12,14,7,8,5};
    int max_len = max_even_odd_subarr(v);
    cout<<"The Max length subarray found :"<<max_len<<nline;
}