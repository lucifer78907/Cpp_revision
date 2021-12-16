#include<iostream>
#include<vector>
#include<algorithm>
#define nline "\n"
using namespace std;
int stock_buy_sell(vector<int> v)
{
    int profit =0;
    for(int i=1;i<v.size();i++)
    {
        if(v.at(i)>v.at(i-1))
        {
            profit+=(v.at(i)-v.at(i-1));
        }
    }
    return profit;
}
int main()
{
    vector<int> v{1,5,3,8,12};
    int max_profit = stock_buy_sell(v);
    cout<<"Max Profit Achieved :"<<max_profit<<nline;
}