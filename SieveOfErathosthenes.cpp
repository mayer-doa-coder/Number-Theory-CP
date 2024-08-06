#include<bits/stdc++.h>
using namespace std;

vector<bool> primes(101,true);
void sieve()
{
    primes[0]=false;
    primes[1]=false;
    for(int i=2;i*i<=101;i++)
    {
        if(primes[i])
        {
            for(int j=i*i;j<=101;j+=i)
                primes[j]=false;
        }
    }
}

int main()
{
    sieve();
    int n;
    cin>>n;
    if(primes[n])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

// This algorithm is also used to check if a number is prime or not for queries (<= a million)