#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7; 

// O(logN)
int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n%2!=0)
        {
            res=res*a;
            n--;
        }
        n=n/2;
        a=a*a;
    }
    return res;
}

// O(logN)
int power(int a,int n)
{
    if(n==0)
        return 1;
    int half_power=power(a,n/2);
    if(n%2==0)
        return ((half_power % MOD) * (half_power % MOD)) % MOD;
    else
        return (((half_power % MOD) * (half_power % MOD) % MOD) * (a % MOD)) % MOD;
}

int main()
{
    int a,n;
    cin>>a>>n;
    int ans=power(a,n);
    cout<<ans<<endl;
}