#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// BUBBLE SORT
// IN PLACE - doesnt require extra space
// STABLE - ele occur in same order as original arr
void bubble_sort(vi& v)
{
    // in bubble sort the no of passes = no of ele -1
    int no_of_ele = v.size();
    for(int i=0;i<no_of_ele-1;i++)
    {
        bool swapped = false;
        // to check if it even swap in the inner loop
        // if it doesnt swap even once then vector is sorted
        for(int j=0;j<no_of_ele-1-i;j++)
        {
            // this loop is for number of swaps to be performed
            // no of swaps get less by 1 each iteration as 1 ele bubbles up
            if(v.at(j)>v.at(j+1))
            {
                swapped=true;
                swap(v.at(j),v.at(j+1));
            }
        }
        if(swapped==false)
            break;
            // as nothing got swapped means its sorted
    }
}
int main()
{
    vi v{1,19,2,5,7};
    bubble_sort(v);
    for(int& x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;
}