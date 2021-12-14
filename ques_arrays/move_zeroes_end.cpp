#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
void move_zeros(vector<int> &v)
{
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v.at(i)!=0)
        {
            swap(v.at(i),v.at(count));
            count++;
        }
    }
}
int main()
{
    vector<int> v{1,2,0,0,3,4,0};
    cout<<"After moving zeros the array is :"<<nline;
    move_zeros(v);
    for(int x:v)
    {
        cout<<x<<" ";
    }
}