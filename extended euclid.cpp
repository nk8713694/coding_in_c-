#include<bits/stdc++.h>
using namespace std;
// this is known as fucking euclid algorithm
long long int gcd(long long int a,long long int b)
{
	if(a%b==0)
	return b;
	else
	return gcd(b,a%b);
}
int x,y,gcd;
int extended_euclid(int a,int b)
{
	if(b==0)
	{
		x=1;
		y=0;
		gcd=a;
		return;
	}
	extended_euclid(b,a%b);
	int cx=y;
	int cy=x-(a/b)*y;
	x=cx;
	y=cy;
}
// asssume the inverse check better would be check kar lo ki a asn m ki gcd kya hai
void get_modulo_inverse(int a,int m)
{
	if(gcd(a,m)==1)
	{
	
	extended_euclid(a,m);
	to make positive:
		x=(x+m)%m;
	cout<<x<<endl;// this give the value of b 
	}
}
int main() {
	long long int a,b,res;
	cin>>a>>b;
	if(a>b)
	res=gcd(a,b);
	else
	 res=gcd(b,a);
	
	cout<<res<<endl;
}
