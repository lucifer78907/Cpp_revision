#include<iostream>
#include<string>
#define ll long long
#define nline "\n"
using namespace std;
void print_permutations(string &s,int i=0)
{
    if(i==s.length()-1) //print as soon as it reaches the length same as the original string
    {
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s.at(i),s.at(j)); //swap the charcaters 
        print_permutations(s,i+1); //call recurisvely with fixing all the char one by one
        swap(s.at(j),s.at(i)); // swap back the char to get the original string back
    }
}
int main()
{
    string s;
    cin>>s;
    cin.ignore();
    print_permutations(s);
    cout<<nline;
}