#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(auto x:arr)
    {
        cout<<x<<" ";
    }

}