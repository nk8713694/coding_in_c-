#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1000000007;
//calculate a^b
ll power(ll a,ll b,ll m){
	ll ans=1;
	while(b!=0){
		if(b%2==1)
			ans=(ans*a)%m;
		a=(a*a)%m;
		b=b>>1;
	}
	return ans%m;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	ll a,b;
	cin>>a>>b;
	cout<<power(a,b,mod)<<endl;
	}
}
