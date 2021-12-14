#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
void left_rotate_by_one(vector<int> &v)
{
    int temp = v.at(0);
    for(int i=1;i<v.size();i++)
    {
        v.at(i-1) = v.at(i);
    }
    v.at(v.size()-1)=temp;
}
int main()
{
    vector<int> v{1,2,3,4,5};
    left_rotate_by_one(v);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}