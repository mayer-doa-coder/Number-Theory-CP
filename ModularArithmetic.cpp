#include <bits/stdc++.h>
using namespace std;

int modAdd(int a,int b,int m)
{
	return ((a % m) + (b % m)) % m;
}

int modSub(int a,int b,int m)
{
	return (((a % m) - (b % m) % m) + m) % m; // Adding m to handle negative numbers
}

int modMul(int a,int b,int m)
{
	return ((a % m) * (b % m)) % m;
}

int main()
{
	int a,b,mod;
    cin>>a>>b>>mod;
	cout<<"Modular Addition: "<<modAdd(a,b,mod)<<endl;
	cout<<"Modular Subtraction: "<<modSub(a,b,mod)<<endl;
	cout<<"Modular Multiplication: "<<modMul(a,b,mod)<<endl;
	return 0;
}
