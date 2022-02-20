#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// MERGE SORT
// STABLE
// NOT IN PLACE
void merge(vi& v,int low,int mid,int high)
{
    // calculating the size of left and right array
    int n1 = mid-low+1;
    int n2 = high-mid;
    vi left(n1),right(n2);
    // copying the ele
    for(int i=0;i<n1;i++)
        left.at(i) = v.at(low+i);
    for(int j=0;j<n2;j++)
        right.at(j) = v.at(mid+1+j);
    // merge left and right half and place in the original array
    int i=0,j=0,k=low;
    // i for left j for right k for original vector
    while(i<n1 && j<n2)
    {
        if(left.at(i)<=right.at(j))
        {
            v.at(k)=left.at(i);
            k++;
            i++;
        }
        else
        {
            v.at(k) = right.at(j);
            k++;
            j++;
        }
    }
    // add the rem ele
    while(i<n1)
    {
        v.at(k)=left.at(i);
        k++;
        i++;
    }
    while(j<n2)
    {
        v.at(k)=right.at(j);
        k++;
        j++;
    }
}
void merge_sort(vi& v,int l,int r)
{
    if(r>l) //has atleast 2 ele
    {
        int m = l+(r-l)/2;
        merge_sort(v,l,m);
        merge_sort(v,m+1,r);
        merge(v,l,m,r);
    }
}
int main()
{
    vi v{10,5,30,15,7};
    merge_sort(v,0,4);
    for(int& x:v)
        cout<<x<<" ";
    cout<<nline;
}
