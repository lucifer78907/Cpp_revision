#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
void sort_three_ele(vi& v)
{
    // uses dutch flag algo (variation of hoare partition)
    // divides the array in three halves of 0s,1s and 2s
    int low=0,mid=0,high=v.size()-1;
    // from 0 to low-1 are 0s , low to mid-1 are 1s rest are 2s
    while(mid<=high)
    {
        if(v.at(mid)==0)
        {
            swap(v.at(low),v.at(mid)); //to ensure it goes to right place
            low++; //incr the 0s window
            mid++; // as all 0 lies in low-1
        }
        else if(v.at(mid)==1)
            mid++; //increase 1s window
        else
        {
            swap(v.at(mid),v.at(high)); //to ensure 2s goes to right place
            high--; //increase 2s window
        }
    }
}
int main()
{
    vi v{1,0,2,2,0,1,2};
    sort_three_ele(v);
    for(int& x:v)
        cout<<x<<" ";
    cout<<nline;
}
