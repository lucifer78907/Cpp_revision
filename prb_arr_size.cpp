#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
void display_arr(int arr[])
{
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
      display_arr(arr); 
}