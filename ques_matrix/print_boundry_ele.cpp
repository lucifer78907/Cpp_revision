#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
#define vii vector<vector<int>> 
using namespace std;
int main()
{
    vii v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int r = 4;
    int c = 4;

    if(r==1)
    {
        for(int i=0;i<v[0].size();i++)
        {
            cout<<v.at(0).at(i)<<" ";
        }
    }
    else if(c==1)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v.at(i).at(0)<<" ";
        }
    }
    else
    {
        // first row
        for(int i=0;i<v[0].size();i++)
        {
            cout<<v.at(0).at(i)<<" ";
        }
        // last col
        for(int i=1;i<r;i++)
        {
            cout<<v.at(i).at(c-1)<<" ";
        }
        // last row
        for(int i=c-2;i>=0;i--)
        {
            cout<<v.at(r-1).at(i)<<" ";
        }
        // first col
        for(int i=r-2;i>=1;i--)
        {
            cout<<v.at(i).at(0)<<" ";
        }
        cout<<nline;
    }
}
