#include<iostream>
#include<string>
#define ll long long
#define nline "\n"
using namespace std;
bool palindrome_check(string s,int start,int end)
{
    if(start>=end)
        return true; //for 1 or 0 length strings
    else
        return (s.at(start)==s.at(end)) && palindrome_check(s,start+1,end-1);
}
int main()
{
    string s;
    cin>>s;
    int start=0,end=s.length()-1;
    bool x = palindrome_check(s,start,end);
    if(x==true)
        cout<<"It is palindrome"<<nline;
    else
        cout<<"It is not a palindrome"<<nline;
}
