#include<bits/stdc++.h>
using namespace std;

// O(min(A,B))
int GreatestCommonDivisor(int a,int b)
{
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
            break;
        res--;
    }
    return res;
}

// O(log(min(A,B)))
int GreatestCommonDivisor(int a,int b)
{
    if(a==0)
        return b;
    return GreatestCommonDivisor(b%a,a);
}

// O(log(min(A,B))) 
int GreatestCommonDivisor(int a,int b)
{
    return gcd(a,b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GreatestCommonDivisor(a,b)<<endl;
}
