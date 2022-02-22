#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int lomuto_partition(vi& v,int l,int h)
{
    // last ele is the pivot
    int pivot = v.at(h);
    int i=l-1; //as there are no smaller ele till now
    for(int j=l;j<=h-1;j++) //run loop from start to second last ele
    {
        if(v.at(j)<pivot) //we swap only those which are lesser than pivot
        {
            i++; //increase the window size
            swap(v.at(i),v.at(j));
        }
    }
    // need to place the pivot at the correct postion
    // upto i there are smaller ele than pivot and from i+1 greater than it , we place it at i+1 , the first greater ele
    swap(v.at(i+1),v.at(h));
    return (i+1); //index of pivot
}
void q_sort_lomuto(vi& v,int l,int h)
{
    if(l<h) //atleast has two ele or h crosses l
    {
        int p = lomuto_partition(v,l,h); //got the partition
        // call recusively for both halves
        q_sort_lomuto(v,l,p-1); // for all ele smaller than pivot
        q_sort_lomuto(v,p+1,h); // for all ele greater than pivot as first parition calls does that
    }
}
int main()
{
    vi v{8,4,7,9,3,10,5};
    q_sort_lomuto(v,0,v.size()-1);
    cout<<"After sorting the vector :"<<nline;
    for(int &x:v)
        cout<<x<<" ";
    cout<<nline;
}