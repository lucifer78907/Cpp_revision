#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
#define vii vector<vector<int>> 
using namespace std;
int main()
{
    vii v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    for(int row=0;row<v.size();row++)
    {
        if(row%2==0)
        {
            for(int ele=0;ele<v[row].size();ele++)
            {
                cout<<v.at(row).at(ele)<<" ";
            }
            cout<<nline;
        }
        else
        {
            for(int ele=v[row].size()-1;ele>=0;ele--)
            {
                cout<<v.at(row).at(ele)<<" ";
            }
            cout<<nline;
        }
    }
}