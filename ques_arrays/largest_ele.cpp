#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
int getLargest(vector<int> &v)
{
    int max = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v.at(i)>v.at(max))
            max = i;
    }
    return max;
}
int main()
{
    vector<int> v{1,2,3,4,5};
    int res = getLargest(v);
    cout<<"The largest ele is :"<<v.at(res)<<nline;
}