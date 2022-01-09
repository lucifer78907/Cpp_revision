#include<iostream>
#include<vector>
#define nline "\n"
using namespace std;
int majority_ele(vector<int> &v)
{
    //find the candidate
    int candidate = 0,count =1;
    for(int i=1;i<v.size();i++)
    {
        if(v.at(i)==v.at(candidate))
            count++;
        else
            count--;
        if(count ==0)
        {
            candidate =i;
            count =1;
        }
    }
    // check if it is the majority
    int occurences = 0;
    int candidate_value = v.at(candidate);
    for(int &x:v)
    {
        if(x==candidate_value)
            occurences++;
    }
    if(occurences>(v.size()/2))
        return candidate;
    else    
        return -1;
}
int main()
{
    vector<int> v{8,8,6,6,6};
    int res_ind = majority_ele(v);
    if(res_ind==-1)
        cout<<"No majority"<<nline;
    else
        cout<<"The majority ele is :"<<v.at(res_ind)<<nline;
}