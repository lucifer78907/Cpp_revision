#include<iostream>
#include<vector>
#include<stack>
#define nline "\n";
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    stack<int> s;
    // for(int x:v)
    v.push_back(10);
    // {
    //     cout<<x;
    // }
    vector<int> f;
    cout<<v.capacity();
}