#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
template <typename T>
class Pair{
    public:
    T x,y;
    Pair(T i,T j)
    {
        x=i;
        y=j;
    }
    T get_x()
    {
        return x;
    }
    T get_y()
    {
        return y;
    }

};
int main()
{
    Pair<int> p(1,2);
    cout<<p.get_x();
    cout<<p.get_y();
    Pair<float> r(1.1,2.2);
    cout<<r.get_x();
    cout<<r.get_y();

}