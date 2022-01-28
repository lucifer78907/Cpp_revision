#include<iostream>
#include<vector>
#define ll long long
#define nline "\n"
using namespace std;
int odd_occur(vector<int>& v)
{
    int res =0;
    for(int &x:v)
        res = res^x;
    return res;
}
int main()
{
    vector<int> v{1,1,2,3,2,4,4,4,4,5,5};
    cout<<"The only odd occuring ele in the vector is :"<<odd_occur(v)<<nline;
}
