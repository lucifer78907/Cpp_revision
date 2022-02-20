#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int repeating_ele(vi& v)
{
    int slow = v.at(0)+1,fast=v.at(0)+1; 
    //added 1 to avoid self loops in case where v contains 0
    do{
        slow = v.at(slow)+1; //move slow 1 link at a time
        fast = v.at(v.at(fast)+1)+1; // move fast 2 link at a time
    }while(slow!=fast);
    // PHASE 2
    slow = v.at(0)+1;
    // move slow to beg
    while(slow!=fast)
    {
        slow = v.at(slow)+1;
        fast = v.at(fast)+1; //move both at same speed
    }
    return slow-1;
}
int main()
{
    vi v{2,1,3,2,2};
    cout<<"Repeating ele is :"<<repeating_ele(v)<<nline;
}
