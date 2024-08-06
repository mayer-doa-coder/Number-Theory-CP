#include<bits/stdc++.h>
using namespace std;

// O(N)
bool IsPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return n>1;
}

// O(sqrt(N))
bool IsPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return n>1;
}

int main()
{
    int n;
    cin>>n;
    bool prime=IsPrime(n);
    if(prime)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}