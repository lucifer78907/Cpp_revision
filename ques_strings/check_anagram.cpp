#include<iostream>
#include<string>
#include<vector>
#define str string
#define nline "\n"
const int CHAR = 256;
using namespace std;
bool checkAna(const str& s1,const str& s2)
{
    vector<int> v(CHAR,0);
    if(s1.length()!=s2.length()) return false;
    for(int i=0;i<s1.length();i++)
    {
        v.at(s1.at(i))++;
        v.at(s2.at(i))--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(v.at(i)!=0)
            return false; //more than one freq
    }
    return true;
}
int main()
{
    str s1 ="listen",s2="silent";
    bool res = checkAna(s1,s2);
    if(res) cout<<"Yes it is a anagram"<<nline;
    else cout<<"No not a anagram"<<nline;
}