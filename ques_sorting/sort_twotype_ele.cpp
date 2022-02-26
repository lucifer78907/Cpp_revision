#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
void sort_pos_neg(vi& v)
{
    // based on hoare partition
    // seperate the ele on basis of 0 here
    int i=-1,j=v.size();
    while(true)
    {
        do{
            i++;
        }while(v.at(i)<0); //break when found a positive ele
        do{
            j--;
        }while(v.at(j)>0); //break when found a neg ele on right side
        if(i>=j) 
            return;
        swap(v.at(i),v.at(j));
    }
}
int main()
{
    vi v{-2,-3,1,222,-1,3,-44,8};
    sort_pos_neg(v);
    for(int& x:v)
        cout<<x<<" ";
    cout<<nline;
}