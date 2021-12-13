#include<iostream>
#define nline "\n"
using namespace std;
string hello()
{
    return "Hello";
}
int main()
{
    string (*func_ptr)() = hello;
    // auto *func_ptr = hello;
    cout<<func_ptr();
}