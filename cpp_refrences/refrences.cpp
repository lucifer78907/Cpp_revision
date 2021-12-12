#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
void swap(int& a,int& b)
{
    int temp =a;
    a=b;
    b=temp;
}
int main()
{
    int a=5;
    int b=6;
    cout<<"Before Swapping"<<nline;
    swap(a,b);
    cout<<a<<b<<nline;
}