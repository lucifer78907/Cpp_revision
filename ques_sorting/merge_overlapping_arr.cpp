#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
bool myCmp(pair<int,int> p1,pair<int,int> p2)
{
    return (p1.first<p2.first);
}
void merge_overlapping(vector<pair<int,int>>& v)
{
    sort(v.begin(),v.end(),myCmp);
    int res =0;
    for(int i=1;i<v.size();i++)
    {
        if(v.at(res).second>=v.at(i).first)
        {
            v.at(res).first = min(v.at(res).first,v.at(i).first);
            v.at(res).second = max(v.at(res).second,v.at(i).second);
        }
        else{
            res++;
            v.at(res)=v.at(i);
        }
    }
    for(int i=0;i<=res;i++)
        cout<<"{"<<v.at(i).first<<","<<v.at(i).second<<"}"<<" ";
}
int main()
{
    vector<pair<int,int>> v{{5,10},{3,15},{18,20},{2,7}};
    merge_overlapping(v);
    cout<<nline;
}
