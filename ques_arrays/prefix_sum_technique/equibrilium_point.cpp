#include<iostream>
#include<vector>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
bool equilbrilium_point(vi& v)
{
    // calculate the total sum of vector
    int sum=0;
    for(int &x:v)
        sum+=x;
    int l_sum = 0;
    for(int i=0;i<v.size();i++)
    {
        if(l_sum==sum-v.at(i)) //check for l_sum ans r_sum at every ele
            return true; //if equal then eqil point found
        l_sum+=v.at(i); //update l_sum , increase it
        sum-=v.at(i);  // update r_sum , total sum ,decrease it
    }
    return false; //no point found
}
int main()
{
    vi v{4,2,2};
    bool res = equilbrilium_point(v);
    if(res==true)
        cout<<"Point found"<<nline;
    else
        cout<<"Point not found"<<nline;
}