#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int count_and_merge(vi& v,int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    vi left(n1),right(n2);
    // copy the ele in left and right array
    for(int i=0;i<n1;i++){left.at(i) = v.at(l+i);}
    for(int i=0;i<n2;i++){right.at(i) = v.at(m+1+i);}
    int res=0,i=0,j=0,k=l;
    // count and merge 
    while(i<n1 and j<n2)
    {
        if(left.at(i)<=right.at(j))
        {
            v.at(k)=left.at(i);
            i++;
        }
        else
        {
            v.at(k)=right.at(j);
            res+=(n1-i); //this counts when x is in left half and y in right half
            j++;
        }
        k++;
    }
    // insert rem ele
    while(i<n1)
        v.at(k++)=left.at(i++);
    while(j<n2)
        v.at(k++)=right.at(j++);
    return res;
}
int count_inversion(vi& v,int l,int r)
{
    int res=0;
    if(r>l) //has atleast 2 ele
    {
        int m = l+(r-l)/2;
        res+=count_inversion(v,l,m); //counts inversion in left half
        res+=count_inversion(v,m+1,r); // counts in right half
        res+=count_and_merge(v,l,m,r); // counts when one ele is in left half and one in right half
    }
    return res;
}
int main()
{
    vi v{40,30,20,10};
    cout<<"Total Number of inversions are :"<<count_inversion(v,0,v.size()-1)<<nline;
}