#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
using namespace std;
int main()
{
    ll int n,m;
    cin>>n>>m;
    vector<int> v(n-1,0);
    v.push_back(1);
    // creating the N ele to calculate the series
    for(int x:v)
        cout<<x<<" ";
    cout<<nline;
    ll int start = 0;
    for(int i=n;i<m;i++)
    {
        for(int j=start;j<start+n;j++)
        {
            ll int curr_sum=0;
            curr_sum+=v.at(j);
            cout<<curr_sum<<" ";
            if(j==(start+n-1))
                v.push_back(curr_sum);
            start++;
        }
    }
    cout<<nline;
}
