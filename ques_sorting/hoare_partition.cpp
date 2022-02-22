#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
// ALWAYS THE FIRST ELE IS PIVOT
// DOESNT MAINTAIN POSITION OF PIVOT
int hoare_partition(vi& v,int l,int h)
{
    int p = v.at(l); //make first ele as pivot
    int i=l-1,j=h+1; 
    while(true)
    {
        do{
            i++;
        }while(v.at(i)<p); 
        //iterate till pivot is bigger 
        do{
            j--;
        }while(v.at(j)>p); //iterate till pivot is small
        if(i>=j) return j; //i and j have crossed so return j (index from which greater ele than pivot starts)
        swap(v.at(i),v.at(j));
    }
}
int main()
{
    vi v{5,3,8,4,2,7,1,10};
    int res = hoare_partition(v,0,v.size()-1);
    cout<<"The value of j is :"<<res<<nline;
    cout<<"After partition :"<<nline;
    for(int &x:v)
        cout<<x<<" ";
    cout<<nline;
}