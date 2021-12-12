#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n";
using namespace std;
int main()
{
    vector<int> v{1,2,3,4};
    // for(int i=0;i<v.size();i++)
    //     cout<<v.at(i)<<" ";
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+size);
    // for(int x:a)
    // {
    //     cout<<x<<" ";
    // }
    // for(auto i=a.cbegin();i!=a.cend();i++)
    // {
    //     *i+=2;
    // }
    // for(auto x:a)
    // {
    //     cout<<x<<" ";
    // }
    a.insert(a.end()-1,2,6);
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    vector<int> f;
    f.insert(f.begin(),a.begin(),a.end()-2);
    for(auto y:f)
    {
        cout<<y<<" ";
    }        
}