// GCD(A,B) -> product of min(pow(p1,a1),pow(p2,a2)) for each prime factor
// LCM(A,B) -> product of max(pow(p1,a1),pow(p2,a2)) for each prime factor
// GCD(A,B,C,...) -> GCD(GCD(GCD(A,B),C),...)
// LCM(A,B,C,...) -> LCM(LCM(LCM(A,B),C),...)
// GCD(A,B) * LCM(A,B) = A * B
// GCD(A,A+1) = 1


#include<bits/stdc++.h>
using namespace std;

int LeastCommonMultiple(int a,int b)
{
    int res=max(a,b);
    int flag=1;
    while(flag)
    {
        if(res%a==0 && res%b==0)
            break;
        res++;
    }
    return res;
}

int LeastCommonMultiple(int a,int b)
{
    return ((a/gcd(a,b))*b);    // only works for 2 numbers
}

int LeastCommonMultiple(int a,int b)
{
    return lcm(a,b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<LeastCommonMultiple(a,b)<<endl;
}