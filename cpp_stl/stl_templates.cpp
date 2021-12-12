#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
template <typename T,int limit>
T myMax(vector<T>& v)
{
    T res = limit;
    for(auto x:v)
    {
        if(x>res)
            res = x;
    }
    return res;
}
int main()
{
    vector<int> v{1,2,3,4,5,89};
    cout<<myMax<int,0>(v);
    vector<float> f{1.2f,3.2f,3.4f};
    cout<<nline;
    cout<<myMax<float,2>(f);
    vector<char> c{'a','b','c'};
    cout<<nline;
    cout<<myMax<char,3>(c);
}