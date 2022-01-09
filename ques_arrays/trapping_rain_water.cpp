#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
int trap_rainwater(vector<int> &v)
{
    int total_water =0;
    //precomputing lmax and rmax
    int size = v.size();
    vector<int> lmax(size,0),rmax(size,0);
    lmax.at(0)=v.at(0);
    for(int i=1;i<size;i++)
    {
        lmax.at(i) = max(v.at(i),lmax.at(i-1));
    }
    // for(int x:lmax)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<nline;
    rmax.at(size-1) = v.at(size-1);
    for(int i=size-2;i>=0;i--)
    {
        rmax.at(i) = max(v.at(i),rmax.at(i+1));
    }
    // for(int x:rmax)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<nline;
    for(int i=1;i<size-1;i++)
    {
        total_water += (min(lmax.at(i),rmax.at(i))-v.at(i));
    }
    return total_water;
}
int main()
{
    vector<int> v{5,0,6,2,3};
    int total_water = trap_rainwater(v);
    cout<<"The total water that can be stored is: "<<total_water<<nline;
}
