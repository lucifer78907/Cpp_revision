#include<iostream>
#include<vector>
#include<list>
#define nline "\n"
#define ll long long
#define vi vector<int>
using namespace std;
struct MyHash
{
    int BUCKET; //bucket means (m) the number of slots 
    list<int> *l;
    MyHash(int b)
    {
        BUCKET = b;
        l = new list<int>[b];
    }
    void display()
    {
        cout<<"Hello world";
    }
};
void insert(int key,MyHash m)
{
    int i = key%m.BUCKET;
    m.l[i].push_back(key);
}
void remove(int key,MyHash m)
{
    int i = key%m.BUCKET;
    m.l[i].remove(key);
}
bool search(int key,MyHash m)
{
    int i = key%m.BUCKET;
    for(auto x:m.l[i])
    {
        if(x==key)  return true;
    }
    return false;
}

int main()
{
    MyHash m(7);
    m.display();
    insert(50,m);
    insert(21,m);
    insert(58,m);
    insert(17,m);
    insert(15,m);
    insert(49,m);
    insert(56,m);
    insert(22,m);
    insert(23,m);
    insert(25,m);
    cout<<"Is 50 present "<<search(50,m)<<nline;
    cout<<"Is 5 present "<<search(5,m);
}