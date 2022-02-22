#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// STABLE but INEFFICIENT PARTITIONING ALGO THEN Lomuto and Hoare
int naive_partition(vi& v,int l,int h,int p)
{
    // create temp array
    vi temp(h-l+1);
    int index=0; 
    // copy all the smaller ele
    for(int i=l;i<=h;i++)
    {
        if(v.at(i)<v.at(p))
        {
            temp.at(index)=v.at(i);
            index++;
        }
    }
    // copy the equal ele
    for(int i=l;i<=h;i++)
    {
        if(v.at(i)==v.at(p))
        {
            temp.at(index)=v.at(i);
            index++;
        }
    }
    // get the last occurrence
    int res = index+l-1;
    // copy the greater ele
    for(int i=l;i<=h;i++)
    {
        if(v.at(i)>v.at(p))
        {
            temp.at(index)=v.at(i);
            index++;
        }
    }
    // change the orginal vector
    for(int i=l;i<=h;i++)
        v.at(i) = temp.at(i-l);
    // return the res
    return res;
}
int main()
{
    vi v{5,3,12,8,5};
    int p=0;
    int res = naive_partition(v,0,v.size()-1,p);
    cout<<"The last occurrence of pivot is "<<res<<nline;
    cout<<"After partition :"<<nline;
    for(int &x:v)
        cout<<x<<" ";
    cout<<nline;
}