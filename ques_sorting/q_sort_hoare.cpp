#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
#define ll long long
#define vi vector<int> 
using namespace std;
int hoare_partition(vi&v,int l,int h)
{
    // first ele is the pivot
    int pivot = v.at(l);
    int i=l-1,j=h+1; //maintains two pointer beyond the first ele and after the last ele
    while(true)
    {
        do{
            i++;
        }while(v.at(i)<pivot); //till pivot is bigger
        do{
            j--;
        }while(v.at(j)>pivot); //till pivot is smaller
        if(i>=j) return j; //when i crosses j
        swap(v.at(i),v.at(j));
    }
}
void q_sort_hoare(vi& v,int l,int h)
{
    if(l<h) //atleast has two ele or h crosses l
    {
        int p = hoare_partition(v,l,h); //got the partition
        // call recusively for both halves
        q_sort_hoare(v,l,p); // for all ele smaller than pivot INCLUDING PIVOT ,it is not fixed
        q_sort_hoare(v,p+1,h); // for all ele greater than pivot as first parition calls does that
    }
}
int main()
{
    vi v{8,4,7,9,3,10,5};
    q_sort_hoare(v,0,v.size()-1);
    cout<<"After sorting the vector :"<<nline;
    for(int &x:v)
        cout<<x<<" ";
    cout<<nline;
}