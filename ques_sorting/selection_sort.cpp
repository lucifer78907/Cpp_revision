#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// SELECTION SORT
// IN-PLACE
// NOT STABLE
// LESS MEMORY WRITES
// BASIS OF HEAP SORT
void selection_sort(vi& v)
{
    // find min ele from the curr_ind+1 till end and if any ele
    // smaller is found then swap with curr_indx and ele
    for(int i=0;i<v.size();i++){
        int min_indx  = i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v.at(j)<v.at(min_indx))
                min_indx = j;
        }
        swap(v.at(min_indx),v.at(i));
    }

}
int main()
{
    vi v{1,19,2,5,7};
    selection_sort(v);
    for(int& x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;
}
