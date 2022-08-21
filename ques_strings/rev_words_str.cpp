#include<iostream>
#include<string>
#include<vector>
#define str string
#define nline "\n"
const int CHAR = 256;
using namespace std;
void reverse(str& s,int low,int high){
    while(low<high)
    {
        swap(s.at(low),s.at(high));
        low++;
        high--;
    }
}
void rev_words(str& s)
{
    int start = 0;
    for(int end=0;end<s.length();end++)
    {
        if(s.at(end) == ' ')
        {
            reverse(s,start,end-1);
            start = end+1;
        }
    }
    // explicitly reverse the last word
    reverse(s,start,s.length()-1);
    reverse(s,0,s.length()-1);
}

int main()
{
    str s = "Hello this is rudra";
    rev_words(s);
    cout<<"Modified string is :"<<s<<nline;
}
