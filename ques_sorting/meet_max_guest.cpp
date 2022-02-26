#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int max_guests(vi& arr,vi& dep)
{
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=1,curr=1,res=1; //one guest has arrived , so curr_num =1 and max(res)=1
    int j=0; //for dep
    while(i<arr.size() and j<arr.size())
    {
        if(arr.at(i)<=dep.at(j))
        {
            curr++;//one more guest
            i++; 
        }
        else{
            curr--; //one left
            j++;
        }
        res = max(curr,res);
    }
    return res;
}
int main()
{
    vi arr{800,700,600,500};
    vi dep{840,820,830,530};
    cout<<"Max guests that can be met :"<<max_guests(arr,dep)<<nline;
}
