
#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
void display(const vector<string>& v)
{
    for(const string& x:v)
    {
        cout<<x<<" ";
    }
}
vector<string> change_it(vector<string> r)
{
    for(string& x:r)
    {
        x="Sonal";
    }
    return r;
}
int main()
{
    string temp;
    vector<string> str;
    while(cin>>temp)
    {
        str.push_back(temp);
    }
    display(str);
    vector<string> res = change_it(str);
    display(res);
}