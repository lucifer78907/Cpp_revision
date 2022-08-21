#include<iostream>
#include<string>
#define nline "\n"
#define str string
using namespace std;
bool check_palindrome(const str& s)
{
    int beg = 0;
    int end = s.length()-1;
    while(beg<end)
    {
        if(s[beg]!=s[end]) return false;
        beg++;
        end--;
    }
    return true;
}
int main()
{
    str s;
    getline(cin,s);
    bool res = check_palindrome(s);
    if(res == true) cout<<"Yes it is a palindrome"<<nline;
    else cout<<"No it is not a palindrome"<<nline;
}