#include<iostream>
#include<vector>
#include<algorithm>
#include"partitons.h"
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int kth_smallest(vi& v,ll int k)
{
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int p = lomuto_partition(v,l,r); //returns a pivot
        if(p==k-1)
            return p;
        else if(p>k-1)
            r = p-1; //ele lies on left of pivot
        else
            l = p+1; //ele lies on right of pivot
    }
    return -1; //if nothing is found
}
int main()
{
    vi v{10,4,5,8,11,6,26};
    ll int k=5;
    cout<<"The kth smallest ele is :"<<v.at(kth_smallest(v,k))<<nline;
}