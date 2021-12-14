#include<iostream>
#include<string>
#define nline "\n"
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"The number is :"<<n<<nline;
    cin.ignore(); // to clear the whitespace in the buffer
    string s;
    getline(cin,s); // this will read the newline char from the input buffer 
    // getline doesn't exclude the whitespaces
    s.shrink_to_fit();
    for(auto x:s)
    {
        cout<<x;
    }
}