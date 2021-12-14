#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
void reverse_arr(vector<int> &v)
{
    int low=0,high=v.size()-1;
    while(low<high)
    {
        // int temp = v.at(low);
        // v.at(low) = v.at(high);
        // v.at(high) = temp;
        swap(v.at(low),v.at(high));
        low++;
        high--;
    }
}
int main()
{
    vector<int> v{1,2,3,4,5};
    cout<<"The Original Array is :"<<nline;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;
    reverse_arr(v);
    cout<<"The Modified Array is :"<<nline;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;
}
