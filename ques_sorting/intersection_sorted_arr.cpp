#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
void print_intersection(vi& v1,vi& v2)
{
    int i=0,j=0;
    int m=v1.size(),n=v2.size();
    while(i<m && j<n)
    {
        // check for duplicate ele
        if(i>0 && v1.at(i)==v1.at(i-1))
        {
            i++;
            continue;
        }
        // if value at i is less increment i
        if(v1.at(i)<v2.at(j))
            i++;
        // if value at j is less increment j
        else if(v1.at(i)>v2.at(j))
            j++;
        // if equal print the ele and inc both i and j
        else
        {
            cout<<v1.at(i)<<" ";
            i++;
            j++;
        }
    }
    cout<<nline;
}
int main()
{
    vi v1{2,20,20,20,30};
    vi v2{2,20,30,40,50};
    print_intersection(v1,v2);
}
