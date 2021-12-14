#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
void reverse(vector<int> &v,int low,int high)
{
    while(low<high)
    {
        swap(v.at(low),v.at(high));
        low++;
        high--;
    }
}
void left_rotate_by_d(vector<int> &v,int d)
{
    int n = v.size();
    reverse(v,0,d-1);
    reverse(v,d,n-1);
    reverse(v,0,n-1);
}
int main()
{
    vector<int> v{1,2,3,4,5,6,7};
    left_rotate_by_d(v,4);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<nline;    

}
