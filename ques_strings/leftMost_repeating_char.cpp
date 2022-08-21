#include<iostream>
#include<string>
#include<vector>
#define str string
#define nline "\n"
const int CHAR = 256;
using namespace std;
int leftMostRep(const str& s)
{
    vector<bool> visited(CHAR,false);
    int res = INT32_MAX;
    for(int i=s.length()-1;i>=0;i--)
    {
        // right to left reading so the left most repeating char will at last anyways
        if(visited.at(s.at(i)))
            res = i;
        else 
            visited.at(s.at(i)) = true; 
    }
    return res;
}
int main()
{
    str s = "abbcdee";
    int index = leftMostRep(s);
    if(index == INT32_MAX) cout<<"No left most repeating char"<<nline;
    else cout<<s.at(index)<<" is the left most repeating char "<<nline;
}