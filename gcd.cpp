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
int main() {
	long long int a,b,res;
	cin>>a>>b;
	if(a>b)
	res=gcd(a,b);
	else
	 res=gcd(b,a);
	
	cout<<res<<endl;
}
