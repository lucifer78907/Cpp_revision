#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
int main()
{
    vector<vector<int>> v{
        {1,2,3},
        {2},
        {2,3,4,5}
    };
    for(auto row:v)
    {
        for(auto data:row)
        {
            cout<<data<<" ";
        }
        cout<<nline;
    }
}