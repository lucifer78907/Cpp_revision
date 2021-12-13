#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define nline "\n"
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5,6};
    for_each(v.begin(),v.end(),[](int x){cout<<x<<" "<<nline;});
    // for modification we must pass by refrence
    // these all expect a boolean return value of lambda exp or func() passed to it
    auto my_ptr = [](int &x){x*=2;};
    for_each(v.begin(),v.end(),my_ptr);
    for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});
    
    //count if()
    int res =0;
    res = count_if(v.begin(),v.end(),[](int x){return x>2;});
    cout<<nline<<res<<nline;

    //find_if()
    auto i = find_if(v.begin(),v.end(),[](int a){return a>4;});
    cout<<*i<<nline;

    //accumulate
    auto my_sub = [](int a,int b){return a-b;};
    int res2 = accumulate(v.begin(),v.end(),0,my_sub);
    cout<<res2<<nline;
    
    // capture list
    int x=3,y=5;
    // auto ptr = [=](){
    //     x=x+3;
    //     y=y+3; assignment of read only variables is not possible
    //     cout<<x<<y<<nline;
    // };
    // ptr();
    // auto ptr = [=]()mutable{
    //     x=x+3;
    //     y=y+3; 
    //     cout<<x<<y<<nline;
    // };
    // ptr(); use mutuable to manipulate the copies
    cout<<x<<y;
}

