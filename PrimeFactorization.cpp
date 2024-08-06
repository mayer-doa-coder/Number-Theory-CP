#include<bits/stdc++.h>
using namespace std;

// O(sqrt(N)⋅log(N))
vector<int> PrimeFact(int n)
{
    vector<int> fact;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            fact.push_back(i);
            n=n/i;
        }
    }
    if(n>1)
        fact.push_back(n);
    return fact;
}

int main()
{
    int n;
    cin>>n;
    vector<int> ans=PrimeFact(n);
    for(auto it:ans)
        cout<<it<<" ";
    cout<<endl;
}
