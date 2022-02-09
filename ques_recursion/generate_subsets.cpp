#include<iostream>
#include<string>
#define ll long long
#define nline "\n"
using namespace std;
void print_subsets(string& s,string curr="",int i=0)
{
    if(i==s.length())
    // if it reaches the same level of recursion as string length
    // then print the string
    {
        if(curr=="")
        {
            cout<<"\"\""<<" ";
            return;
        }
        else
        {
        cout<<curr<<" ";
        return;
        }
    }
    print_subsets(s,curr,i+1); //doesnt include the char
    print_subsets(s,curr+s.at(i),i+1); // include the char
}
int main()
{
    string s;
    cin>>s;
    print_subsets(s);
    cout<<nline;
}
