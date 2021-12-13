#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
using namespace std;
bool my_fun(int x,int y)
{
    return abs(x)<abs(y);
}
int main()
{
    vector<int> v{-1,-9,2,3,14};
    // sort(v.begin(),v.end(),my_fun);
    int arr[] ={22,3,4,5,-2};
    sort(arr,arr+5); //by default in asc
    sort(v.begin(),v.end(),greater<int>()); //to sort in desc

    for(auto x:v)
    {
        cout<<x<<" ";
    }
}
