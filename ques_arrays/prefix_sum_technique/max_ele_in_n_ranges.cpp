#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int max_occur(vi& l,vi& r,int size)
{
    vi temp(1000,0);
    for(int i=0;i<size;i++)
    {
        temp.at(l.at(i))++; //mark all the start of ranges as 1
        temp.at(r.at(i)+1)--; //mark all the end of ranges as -1 (to nullify the prefix sum)
    }
    int max = temp.at(0);
    for(int i=1;i<1000;i++)
    {
        temp.at(i) = temp.at(i)+temp.at(i-1);
        if(temp.at(i)>max)
        {
            max = temp.at(i);
        }
    }
    return max;
}
int main()
{
    vi l{1,2,5,15};
    vi r{5,8,7,18};
    int size = l.size();
    cout<<"Max occurring ele in the ranges is :"<<max_occur(l,r,size)<<nline;
}