#include<iostream>
#include<vector>
#define ll long long
#define nline "\n"
using namespace std;
void two_odd_occuring(vector<int> &v)
{
    ll int XOR =0;
    for(int& x:v)
        XOR = XOR ^ x;
    // finding the rightmost bit
    ll int rm_bit = XOR & ~(XOR-1);
    // placing set bits numbers in one res and unset bit no in one res
    ll int res1=0,res2=0;
    for(int& x:v)
    {
        if((rm_bit&x)!=0) //then set bits will come in res 1
            res1 = res1^x;
        else 
            res2 = res2^x;
    }
    cout<<"The two odd appearing numbers are :"<<res1<<" "<<res2<<endl;
}
int main()
{
    vector<int> v{3,3,5,7,7,4,4,4,4,6};
    two_odd_occuring(v);

}
