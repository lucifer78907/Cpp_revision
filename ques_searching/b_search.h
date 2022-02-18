#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
int b_search_iterative(vector<int> &v,int ele,int low,int high)
{ 
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v.at(mid)==ele)
            return mid;
        else if(v.at(mid)<ele)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}