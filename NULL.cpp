#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
void fun(int *ptr)
{
    if(ptr){
        cout<<"Hello";
    }
    else
        cout<<"Meow";
}
void fun(int x)
{
    cout<<x;
}
int main()
{
    int *ptr=nullptr;
    fun(nullptr);
}