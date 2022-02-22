#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// ALWAYS THE LAST ELE IS PIVOT
// MAINTAINS POS OF PIVOT
int lomuto_partition(vi& v,int l,int h,int pivot)
{
    // setting the last ele as pivot
    swap(v.at(pivot),v.at(h)); //to set last ele as pivot 
    int p = v.at(h);
    int i=l-1; //setting the window of smaller ele (-1 as no smaller ele in start)

    // run a loop from first ele to second last ele
    for(int j=l;j<=h-1;j++)
    {
        if(v.at(j)<p)
        {
            i++; //increase window of smaller ele
            swap(v.at(i),v.at(j));
        }
    }
    swap(v.at(i+1),v.at(h)); //swapping the first greater ele with pivot to set it correct pos
    return (i+1);
}
int main()
{
    vi v{50,30,20,10,5,11};
    int p=2;
    int res = lomuto_partition(v,0,v.size()-1,p);
    cout<<"The last occurrence of pivot is "<<res<<nline;
    cout<<"After partition :"<<nline;
    for(int &x:v)
        cout<<x<<" ";
    cout<<nline;
}