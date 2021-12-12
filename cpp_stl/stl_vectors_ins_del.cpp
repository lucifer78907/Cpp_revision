#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
int main()
{
    vector<int> v;
    int temp;
    while((cin>>temp) and temp!=0)
    {
        v.push_back(temp);
    }
    for(auto x:v)
    {
        cout<<x<<" "<<nline;
    }
    vector<int> r;
    r.insert(r.begin(),v.begin(),v.end());
    cout<<"the new vector r is: ";
    for(auto x:r)
    {
        cout<<x<<" ";
    }
    // r.erase(r.begin());
    // cout<<"the new vector r is: ";
    // for(auto x:r)
    // {
    //     cout<<x<<" ";
    // }
    r.erase(r.begin(),r.end()-1);
    cout<<"the new vector r is: ";
    for(auto x:r)
    {
        cout<<x<<" ";
    }
    r.clear();
    if(r.empty()==true)
    {
        cout<<"empty vector";
    }

}