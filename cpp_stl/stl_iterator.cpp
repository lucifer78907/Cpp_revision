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
    // vector<int>::iterator i = v.begin();
    auto i = v.begin();
    auto e = v.end();
    cout<<*i<<nline; 
    e--;
    cout<<*e<<nline; 
    i=next(i);
    cout<<*i<<nline; 
    i=next(i,3);
    cout<<*i<<nline; 
    i=prev(i,3);
    cout<<*i<<nline; 
}