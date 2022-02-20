#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// INSERTION SORT
// STABLE
// IN PLACE
// USED IN INTROSORT(quick sort+ heap sort + insertion sort) AND TIMSORT
void insertion_sort(vi& v)
{
    // we maintain two halves in this sorted and unsorted
    // ele from unsorted half gets inserted at corr pos in sorted half
    for(int i=1;i<v.size();i++)
    {
        //unsorted half starts at 1
        int key = v.at(i);
        int j = i-1;
        while(j>=0 && v.at(j)>key)
        {
            v.at(j+1) = v.at(j);
            j--;
        }
        v.at(j+1) = key;
    }
}
int main()
{
    vi v{1,19,2,5,7};
    insertion_sort(v);
    for(int& x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;
}
