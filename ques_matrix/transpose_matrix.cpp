#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
#define vii vector<vector<int>> 
using namespace std;
void transpose(vii &v)
{
    for(int i=0;i<v.size();i++)
        for(int j=i+1;j<v.at(i).size();j++)
            swap(v.at(i).at(j),v.at(j).at(i));
}
int main()
{
    vii v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    transpose(v);
    for(vi &row:v)
    {
        for(int &ele:row)
            cout<<ele<<" ";
        cout<<nline;
    }
}
