// GCD(A,B) -> product of min(pow(p1,a1),pow(p2,a2)) for each prime factor
// LCM(A,B) -> product of max(pow(p1,a1),pow(p2,a2)) for each prime factor
// GCD(A,B,C,...) -> GCD(GCD(GCD(A,B),C),...)
// LCM(A,B,C,...) -> LCM(LCM(LCM(A,B),C),...)
// GCD(A,B) * LCM(A,B) = A * B
// GCD(A,A+1) = 1

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
