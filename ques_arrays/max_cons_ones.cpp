#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
using namespace std;
int max_cons_ones(vector<int> &v)
{
    int res =0,curr=0;
    for(int i=0;i<v.size();i++)
    {
        if(v.at(i)==0)
            curr =0;
        else
        {
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}
int main()
{
    vector<int> v{1,0,1,1,1,1,0,1,1};
    int max = max_cons_ones(v);
    cout<<"The result is :"<<max;
}
