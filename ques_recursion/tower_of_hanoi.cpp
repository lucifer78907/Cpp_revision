#include<iostream>
#define ll long long
#define nline "\n"
using namespace std;
void TOH(ll int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"Move 1 Disc from "<<A<<" to "<<C<<nline;
        return;
    }
    TOH(n-1,A,C,B); //Move n-1 disks from A to B using C as aux
    cout<<"Move "<<n<<" Disc from "<<A<<" to "<<C<<nline;
    TOH(n-1,B,A,C); // Move n-1 disks from B to C using A as aux
}
int main()
{
    ll int n;
    char a='A',b='B',c='C';
    cin>>n;
    TOH(n,a,b,c);
}