#include<iostream>
#include<vector>
#include<unordered_set>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
bool isPairSum(vi &v,int sum)
{
    unordered_set<int> s;
    for(int &ele:v)
    {
        // check if it already exists in the table
        if(s.find(sum-ele)!=s.end()) //if pair is found
            return true;
        else
            s.insert(ele);
    }
    return false;

}
int main()
{
    vi v{5,8,-3,6};
    int sum = 3;
    bool res = isPairSum(v,sum);
    if(res==true) cout<<"There exists a Pair "<<nline;
    else cout<<"There doesn't exists a Pair "<<nline;
}