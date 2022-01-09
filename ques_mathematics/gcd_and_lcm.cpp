#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}
int lcm(int a,int b,int g)
{
    return (a*b)/g;
}
int main()
{
    int a=4,b=6;
    int g = gcd(a,b);
    int l = lcm(a,b,g);
    cout<<"Lcm is :"<<l<<" "<<"Hcf is:"<<g<<" "<<"\n";
}