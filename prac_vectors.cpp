#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
vector<int> trun(vector<float> r)
{
    vector<int> i;
    for(float x:r)
    {
        int res=static_cast<int>(x);
        i.push_back(res);
    }
    return i;

}
int main()
{
    float temp;
    vector<float> v;
    while(cin>>temp)
    {
        v.push_back(temp);
    }
    vector<int> result = trun(v);
    for(int x:result)
    {
        cout<<x<<nline;
    }
}