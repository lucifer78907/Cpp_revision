#include<iostream>
#include<string>
#include<math.h>
#define ll long long
#define nline "\n"
using namespace std;
void subset_using_bitwise(string s)
{
    int len = s.length(); //size of str
    int size = pow(2,len); //no of subsets
    for(int counter=0;counter<size;counter++)
    {
        for(int j=0;j<len;j++)
        {
            // check for every number which bit is set and print it
            if((counter & (1<<j))!=0)
                cout<<s.at(j);
        }
        cout<<nline;
    }
}
int main()
{
    string s;
    cin>>s;
    subset_using_bitwise(s);
}
