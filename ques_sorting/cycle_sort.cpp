#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// CYCLE SORT
// LEAST MEMORY WRITES
// IN PLACE and NOT STABLE
void cycle_sort(vi& v)
{
    // iterate from ele 0 to n-2 (second last)
    // as if ele from 0 to n-2 are sorted then last ele is biggest ele or is sorted
    for(int cs=0;cs<v.size()-1;cs++)
    {
        int item = v.at(cs);
        int pos = cs;
        // STEP-1 fix the item at its corr position by counting ele < item from cs+1 to end
        for(int i=cs+1;i<v.size();i++)
        {
            if(v.at(i)<item)
                pos++;
        }
        // STEP-2 fix the ele at its corr position
        swap(item,v.at(pos));
        // STEP-3 now fix the ele in item that is lost in vector
        while(pos!=cs)
        {
            pos = cs;
            // find the pos where to fix the item
            for(int i=cs+1;i<v.size();i++)
            {
                if(v.at(i)<item)
                    pos++;
            }
            // STEP-4 fix the ele at corr pos
            swap(v.at(pos),item);
            // we run this loop until we find a ele that is repeated again
            // meaing no need to fix the ele in this cycle
        }
    }
}
int main()
{
    vi v{50,40,20,30,10};
    cycle_sort(v);
    for(int& x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;
}