#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
int get_second_largest(vector<int>&v)
{
    int scd_largest=-1,largest=0;
    for(int i=1;i<v.size();i++)
    {
        if(v.at(i)>v.at(largest))
        {
            scd_largest = largest;
            largest = i;
        }
        else if(v.at(i)<v.at(largest))
        {
            if(scd_largest==-1 or v.at(i)>v.at(scd_largest))
                scd_largest = i;
        }
    }
    return scd_largest;
}
int main()
{
    vector<int> v{1,2,3,4,5,6};
    int res = get_second_largest(v);
    cout<<"The second largest element :"<<v.at(res)<<nline;
}
