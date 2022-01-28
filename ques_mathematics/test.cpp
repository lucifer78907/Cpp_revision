#include<iostream>
#include<vector>
using namespace std;
int primeCount(long n) { 
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
                isPrime[j]=false; 
        }
    }
    if(n<2)
        return 0;
    else
    {
        int prime_cnt=0;
        long long int prime_product=1;
        long prime_indx=2;
        while(prime_product<n)
        {
            if(isPrime[prime_indx])
            {
                prime_product*=prime_indx;
                prime_cnt++;
            }
                prime_indx++;
        }
        return prime_cnt-1;
    }
}
int main()
{
    long n;
    cin>>n;
    cout<<primeCount(n);
}