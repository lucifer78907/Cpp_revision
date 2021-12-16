#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
using namespace std;
void print_frq(vector<int> &v)
{
    int i=1,freq=1;
    int n = v.size();
    while(i<n)
    {
        while(i<n && v.at(i)==v.at(i-1))
        {
            freq++;
            i++;
        }
        cout<<v.at(i-1)<<" "<<freq<<nline;
        freq=1;
        i++;
    }
    if(n==1 || v.at(n-1) != v.at(n-2))
        cout<<v.at(n-1)<<" "<<1<<nline;
}
int main()
{
    vector<int> v{10,10,10,25,30,30,40};
    print_frq(v);
}