#include<iostream>
#include<vector>
#define nline "\n";
using namespace std;
struct Jalebi{
    int sweetness;
    Jalebi()
    {
        sweetness=0;
    }
    Jalebi(int s)
    {
        sweetness=s;
    }
    int display()
    {
        return sweetness;
    }

};
int main()
{
    vector<Jalebi> v;
    for(int i=0;i<3;i++)
    {
        Jalebi obj(5);
        v.push_back(obj);
    }
    for(Jalebi x:v)
    {
        cout<<x.display()<<" ";
    }
    auto it = v.begin();
    cout<<it->display();
    it = next(it,2);
    cout<<it->display();
    for(vector<Jalebi>::iterator x=v.begin();x<v.end();x++)
    {
        cout<<x->display();
    }
}