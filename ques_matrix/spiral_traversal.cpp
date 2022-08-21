#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
#define vii vector<vector<int>> 
using namespace std;
void print_spiral(const vii &v)
{
    int top=0,left=0,right=v.at(0).size()-1,bottom=v.size()-1;
    while(top<=bottom and left<=right)
    {
        // print top row
        for(int i=left;i<=right;i++)
            cout<<v.at(top).at(i)<<" ";
        top++;
        // print right col
        for(int i=top;i<=bottom;i++)
            cout<<v.at(i).at(right)<<" ";
        right--;
        // print bottom row , check if there is only single row
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
                cout<<v.at(bottom).at(i)<<" ";
            bottom--;
        }
        // print left col , check if there was only one col
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
                cout<<v.at(i).at(left)<<" ";
            left++;
        }
    }
    cout<<nline;
}
int main()
{

    vii v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    print_spiral(v);
}