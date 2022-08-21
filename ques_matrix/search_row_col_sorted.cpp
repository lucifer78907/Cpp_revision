#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
#define vii vector<vector<int>> 
using namespace std;
void search(vii &v,int ele)
{
    int r=0,c=v.at(0).size()-1;
    while(r<v.size() and c>=0)
    {
        if(v.at(r).at(c)==ele)
        {
            cout<<"Found at "<<r<<","<<c<<nline;
            return;
        }
        else if(v.at(r).at(c)>ele)
            c--;
        else
            r++;
    }
    cout<<"Not Found"<<nline;
}
int main()
{
    vii v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    search(v,11);
}