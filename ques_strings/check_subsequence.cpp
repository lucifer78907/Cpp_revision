#include<iostream>
#include<string>
#define nline "\n"
#define str string
using namespace std;
bool check_subseq(const str& s1,const str& s2)
{
    int s1_size = s1.length();
    int s2_size = s2.length();
    if(s2_size > s1_size) return false;
    int j = 0;
    for(int i=0;i<s1_size && j<s2_size;i++)
    {
        if(s1.at(i) == s2.at(j)) j++;
    }
    return (j==s2_size);
}
int main()
{
    str s2,s1;
    getline(cin,s1);
    getline(cin,s2);
    bool res = check_subseq(s1,s2);
    if(res == true) cout<<"Yes s2 is a subseq of s1"<<nline;
    else cout<<"No s2 is not a subseq of s1"<<nline;
}