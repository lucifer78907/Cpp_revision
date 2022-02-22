#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
void print_union(vi& v1,vi& v2)
{
    int i=0,j=0;
    int m=v1.size(),n=v2.size();
    while(i<m and j<n)
    {
        // handle duplicates
        if(i>0 and v1.at(i)==v1.at(i-1))
        {
            i++;
            continue;
        }
        if(j>0 and v2.at(j)==v2.at(j-1))
        {
            j++;
            continue;
        }
        if(v1.at(i)<v2.at(j))
            cout<<v1.at(i++)<<" ";
        else if(v1.at(i)>v2.at(j))
            cout<<v2.at(j++)<<" ";
        else
        {
            cout<<v1.at(i++)<<" ";
            j++;
        }
    }
    while(i<m)
    {
        if(i>0 and v1.at(i)!=v1.at(i-1)) //to handle duplicates
            cout<<v1.at(i++)<<" ";
    }
    while(j<n)
    {
        if(j>0 and v2.at(j)!=v2.at(j-1))
            cout<<v2.at(j++)<<" ";
    }
}
int main()
{
    vi v1{3,5,8};
    vi v2{2,8,9,10,15};
    print_union(v1,v2);
}