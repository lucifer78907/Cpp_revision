#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
void print_groups(vector<bool> v)
{
    int first_ele = v.at(0);
    for(int i=1;i<v.size();i++)
    {
        if(v.at(i)!=v.at(i-1))
        {
            if(v.at(i)!=first_ele)
            {
                cout<<"From "<<i<<" to ";
            }
            else
                cout<<i-1<<nline;
        }
    }
    if(v.at(v.size()-1)!=first_ele)
    {
        cout<<v.size()-1<<nline;
    }
}
int main()
{
    vector<bool> v{0,0,1,1,0,0,1,1,0};
    print_groups(v);
}