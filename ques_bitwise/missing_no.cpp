#include<iostream>
#include<vector>
#define ll long long
#define nline "\n"
using namespace std;
int missing_no(vector<int>&v)
{
    int res =0;
    for(int i=1;i<=v.size()+1;i++)
        res = res^i;
    for(int &x:v)
        res = res^x;
    return res;
}
int main()
{
    vector<int> v{1,4,2,5,7,3};
    cout<<"The missing number is:"<<missing_no(v)<<nline;
}
