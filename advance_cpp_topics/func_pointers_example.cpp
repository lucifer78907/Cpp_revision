#include<iostream>
#define nline "\n"
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int multiply(int x,int y)
{
    return x*y;
}
int compute(int x,int y,auto *func_ptr/*int (*func_ptr) (int,int) --alternate way*/)
{
    return func_ptr(x,y);
}
int main()
{
    int a=20,b=30;
    cout<<compute(a,b,add);
    cout<<compute(a,b,multiply);
}

