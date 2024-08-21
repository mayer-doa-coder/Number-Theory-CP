#include<bits/stdc++.h>
using namespace std;

// O(NlogN)
vector<int> spf(100,-1);
void PrimeFactSieve()
{
    for(int i=2;i<100;i++)
    {
        if(spf[i]==-1)
        {
            for(int j=i;j<100;j+=i)
            {
                if(spf[j]==-1)
                    spf[j]=i;
            }
        }
    }
}

int main()
{
    PrimeFactSieve();
    int n;
    cin>>n;
    while(n>1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}