#include<iostream>
#include<vector>
#include<algorithm>
#define vi vector<int> 
using namespace std;
int lomuto_partition(vi& v,int l,int h)
{
    // last ele is the pivot
    int pivot = v.at(h);
    int i=l-1; //as there are no smaller ele till now
    for(int j=l;j<=h-1;j++) //run loop from start to second last ele
    {
        if(v.at(j)<pivot) //we swap only those which are lesser than pivot
        {
            i++; //increase the window size
            swap(v.at(i),v.at(j));
        }
    }
    // need to place the pivot at the correct postion
    // upto i there are smaller ele than pivot and from i+1 greater than it , we place it at i+1 , the first greater ele
    swap(v.at(i+1),v.at(h));
    return (i+1); //index of pivot
}
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