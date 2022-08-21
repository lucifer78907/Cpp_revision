#include<iostream>
#include<string>
#include<vector>
#define str string
#define nline "\n"
const int CHAR = 256;
using namespace std;
int leftMostNONRep(const str& s)
{
    vector<int> firstIndex(CHAR,-1); //-1 as no letter is seen
    for(int i=0;i<s.length();i++)
    {
        if(firstIndex.at(s.at(i))==-1) //first occurence
            firstIndex.at(s.at(i)) = i;
        else
            firstIndex.at(s.at(i)) = -2; // second or more occurence
    }
    int res = INT32_MAX;
    for(int i=0;i<CHAR;i++)
    {
        if(firstIndex.at(i)>=0)
                res = min(res,firstIndex.at(i));
    }
    return (res==INT32_MAX)?-1:res;
}
int main()
{
    str s = "ababcdee";
    int index = leftMostNONRep(s);
    if(index == INT32_MAX) cout<<"No left most NON repeating char"<<nline;
    else cout<<s.at(index)<<" is the left most NON repeating char "<<nline;
}
