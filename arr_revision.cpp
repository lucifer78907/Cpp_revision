#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
int main()
{
    int size =100;
    int arr[size];
    // int size = v.size();
    for(int i=0;i<size;i++)
        cin>>arr[i];
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<nline;
}