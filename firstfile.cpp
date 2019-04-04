#include<iostream>
using namespace std;
long long gcd(long long,long long);
int main()
{
	long long t, a, b, g, l;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		g=gcd(a,b);
		l=(a*b)/g;
		cout<<g<<" "<<l<<"\n";
	}
	return 0;
}
long long gcd(long long a,long long b)
{
	if(b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}
