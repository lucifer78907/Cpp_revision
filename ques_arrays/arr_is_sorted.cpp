#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
bool is_sorted(vector<int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        if(v.at(i-1)>v.at(i))
            return false;
    }
    return true;
}
int main()
{
    vector<int> v{2,3,4,7,8};
    bool res = is_sorted(v);
    if(res==true)
        cout<<"It is Sorted"<<nline;
    else
        cout<<"It is not Sorted"<<nline;
}
