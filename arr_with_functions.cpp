#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
vector<int> display_arr(vector<int> r)
{
    for(int i=0;i<r.size();i++)
        r[i]=r[i]*2;
    return r;
}
void display_arr2(vector<int> &r)
{
    for(int i=0;i<r.size();i++)
        r[i]=r[i]*2;
}
int main()
{
    vector<int> v{1,2,3,4,5};
    vector<int> my_vect = display_arr(v);
        cout<<"Original Vector"<<nline;
        display_arr2(v);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
        cout<<"Vector Returned from the function"<<nline;
    for(auto x:my_vect)
    {
        cout<<x<<" ";
    }
}