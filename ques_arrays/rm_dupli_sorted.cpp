#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
int rm_duplicates(vector<int> &v)
{
    int arr_size =1;
    for(int i=1;i<v.size();i++)
    {
        if(v.at(i)!=v.at(arr_size-1))
        {
            v.at(arr_size) = v.at(i);
            arr_size++;
        }
    }
    return arr_size;
}
int main()
{
    vector<int> v{10,20,20,20,30,30,40,40,50};
    int arr_size = rm_duplicates(v);
    v.resize(arr_size);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;
}
